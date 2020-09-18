require_rv64;
P_PACK_LOOP(32, {
    switch (i) {
        case 0:
            pd = ps1[1];
            break;
        case 1:
            pd = ps2[1];
            break;
        default:
            require(0);
            break;
    } 
});
