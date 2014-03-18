
#include "FLAME.h"

FLA_Error FLA_Herk_task( FLA_Uplo uplo, FLA_Trans trans, FLA_Obj alpha, FLA_Obj A, FLA_Obj beta, FLA_Obj C, fla_herk_t* cntl )
{
  return FLA_Herk_external( uplo, trans, alpha, A, beta, C );
}

FLA_Error FLA_Herk_ln_task( FLA_Obj alpha, FLA_Obj A, FLA_Obj beta, FLA_Obj C, fla_herk_t* cntl )
{
  return FLA_Herk_external( FLA_LOWER_TRIANGULAR, FLA_NO_TRANSPOSE, alpha, A, beta, C );
}

FLA_Error FLA_Herk_lh_task( FLA_Obj alpha, FLA_Obj A, FLA_Obj beta, FLA_Obj C, fla_herk_t* cntl )
{
  return FLA_Herk_external( FLA_LOWER_TRIANGULAR, FLA_CONJ_TRANSPOSE, alpha, A, beta, C );
}

FLA_Error FLA_Herk_un_task( FLA_Obj alpha, FLA_Obj A, FLA_Obj beta, FLA_Obj C, fla_herk_t* cntl )
{
  return FLA_Herk_external( FLA_UPPER_TRIANGULAR, FLA_NO_TRANSPOSE, alpha, A, beta, C );
}

FLA_Error FLA_Herk_uh_task( FLA_Obj alpha, FLA_Obj A, FLA_Obj beta, FLA_Obj C, fla_herk_t* cntl )
{
  return FLA_Herk_external( FLA_UPPER_TRIANGULAR, FLA_CONJ_TRANSPOSE, alpha, A, beta, C );
}
