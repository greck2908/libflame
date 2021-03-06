/*

    Copyright (C) 2014, The University of Texas at Austin

    This file is part of libflame and is available under the 3-Clause
    BSD license, which can be found in the LICENSE file at the top-level
    directory, or at http://opensource.org/licenses/BSD-3-Clause

*/

#include "FLAME.h"

FLA_Error FLA_Apply_pivots_rt( FLA_Obj p, FLA_Obj A, fla_appiv_t* cntl )
{
	FLA_Error r_val = FLA_SUCCESS;

	if      ( FLA_Cntl_variant( cntl ) == FLA_UNBLOCKED_EXTERN )
	{
		FLA_Check_error_code( FLA_NOT_YET_IMPLEMENTED );
	}
	else if ( FLA_Cntl_variant( cntl ) == FLA_UNB_OPT_VARIANT1 )
	{
		r_val = FLA_Apply_pivots_rt_opt_var1( p, A );
	}
	else if ( FLA_Cntl_variant( cntl ) == FLA_BLOCKED_VARIANT1 )
	{
		FLA_Check_error_code( FLA_NOT_YET_IMPLEMENTED );
	}
	else if ( FLA_Cntl_variant( cntl ) == FLA_BLOCKED_VARIANT2 )
	{
		FLA_Check_error_code( FLA_NOT_YET_IMPLEMENTED );
	}
	else
	{
		FLA_Check_error_code( FLA_NOT_YET_IMPLEMENTED );
	}
   
	return r_val;
}

