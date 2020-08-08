#!/usr/bin/env python3

import re
from pathlib import Path

INSN_DIR = Path(__file__).resolve().parents[0]

INSN_COUNT_MACRO = "ADD_INSN_COUNT"
CYCLE_COUNT_MACRO = "ADD_CYCLE_COUNT"


def is_vext_insn(filename: Path) -> bool:
    return filename.name.startswith("v")


def is_header_file(filename: Path) -> bool:
    return filename.suffix == ".h"


def is_whole_vmv(filename: Path) -> bool:
    m = re.match(r"vmv\dr_v", filename.stem)
    return bool(m)


def add_ic_macro(filename: Path):
    content = ""
    with filename.open("r") as f:
        for line in f:
            if INSN_COUNT_MACRO in line:
                continue
            if CYCLE_COUNT_MACRO in line:
                continue
            content += line
    cycle = 1
    if is_vext_insn(filename):
        cycle = 3
    content += f"{INSN_COUNT_MACRO}(1);\n"
    content += f"{CYCLE_COUNT_MACRO}({cycle});\n"
    with filename.open("w") as f:
        f.write(content)


if __name__ == "__main__":
    for filename in INSN_DIR.iterdir():
        if not is_header_file(filename) or is_whole_vmv(filename):
            continue
        add_ic_macro(filename)
