#pragma once

#ifndef ANDROID_RENDERSCRIPT_SCRIPTINTRINSICBLAS
#define ANDROID_RENDERSCRIPT_SCRIPTINTRINSICBLAS

#include "ScriptIntrinsic.hpp"

namespace __jni_impl::android::renderscript
{
	class RenderScript;
}
namespace __jni_impl::android::renderscript
{
	class Allocation;
}
namespace __jni_impl::android::renderscript
{
	class Float2;
}
namespace __jni_impl::android::renderscript
{
	class Double2;
}

namespace __jni_impl::android::renderscript
{
	class ScriptIntrinsicBLAS : public __jni_impl::android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		static jint CONJ_TRANSPOSE();
		static jint LEFT();
		static jint LOWER();
		static jint NON_UNIT();
		static jint NO_TRANSPOSE();
		static jint RIGHT();
		static jint TRANSPOSE();
		static jint UNIT();
		static jint UPPER();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject create(__jni_impl::android::renderscript::RenderScript arg0);
		void SGEMV(jint arg0, jfloat arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, jfloat arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7);
		void DGEMV(jint arg0, jdouble arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, jdouble arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7);
		void CGEMV(jint arg0, __jni_impl::android::renderscript::Float2 arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Float2 arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7);
		void ZGEMV(jint arg0, __jni_impl::android::renderscript::Double2 arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Double2 arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7);
		void SGBMV(jint arg0, jint arg1, jint arg2, jfloat arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6, jfloat arg7, __jni_impl::android::renderscript::Allocation arg8, jint arg9);
		void DGBMV(jint arg0, jint arg1, jint arg2, jdouble arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6, jdouble arg7, __jni_impl::android::renderscript::Allocation arg8, jint arg9);
		void CGBMV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Float2 arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6, __jni_impl::android::renderscript::Float2 arg7, __jni_impl::android::renderscript::Allocation arg8, jint arg9);
		void ZGBMV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Double2 arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6, __jni_impl::android::renderscript::Double2 arg7, __jni_impl::android::renderscript::Allocation arg8, jint arg9);
		void STRMV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5);
		void DTRMV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5);
		void CTRMV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5);
		void ZTRMV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5);
		void STBMV(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6);
		void DTBMV(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6);
		void CTBMV(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6);
		void ZTBMV(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6);
		void STPMV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5);
		void DTPMV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5);
		void CTPMV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5);
		void ZTPMV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5);
		void STRSV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5);
		void DTRSV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5);
		void CTRSV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5);
		void ZTRSV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5);
		void STBSV(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6);
		void DTBSV(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6);
		void CTBSV(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6);
		void ZTBSV(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6);
		void STPSV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5);
		void DTPSV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5);
		void CTPSV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5);
		void ZTPSV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5);
		void SSYMV(jint arg0, jfloat arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, jfloat arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7);
		void SSBMV(jint arg0, jint arg1, jfloat arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, jfloat arg6, __jni_impl::android::renderscript::Allocation arg7, jint arg8);
		void SSPMV(jint arg0, jfloat arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, jfloat arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7);
		void SGER(jfloat arg0, __jni_impl::android::renderscript::Allocation arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Allocation arg5);
		void SSYR(jint arg0, jfloat arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4);
		void SSPR(jint arg0, jfloat arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4);
		void SSYR2(jint arg0, jfloat arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, __jni_impl::android::renderscript::Allocation arg6);
		void SSPR2(jint arg0, jfloat arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, __jni_impl::android::renderscript::Allocation arg6);
		void DSYMV(jint arg0, jdouble arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, jdouble arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7);
		void DSBMV(jint arg0, jint arg1, jdouble arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, jdouble arg6, __jni_impl::android::renderscript::Allocation arg7, jint arg8);
		void DSPMV(jint arg0, jdouble arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, jdouble arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7);
		void DGER(jdouble arg0, __jni_impl::android::renderscript::Allocation arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Allocation arg5);
		void DSYR(jint arg0, jdouble arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4);
		void DSPR(jint arg0, jdouble arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4);
		void DSYR2(jint arg0, jdouble arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, __jni_impl::android::renderscript::Allocation arg6);
		void DSPR2(jint arg0, jdouble arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, __jni_impl::android::renderscript::Allocation arg6);
		void CHEMV(jint arg0, __jni_impl::android::renderscript::Float2 arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Float2 arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7);
		void CHBMV(jint arg0, jint arg1, __jni_impl::android::renderscript::Float2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, __jni_impl::android::renderscript::Float2 arg6, __jni_impl::android::renderscript::Allocation arg7, jint arg8);
		void CHPMV(jint arg0, __jni_impl::android::renderscript::Float2 arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Float2 arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7);
		void CGERU(__jni_impl::android::renderscript::Float2 arg0, __jni_impl::android::renderscript::Allocation arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Allocation arg5);
		void CGERC(__jni_impl::android::renderscript::Float2 arg0, __jni_impl::android::renderscript::Allocation arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Allocation arg5);
		void CHER(jint arg0, jfloat arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4);
		void CHPR(jint arg0, jfloat arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4);
		void CHER2(jint arg0, __jni_impl::android::renderscript::Float2 arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, __jni_impl::android::renderscript::Allocation arg6);
		void CHPR2(jint arg0, __jni_impl::android::renderscript::Float2 arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, __jni_impl::android::renderscript::Allocation arg6);
		void ZHEMV(jint arg0, __jni_impl::android::renderscript::Double2 arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Double2 arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7);
		void ZHBMV(jint arg0, jint arg1, __jni_impl::android::renderscript::Double2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, __jni_impl::android::renderscript::Double2 arg6, __jni_impl::android::renderscript::Allocation arg7, jint arg8);
		void ZHPMV(jint arg0, __jni_impl::android::renderscript::Double2 arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Double2 arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7);
		void ZGERU(__jni_impl::android::renderscript::Double2 arg0, __jni_impl::android::renderscript::Allocation arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Allocation arg5);
		void ZGERC(__jni_impl::android::renderscript::Double2 arg0, __jni_impl::android::renderscript::Allocation arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Allocation arg5);
		void ZHER(jint arg0, jdouble arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4);
		void ZHPR(jint arg0, jdouble arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4);
		void ZHER2(jint arg0, __jni_impl::android::renderscript::Double2 arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, __jni_impl::android::renderscript::Allocation arg6);
		void ZHPR2(jint arg0, __jni_impl::android::renderscript::Double2 arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, __jni_impl::android::renderscript::Allocation arg6);
		void SGEMM(jint arg0, jint arg1, jfloat arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jfloat arg5, __jni_impl::android::renderscript::Allocation arg6);
		void DGEMM(jint arg0, jint arg1, jdouble arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jdouble arg5, __jni_impl::android::renderscript::Allocation arg6);
		void CGEMM(jint arg0, jint arg1, __jni_impl::android::renderscript::Float2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Float2 arg5, __jni_impl::android::renderscript::Allocation arg6);
		void ZGEMM(jint arg0, jint arg1, __jni_impl::android::renderscript::Double2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Double2 arg5, __jni_impl::android::renderscript::Allocation arg6);
		void SSYMM(jint arg0, jint arg1, jfloat arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jfloat arg5, __jni_impl::android::renderscript::Allocation arg6);
		void DSYMM(jint arg0, jint arg1, jdouble arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jdouble arg5, __jni_impl::android::renderscript::Allocation arg6);
		void CSYMM(jint arg0, jint arg1, __jni_impl::android::renderscript::Float2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Float2 arg5, __jni_impl::android::renderscript::Allocation arg6);
		void ZSYMM(jint arg0, jint arg1, __jni_impl::android::renderscript::Double2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Double2 arg5, __jni_impl::android::renderscript::Allocation arg6);
		void SSYRK(jint arg0, jint arg1, jfloat arg2, __jni_impl::android::renderscript::Allocation arg3, jfloat arg4, __jni_impl::android::renderscript::Allocation arg5);
		void DSYRK(jint arg0, jint arg1, jdouble arg2, __jni_impl::android::renderscript::Allocation arg3, jdouble arg4, __jni_impl::android::renderscript::Allocation arg5);
		void CSYRK(jint arg0, jint arg1, __jni_impl::android::renderscript::Float2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Float2 arg4, __jni_impl::android::renderscript::Allocation arg5);
		void ZSYRK(jint arg0, jint arg1, __jni_impl::android::renderscript::Double2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Double2 arg4, __jni_impl::android::renderscript::Allocation arg5);
		void SSYR2K(jint arg0, jint arg1, jfloat arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jfloat arg5, __jni_impl::android::renderscript::Allocation arg6);
		void DSYR2K(jint arg0, jint arg1, jdouble arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jdouble arg5, __jni_impl::android::renderscript::Allocation arg6);
		void CSYR2K(jint arg0, jint arg1, __jni_impl::android::renderscript::Float2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Float2 arg5, __jni_impl::android::renderscript::Allocation arg6);
		void ZSYR2K(jint arg0, jint arg1, __jni_impl::android::renderscript::Double2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Double2 arg5, __jni_impl::android::renderscript::Allocation arg6);
		void STRMM(jint arg0, jint arg1, jint arg2, jint arg3, jfloat arg4, __jni_impl::android::renderscript::Allocation arg5, __jni_impl::android::renderscript::Allocation arg6);
		void DTRMM(jint arg0, jint arg1, jint arg2, jint arg3, jdouble arg4, __jni_impl::android::renderscript::Allocation arg5, __jni_impl::android::renderscript::Allocation arg6);
		void CTRMM(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Float2 arg4, __jni_impl::android::renderscript::Allocation arg5, __jni_impl::android::renderscript::Allocation arg6);
		void ZTRMM(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Double2 arg4, __jni_impl::android::renderscript::Allocation arg5, __jni_impl::android::renderscript::Allocation arg6);
		void STRSM(jint arg0, jint arg1, jint arg2, jint arg3, jfloat arg4, __jni_impl::android::renderscript::Allocation arg5, __jni_impl::android::renderscript::Allocation arg6);
		void DTRSM(jint arg0, jint arg1, jint arg2, jint arg3, jdouble arg4, __jni_impl::android::renderscript::Allocation arg5, __jni_impl::android::renderscript::Allocation arg6);
		void CTRSM(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Float2 arg4, __jni_impl::android::renderscript::Allocation arg5, __jni_impl::android::renderscript::Allocation arg6);
		void ZTRSM(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Double2 arg4, __jni_impl::android::renderscript::Allocation arg5, __jni_impl::android::renderscript::Allocation arg6);
		void CHEMM(jint arg0, jint arg1, __jni_impl::android::renderscript::Float2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Float2 arg5, __jni_impl::android::renderscript::Allocation arg6);
		void ZHEMM(jint arg0, jint arg1, __jni_impl::android::renderscript::Double2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Double2 arg5, __jni_impl::android::renderscript::Allocation arg6);
		void CHERK(jint arg0, jint arg1, jfloat arg2, __jni_impl::android::renderscript::Allocation arg3, jfloat arg4, __jni_impl::android::renderscript::Allocation arg5);
		void ZHERK(jint arg0, jint arg1, jdouble arg2, __jni_impl::android::renderscript::Allocation arg3, jdouble arg4, __jni_impl::android::renderscript::Allocation arg5);
		void CHER2K(jint arg0, jint arg1, __jni_impl::android::renderscript::Float2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jfloat arg5, __jni_impl::android::renderscript::Allocation arg6);
		void ZHER2K(jint arg0, jint arg1, __jni_impl::android::renderscript::Double2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jdouble arg5, __jni_impl::android::renderscript::Allocation arg6);
		void BNNM(__jni_impl::android::renderscript::Allocation arg0, jint arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, jint arg6);
	};
} // namespace __jni_impl::android::renderscript

#include "RenderScript.hpp"
#include "Allocation.hpp"
#include "Float2.hpp"
#include "Double2.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	jint ScriptIntrinsicBLAS::CONJ_TRANSPOSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.ScriptIntrinsicBLAS",
			"CONJ_TRANSPOSE");
	}
	jint ScriptIntrinsicBLAS::LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.ScriptIntrinsicBLAS",
			"LEFT");
	}
	jint ScriptIntrinsicBLAS::LOWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.ScriptIntrinsicBLAS",
			"LOWER");
	}
	jint ScriptIntrinsicBLAS::NON_UNIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.ScriptIntrinsicBLAS",
			"NON_UNIT");
	}
	jint ScriptIntrinsicBLAS::NO_TRANSPOSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.ScriptIntrinsicBLAS",
			"NO_TRANSPOSE");
	}
	jint ScriptIntrinsicBLAS::RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.ScriptIntrinsicBLAS",
			"RIGHT");
	}
	jint ScriptIntrinsicBLAS::TRANSPOSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.ScriptIntrinsicBLAS",
			"TRANSPOSE");
	}
	jint ScriptIntrinsicBLAS::UNIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.ScriptIntrinsicBLAS",
			"UNIT");
	}
	jint ScriptIntrinsicBLAS::UPPER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.ScriptIntrinsicBLAS",
			"UPPER");
	}
	
	// Constructors
	void ScriptIntrinsicBLAS::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptIntrinsicBLAS",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ScriptIntrinsicBLAS::create(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicBLAS",
			"create",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/ScriptIntrinsicBLAS;",
			arg0.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::SGEMV(jint arg0, jfloat arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, jfloat arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7)
	{
		__thiz.callMethod<void>(
			"SGEMV",
			"(IFLandroid/renderscript/Allocation;Landroid/renderscript/Allocation;IFLandroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7);
	}
	void ScriptIntrinsicBLAS::DGEMV(jint arg0, jdouble arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, jdouble arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7)
	{
		__thiz.callMethod<void>(
			"DGEMV",
			"(IDLandroid/renderscript/Allocation;Landroid/renderscript/Allocation;IDLandroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7);
	}
	void ScriptIntrinsicBLAS::CGEMV(jint arg0, __jni_impl::android::renderscript::Float2 arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Float2 arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7)
	{
		__thiz.callMethod<void>(
			"CGEMV",
			"(ILandroid/renderscript/Float2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;ILandroid/renderscript/Float2;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7);
	}
	void ScriptIntrinsicBLAS::ZGEMV(jint arg0, __jni_impl::android::renderscript::Double2 arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Double2 arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7)
	{
		__thiz.callMethod<void>(
			"ZGEMV",
			"(ILandroid/renderscript/Double2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;ILandroid/renderscript/Double2;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7);
	}
	void ScriptIntrinsicBLAS::SGBMV(jint arg0, jint arg1, jint arg2, jfloat arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6, jfloat arg7, __jni_impl::android::renderscript::Allocation arg8, jint arg9)
	{
		__thiz.callMethod<void>(
			"SGBMV",
			"(IIIFLandroid/renderscript/Allocation;Landroid/renderscript/Allocation;IFLandroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6,
			arg7,
			arg8.__jniObject().object(),
			arg9);
	}
	void ScriptIntrinsicBLAS::DGBMV(jint arg0, jint arg1, jint arg2, jdouble arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6, jdouble arg7, __jni_impl::android::renderscript::Allocation arg8, jint arg9)
	{
		__thiz.callMethod<void>(
			"DGBMV",
			"(IIIDLandroid/renderscript/Allocation;Landroid/renderscript/Allocation;IDLandroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6,
			arg7,
			arg8.__jniObject().object(),
			arg9);
	}
	void ScriptIntrinsicBLAS::CGBMV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Float2 arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6, __jni_impl::android::renderscript::Float2 arg7, __jni_impl::android::renderscript::Allocation arg8, jint arg9)
	{
		__thiz.callMethod<void>(
			"CGBMV",
			"(IIILandroid/renderscript/Float2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;ILandroid/renderscript/Float2;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6,
			arg7.__jniObject().object(),
			arg8.__jniObject().object(),
			arg9);
	}
	void ScriptIntrinsicBLAS::ZGBMV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Double2 arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6, __jni_impl::android::renderscript::Double2 arg7, __jni_impl::android::renderscript::Allocation arg8, jint arg9)
	{
		__thiz.callMethod<void>(
			"ZGBMV",
			"(IIILandroid/renderscript/Double2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;ILandroid/renderscript/Double2;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6,
			arg7.__jniObject().object(),
			arg8.__jniObject().object(),
			arg9);
	}
	void ScriptIntrinsicBLAS::STRMV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"STRMV",
			"(IIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5);
	}
	void ScriptIntrinsicBLAS::DTRMV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"DTRMV",
			"(IIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5);
	}
	void ScriptIntrinsicBLAS::CTRMV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"CTRMV",
			"(IIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5);
	}
	void ScriptIntrinsicBLAS::ZTRMV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"ZTRMV",
			"(IIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5);
	}
	void ScriptIntrinsicBLAS::STBMV(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6)
	{
		__thiz.callMethod<void>(
			"STBMV",
			"(IIIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6);
	}
	void ScriptIntrinsicBLAS::DTBMV(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6)
	{
		__thiz.callMethod<void>(
			"DTBMV",
			"(IIIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6);
	}
	void ScriptIntrinsicBLAS::CTBMV(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6)
	{
		__thiz.callMethod<void>(
			"CTBMV",
			"(IIIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6);
	}
	void ScriptIntrinsicBLAS::ZTBMV(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6)
	{
		__thiz.callMethod<void>(
			"ZTBMV",
			"(IIIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6);
	}
	void ScriptIntrinsicBLAS::STPMV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"STPMV",
			"(IIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5);
	}
	void ScriptIntrinsicBLAS::DTPMV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"DTPMV",
			"(IIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5);
	}
	void ScriptIntrinsicBLAS::CTPMV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"CTPMV",
			"(IIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5);
	}
	void ScriptIntrinsicBLAS::ZTPMV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"ZTPMV",
			"(IIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5);
	}
	void ScriptIntrinsicBLAS::STRSV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"STRSV",
			"(IIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5);
	}
	void ScriptIntrinsicBLAS::DTRSV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"DTRSV",
			"(IIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5);
	}
	void ScriptIntrinsicBLAS::CTRSV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"CTRSV",
			"(IIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5);
	}
	void ScriptIntrinsicBLAS::ZTRSV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"ZTRSV",
			"(IIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5);
	}
	void ScriptIntrinsicBLAS::STBSV(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6)
	{
		__thiz.callMethod<void>(
			"STBSV",
			"(IIIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6);
	}
	void ScriptIntrinsicBLAS::DTBSV(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6)
	{
		__thiz.callMethod<void>(
			"DTBSV",
			"(IIIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6);
	}
	void ScriptIntrinsicBLAS::CTBSV(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6)
	{
		__thiz.callMethod<void>(
			"CTBSV",
			"(IIIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6);
	}
	void ScriptIntrinsicBLAS::ZTBSV(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Allocation arg5, jint arg6)
	{
		__thiz.callMethod<void>(
			"ZTBSV",
			"(IIIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6);
	}
	void ScriptIntrinsicBLAS::STPSV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"STPSV",
			"(IIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5);
	}
	void ScriptIntrinsicBLAS::DTPSV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"DTPSV",
			"(IIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5);
	}
	void ScriptIntrinsicBLAS::CTPSV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"CTPSV",
			"(IIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5);
	}
	void ScriptIntrinsicBLAS::ZTPSV(jint arg0, jint arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"ZTPSV",
			"(IIILandroid/renderscript/Allocation;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5);
	}
	void ScriptIntrinsicBLAS::SSYMV(jint arg0, jfloat arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, jfloat arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7)
	{
		__thiz.callMethod<void>(
			"SSYMV",
			"(IFLandroid/renderscript/Allocation;Landroid/renderscript/Allocation;IFLandroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7);
	}
	void ScriptIntrinsicBLAS::SSBMV(jint arg0, jint arg1, jfloat arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, jfloat arg6, __jni_impl::android::renderscript::Allocation arg7, jint arg8)
	{
		__thiz.callMethod<void>(
			"SSBMV",
			"(IIFLandroid/renderscript/Allocation;Landroid/renderscript/Allocation;IFLandroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6,
			arg7.__jniObject().object(),
			arg8);
	}
	void ScriptIntrinsicBLAS::SSPMV(jint arg0, jfloat arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, jfloat arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7)
	{
		__thiz.callMethod<void>(
			"SSPMV",
			"(IFLandroid/renderscript/Allocation;Landroid/renderscript/Allocation;IFLandroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7);
	}
	void ScriptIntrinsicBLAS::SGER(jfloat arg0, __jni_impl::android::renderscript::Allocation arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Allocation arg5)
	{
		__thiz.callMethod<void>(
			"SGER",
			"(FLandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::SSYR(jint arg0, jfloat arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4)
	{
		__thiz.callMethod<void>(
			"SSYR",
			"(IFLandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::SSPR(jint arg0, jfloat arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4)
	{
		__thiz.callMethod<void>(
			"SSPR",
			"(IFLandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::SSYR2(jint arg0, jfloat arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"SSYR2",
			"(IFLandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::SSPR2(jint arg0, jfloat arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"SSPR2",
			"(IFLandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::DSYMV(jint arg0, jdouble arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, jdouble arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7)
	{
		__thiz.callMethod<void>(
			"DSYMV",
			"(IDLandroid/renderscript/Allocation;Landroid/renderscript/Allocation;IDLandroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7);
	}
	void ScriptIntrinsicBLAS::DSBMV(jint arg0, jint arg1, jdouble arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, jdouble arg6, __jni_impl::android::renderscript::Allocation arg7, jint arg8)
	{
		__thiz.callMethod<void>(
			"DSBMV",
			"(IIDLandroid/renderscript/Allocation;Landroid/renderscript/Allocation;IDLandroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6,
			arg7.__jniObject().object(),
			arg8);
	}
	void ScriptIntrinsicBLAS::DSPMV(jint arg0, jdouble arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, jdouble arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7)
	{
		__thiz.callMethod<void>(
			"DSPMV",
			"(IDLandroid/renderscript/Allocation;Landroid/renderscript/Allocation;IDLandroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7);
	}
	void ScriptIntrinsicBLAS::DGER(jdouble arg0, __jni_impl::android::renderscript::Allocation arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Allocation arg5)
	{
		__thiz.callMethod<void>(
			"DGER",
			"(DLandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::DSYR(jint arg0, jdouble arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4)
	{
		__thiz.callMethod<void>(
			"DSYR",
			"(IDLandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::DSPR(jint arg0, jdouble arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4)
	{
		__thiz.callMethod<void>(
			"DSPR",
			"(IDLandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::DSYR2(jint arg0, jdouble arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"DSYR2",
			"(IDLandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::DSPR2(jint arg0, jdouble arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"DSPR2",
			"(IDLandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::CHEMV(jint arg0, __jni_impl::android::renderscript::Float2 arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Float2 arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7)
	{
		__thiz.callMethod<void>(
			"CHEMV",
			"(ILandroid/renderscript/Float2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;ILandroid/renderscript/Float2;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7);
	}
	void ScriptIntrinsicBLAS::CHBMV(jint arg0, jint arg1, __jni_impl::android::renderscript::Float2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, __jni_impl::android::renderscript::Float2 arg6, __jni_impl::android::renderscript::Allocation arg7, jint arg8)
	{
		__thiz.callMethod<void>(
			"CHBMV",
			"(IILandroid/renderscript/Float2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;ILandroid/renderscript/Float2;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object(),
			arg7.__jniObject().object(),
			arg8);
	}
	void ScriptIntrinsicBLAS::CHPMV(jint arg0, __jni_impl::android::renderscript::Float2 arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Float2 arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7)
	{
		__thiz.callMethod<void>(
			"CHPMV",
			"(ILandroid/renderscript/Float2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;ILandroid/renderscript/Float2;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7);
	}
	void ScriptIntrinsicBLAS::CGERU(__jni_impl::android::renderscript::Float2 arg0, __jni_impl::android::renderscript::Allocation arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Allocation arg5)
	{
		__thiz.callMethod<void>(
			"CGERU",
			"(Landroid/renderscript/Float2;Landroid/renderscript/Allocation;ILandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::CGERC(__jni_impl::android::renderscript::Float2 arg0, __jni_impl::android::renderscript::Allocation arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Allocation arg5)
	{
		__thiz.callMethod<void>(
			"CGERC",
			"(Landroid/renderscript/Float2;Landroid/renderscript/Allocation;ILandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::CHER(jint arg0, jfloat arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4)
	{
		__thiz.callMethod<void>(
			"CHER",
			"(IFLandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::CHPR(jint arg0, jfloat arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4)
	{
		__thiz.callMethod<void>(
			"CHPR",
			"(IFLandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::CHER2(jint arg0, __jni_impl::android::renderscript::Float2 arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"CHER2",
			"(ILandroid/renderscript/Float2;Landroid/renderscript/Allocation;ILandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::CHPR2(jint arg0, __jni_impl::android::renderscript::Float2 arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"CHPR2",
			"(ILandroid/renderscript/Float2;Landroid/renderscript/Allocation;ILandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::ZHEMV(jint arg0, __jni_impl::android::renderscript::Double2 arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Double2 arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7)
	{
		__thiz.callMethod<void>(
			"ZHEMV",
			"(ILandroid/renderscript/Double2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;ILandroid/renderscript/Double2;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7);
	}
	void ScriptIntrinsicBLAS::ZHBMV(jint arg0, jint arg1, __jni_impl::android::renderscript::Double2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, __jni_impl::android::renderscript::Double2 arg6, __jni_impl::android::renderscript::Allocation arg7, jint arg8)
	{
		__thiz.callMethod<void>(
			"ZHBMV",
			"(IILandroid/renderscript/Double2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;ILandroid/renderscript/Double2;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object(),
			arg7.__jniObject().object(),
			arg8);
	}
	void ScriptIntrinsicBLAS::ZHPMV(jint arg0, __jni_impl::android::renderscript::Double2 arg1, __jni_impl::android::renderscript::Allocation arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Double2 arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7)
	{
		__thiz.callMethod<void>(
			"ZHPMV",
			"(ILandroid/renderscript/Double2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;ILandroid/renderscript/Double2;Landroid/renderscript/Allocation;I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7);
	}
	void ScriptIntrinsicBLAS::ZGERU(__jni_impl::android::renderscript::Double2 arg0, __jni_impl::android::renderscript::Allocation arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Allocation arg5)
	{
		__thiz.callMethod<void>(
			"ZGERU",
			"(Landroid/renderscript/Double2;Landroid/renderscript/Allocation;ILandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::ZGERC(__jni_impl::android::renderscript::Double2 arg0, __jni_impl::android::renderscript::Allocation arg1, jint arg2, __jni_impl::android::renderscript::Allocation arg3, jint arg4, __jni_impl::android::renderscript::Allocation arg5)
	{
		__thiz.callMethod<void>(
			"ZGERC",
			"(Landroid/renderscript/Double2;Landroid/renderscript/Allocation;ILandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::ZHER(jint arg0, jdouble arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4)
	{
		__thiz.callMethod<void>(
			"ZHER",
			"(IDLandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::ZHPR(jint arg0, jdouble arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4)
	{
		__thiz.callMethod<void>(
			"ZHPR",
			"(IDLandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::ZHER2(jint arg0, __jni_impl::android::renderscript::Double2 arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"ZHER2",
			"(ILandroid/renderscript/Double2;Landroid/renderscript/Allocation;ILandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::ZHPR2(jint arg0, __jni_impl::android::renderscript::Double2 arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"ZHPR2",
			"(ILandroid/renderscript/Double2;Landroid/renderscript/Allocation;ILandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::SGEMM(jint arg0, jint arg1, jfloat arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jfloat arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"SGEMM",
			"(IIFLandroid/renderscript/Allocation;Landroid/renderscript/Allocation;FLandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::DGEMM(jint arg0, jint arg1, jdouble arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jdouble arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"DGEMM",
			"(IIDLandroid/renderscript/Allocation;Landroid/renderscript/Allocation;DLandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::CGEMM(jint arg0, jint arg1, __jni_impl::android::renderscript::Float2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Float2 arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"CGEMM",
			"(IILandroid/renderscript/Float2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Float2;Landroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::ZGEMM(jint arg0, jint arg1, __jni_impl::android::renderscript::Double2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Double2 arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"ZGEMM",
			"(IILandroid/renderscript/Double2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Double2;Landroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::SSYMM(jint arg0, jint arg1, jfloat arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jfloat arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"SSYMM",
			"(IIFLandroid/renderscript/Allocation;Landroid/renderscript/Allocation;FLandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::DSYMM(jint arg0, jint arg1, jdouble arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jdouble arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"DSYMM",
			"(IIDLandroid/renderscript/Allocation;Landroid/renderscript/Allocation;DLandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::CSYMM(jint arg0, jint arg1, __jni_impl::android::renderscript::Float2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Float2 arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"CSYMM",
			"(IILandroid/renderscript/Float2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Float2;Landroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::ZSYMM(jint arg0, jint arg1, __jni_impl::android::renderscript::Double2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Double2 arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"ZSYMM",
			"(IILandroid/renderscript/Double2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Double2;Landroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::SSYRK(jint arg0, jint arg1, jfloat arg2, __jni_impl::android::renderscript::Allocation arg3, jfloat arg4, __jni_impl::android::renderscript::Allocation arg5)
	{
		__thiz.callMethod<void>(
			"SSYRK",
			"(IIFLandroid/renderscript/Allocation;FLandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::DSYRK(jint arg0, jint arg1, jdouble arg2, __jni_impl::android::renderscript::Allocation arg3, jdouble arg4, __jni_impl::android::renderscript::Allocation arg5)
	{
		__thiz.callMethod<void>(
			"DSYRK",
			"(IIDLandroid/renderscript/Allocation;DLandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::CSYRK(jint arg0, jint arg1, __jni_impl::android::renderscript::Float2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Float2 arg4, __jni_impl::android::renderscript::Allocation arg5)
	{
		__thiz.callMethod<void>(
			"CSYRK",
			"(IILandroid/renderscript/Float2;Landroid/renderscript/Allocation;Landroid/renderscript/Float2;Landroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::ZSYRK(jint arg0, jint arg1, __jni_impl::android::renderscript::Double2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Double2 arg4, __jni_impl::android::renderscript::Allocation arg5)
	{
		__thiz.callMethod<void>(
			"ZSYRK",
			"(IILandroid/renderscript/Double2;Landroid/renderscript/Allocation;Landroid/renderscript/Double2;Landroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::SSYR2K(jint arg0, jint arg1, jfloat arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jfloat arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"SSYR2K",
			"(IIFLandroid/renderscript/Allocation;Landroid/renderscript/Allocation;FLandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::DSYR2K(jint arg0, jint arg1, jdouble arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jdouble arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"DSYR2K",
			"(IIDLandroid/renderscript/Allocation;Landroid/renderscript/Allocation;DLandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::CSYR2K(jint arg0, jint arg1, __jni_impl::android::renderscript::Float2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Float2 arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"CSYR2K",
			"(IILandroid/renderscript/Float2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Float2;Landroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::ZSYR2K(jint arg0, jint arg1, __jni_impl::android::renderscript::Double2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Double2 arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"ZSYR2K",
			"(IILandroid/renderscript/Double2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Double2;Landroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::STRMM(jint arg0, jint arg1, jint arg2, jint arg3, jfloat arg4, __jni_impl::android::renderscript::Allocation arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"STRMM",
			"(IIIIFLandroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object(),
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::DTRMM(jint arg0, jint arg1, jint arg2, jint arg3, jdouble arg4, __jni_impl::android::renderscript::Allocation arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"DTRMM",
			"(IIIIDLandroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object(),
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::CTRMM(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Float2 arg4, __jni_impl::android::renderscript::Allocation arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"CTRMM",
			"(IIIILandroid/renderscript/Float2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::ZTRMM(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Double2 arg4, __jni_impl::android::renderscript::Allocation arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"ZTRMM",
			"(IIIILandroid/renderscript/Double2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::STRSM(jint arg0, jint arg1, jint arg2, jint arg3, jfloat arg4, __jni_impl::android::renderscript::Allocation arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"STRSM",
			"(IIIIFLandroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object(),
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::DTRSM(jint arg0, jint arg1, jint arg2, jint arg3, jdouble arg4, __jni_impl::android::renderscript::Allocation arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"DTRSM",
			"(IIIIDLandroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object(),
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::CTRSM(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Float2 arg4, __jni_impl::android::renderscript::Allocation arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"CTRSM",
			"(IIIILandroid/renderscript/Float2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::ZTRSM(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Double2 arg4, __jni_impl::android::renderscript::Allocation arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"ZTRSM",
			"(IIIILandroid/renderscript/Double2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::CHEMM(jint arg0, jint arg1, __jni_impl::android::renderscript::Float2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Float2 arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"CHEMM",
			"(IILandroid/renderscript/Float2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Float2;Landroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::ZHEMM(jint arg0, jint arg1, __jni_impl::android::renderscript::Double2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, __jni_impl::android::renderscript::Double2 arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"ZHEMM",
			"(IILandroid/renderscript/Double2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Double2;Landroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::CHERK(jint arg0, jint arg1, jfloat arg2, __jni_impl::android::renderscript::Allocation arg3, jfloat arg4, __jni_impl::android::renderscript::Allocation arg5)
	{
		__thiz.callMethod<void>(
			"CHERK",
			"(IIFLandroid/renderscript/Allocation;FLandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::ZHERK(jint arg0, jint arg1, jdouble arg2, __jni_impl::android::renderscript::Allocation arg3, jdouble arg4, __jni_impl::android::renderscript::Allocation arg5)
	{
		__thiz.callMethod<void>(
			"ZHERK",
			"(IIDLandroid/renderscript/Allocation;DLandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::CHER2K(jint arg0, jint arg1, __jni_impl::android::renderscript::Float2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jfloat arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"CHER2K",
			"(IILandroid/renderscript/Float2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;FLandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::ZHER2K(jint arg0, jint arg1, __jni_impl::android::renderscript::Double2 arg2, __jni_impl::android::renderscript::Allocation arg3, __jni_impl::android::renderscript::Allocation arg4, jdouble arg5, __jni_impl::android::renderscript::Allocation arg6)
	{
		__thiz.callMethod<void>(
			"ZHER2K",
			"(IILandroid/renderscript/Double2;Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;DLandroid/renderscript/Allocation;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object());
	}
	void ScriptIntrinsicBLAS::BNNM(__jni_impl::android::renderscript::Allocation arg0, jint arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, jint arg6)
	{
		__thiz.callMethod<void>(
			"BNNM",
			"(Landroid/renderscript/Allocation;ILandroid/renderscript/Allocation;ILandroid/renderscript/Allocation;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object(),
			arg5,
			arg6);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class ScriptIntrinsicBLAS : public __jni_impl::android::renderscript::ScriptIntrinsicBLAS
	{
	public:
		ScriptIntrinsicBLAS(QAndroidJniObject obj) { __thiz = obj; }
		ScriptIntrinsicBLAS()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SCRIPTINTRINSICBLAS

