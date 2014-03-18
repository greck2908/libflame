n = 8;
A = rand( n, n ) + n * eye( n, n );
B = rand( n, n );

Cref = triu( A ) \ B;

norm( FLA_Trsm_lun_unb_var1( A, B ) - Cref, 1 )
norm( FLA_Trsm_lun_unb_var2( A, B ) - Cref, 1 )
norm( FLA_Trsm_lun_unb_var3( A, B ) - Cref, 1 )
norm( FLA_Trsm_lun_unb_var4( A, B ) - Cref, 1 )

norm( FLA_Trsm_lun_blk_var1( A, B, 3 ) - Cref, 1 )
norm( FLA_Trsm_lun_blk_var2( A, B, 3 ) - Cref, 1 )
norm( FLA_Trsm_lun_blk_var3( A, B, 3 ) - Cref, 1 )
norm( FLA_Trsm_lun_blk_var4( A, B, 3 ) - Cref, 1 )