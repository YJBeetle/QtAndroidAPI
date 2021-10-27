#pragma once

#include "../../__JniBaseClass.hpp"
#include "./BaseObj.hpp"
#include "./Script.hpp"
#include "./ScriptIntrinsic.hpp"

namespace android::renderscript
{
	class Allocation;
}
namespace android::renderscript
{
	class Double2;
}
namespace android::renderscript
{
	class Float2;
}
namespace android::renderscript
{
	class RenderScript;
}

namespace android::renderscript
{
	class ScriptIntrinsicBLAS : public android::renderscript::ScriptIntrinsic
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
		
		ScriptIntrinsicBLAS(QAndroidJniObject obj);
		// Constructors
		ScriptIntrinsicBLAS() = default;
		
		// Methods
		static QAndroidJniObject create(android::renderscript::RenderScript arg0);
		void BNNM(android::renderscript::Allocation arg0, jint arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, jint arg6);
		void CGBMV(jint arg0, jint arg1, jint arg2, android::renderscript::Float2 arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6, android::renderscript::Float2 arg7, android::renderscript::Allocation arg8, jint arg9);
		void CGEMM(jint arg0, jint arg1, android::renderscript::Float2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, android::renderscript::Float2 arg5, android::renderscript::Allocation arg6);
		void CGEMV(jint arg0, android::renderscript::Float2 arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Float2 arg5, android::renderscript::Allocation arg6, jint arg7);
		void CGERC(android::renderscript::Float2 arg0, android::renderscript::Allocation arg1, jint arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Allocation arg5);
		void CGERU(android::renderscript::Float2 arg0, android::renderscript::Allocation arg1, jint arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Allocation arg5);
		void CHBMV(jint arg0, jint arg1, android::renderscript::Float2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5, android::renderscript::Float2 arg6, android::renderscript::Allocation arg7, jint arg8);
		void CHEMM(jint arg0, jint arg1, android::renderscript::Float2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, android::renderscript::Float2 arg5, android::renderscript::Allocation arg6);
		void CHEMV(jint arg0, android::renderscript::Float2 arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Float2 arg5, android::renderscript::Allocation arg6, jint arg7);
		void CHER(jint arg0, jfloat arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4);
		void CHER2(jint arg0, android::renderscript::Float2 arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, android::renderscript::Allocation arg6);
		void CHER2K(jint arg0, jint arg1, android::renderscript::Float2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jfloat arg5, android::renderscript::Allocation arg6);
		void CHERK(jint arg0, jint arg1, jfloat arg2, android::renderscript::Allocation arg3, jfloat arg4, android::renderscript::Allocation arg5);
		void CHPMV(jint arg0, android::renderscript::Float2 arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Float2 arg5, android::renderscript::Allocation arg6, jint arg7);
		void CHPR(jint arg0, jfloat arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4);
		void CHPR2(jint arg0, android::renderscript::Float2 arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, android::renderscript::Allocation arg6);
		void CSYMM(jint arg0, jint arg1, android::renderscript::Float2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, android::renderscript::Float2 arg5, android::renderscript::Allocation arg6);
		void CSYR2K(jint arg0, jint arg1, android::renderscript::Float2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, android::renderscript::Float2 arg5, android::renderscript::Allocation arg6);
		void CSYRK(jint arg0, jint arg1, android::renderscript::Float2 arg2, android::renderscript::Allocation arg3, android::renderscript::Float2 arg4, android::renderscript::Allocation arg5);
		void CTBMV(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6);
		void CTBSV(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6);
		void CTPMV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5);
		void CTPSV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5);
		void CTRMM(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Float2 arg4, android::renderscript::Allocation arg5, android::renderscript::Allocation arg6);
		void CTRMV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5);
		void CTRSM(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Float2 arg4, android::renderscript::Allocation arg5, android::renderscript::Allocation arg6);
		void CTRSV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5);
		void DGBMV(jint arg0, jint arg1, jint arg2, jdouble arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6, jdouble arg7, android::renderscript::Allocation arg8, jint arg9);
		void DGEMM(jint arg0, jint arg1, jdouble arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jdouble arg5, android::renderscript::Allocation arg6);
		void DGEMV(jint arg0, jdouble arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, jdouble arg5, android::renderscript::Allocation arg6, jint arg7);
		void DGER(jdouble arg0, android::renderscript::Allocation arg1, jint arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Allocation arg5);
		void DSBMV(jint arg0, jint arg1, jdouble arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5, jdouble arg6, android::renderscript::Allocation arg7, jint arg8);
		void DSPMV(jint arg0, jdouble arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, jdouble arg5, android::renderscript::Allocation arg6, jint arg7);
		void DSPR(jint arg0, jdouble arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4);
		void DSPR2(jint arg0, jdouble arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, android::renderscript::Allocation arg6);
		void DSYMM(jint arg0, jint arg1, jdouble arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jdouble arg5, android::renderscript::Allocation arg6);
		void DSYMV(jint arg0, jdouble arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, jdouble arg5, android::renderscript::Allocation arg6, jint arg7);
		void DSYR(jint arg0, jdouble arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4);
		void DSYR2(jint arg0, jdouble arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, android::renderscript::Allocation arg6);
		void DSYR2K(jint arg0, jint arg1, jdouble arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jdouble arg5, android::renderscript::Allocation arg6);
		void DSYRK(jint arg0, jint arg1, jdouble arg2, android::renderscript::Allocation arg3, jdouble arg4, android::renderscript::Allocation arg5);
		void DTBMV(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6);
		void DTBSV(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6);
		void DTPMV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5);
		void DTPSV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5);
		void DTRMM(jint arg0, jint arg1, jint arg2, jint arg3, jdouble arg4, android::renderscript::Allocation arg5, android::renderscript::Allocation arg6);
		void DTRMV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5);
		void DTRSM(jint arg0, jint arg1, jint arg2, jint arg3, jdouble arg4, android::renderscript::Allocation arg5, android::renderscript::Allocation arg6);
		void DTRSV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5);
		void SGBMV(jint arg0, jint arg1, jint arg2, jfloat arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6, jfloat arg7, android::renderscript::Allocation arg8, jint arg9);
		void SGEMM(jint arg0, jint arg1, jfloat arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jfloat arg5, android::renderscript::Allocation arg6);
		void SGEMV(jint arg0, jfloat arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, jfloat arg5, android::renderscript::Allocation arg6, jint arg7);
		void SGER(jfloat arg0, android::renderscript::Allocation arg1, jint arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Allocation arg5);
		void SSBMV(jint arg0, jint arg1, jfloat arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5, jfloat arg6, android::renderscript::Allocation arg7, jint arg8);
		void SSPMV(jint arg0, jfloat arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, jfloat arg5, android::renderscript::Allocation arg6, jint arg7);
		void SSPR(jint arg0, jfloat arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4);
		void SSPR2(jint arg0, jfloat arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, android::renderscript::Allocation arg6);
		void SSYMM(jint arg0, jint arg1, jfloat arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jfloat arg5, android::renderscript::Allocation arg6);
		void SSYMV(jint arg0, jfloat arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, jfloat arg5, android::renderscript::Allocation arg6, jint arg7);
		void SSYR(jint arg0, jfloat arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4);
		void SSYR2(jint arg0, jfloat arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, android::renderscript::Allocation arg6);
		void SSYR2K(jint arg0, jint arg1, jfloat arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jfloat arg5, android::renderscript::Allocation arg6);
		void SSYRK(jint arg0, jint arg1, jfloat arg2, android::renderscript::Allocation arg3, jfloat arg4, android::renderscript::Allocation arg5);
		void STBMV(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6);
		void STBSV(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6);
		void STPMV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5);
		void STPSV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5);
		void STRMM(jint arg0, jint arg1, jint arg2, jint arg3, jfloat arg4, android::renderscript::Allocation arg5, android::renderscript::Allocation arg6);
		void STRMV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5);
		void STRSM(jint arg0, jint arg1, jint arg2, jint arg3, jfloat arg4, android::renderscript::Allocation arg5, android::renderscript::Allocation arg6);
		void STRSV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5);
		void ZGBMV(jint arg0, jint arg1, jint arg2, android::renderscript::Double2 arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6, android::renderscript::Double2 arg7, android::renderscript::Allocation arg8, jint arg9);
		void ZGEMM(jint arg0, jint arg1, android::renderscript::Double2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, android::renderscript::Double2 arg5, android::renderscript::Allocation arg6);
		void ZGEMV(jint arg0, android::renderscript::Double2 arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Double2 arg5, android::renderscript::Allocation arg6, jint arg7);
		void ZGERC(android::renderscript::Double2 arg0, android::renderscript::Allocation arg1, jint arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Allocation arg5);
		void ZGERU(android::renderscript::Double2 arg0, android::renderscript::Allocation arg1, jint arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Allocation arg5);
		void ZHBMV(jint arg0, jint arg1, android::renderscript::Double2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5, android::renderscript::Double2 arg6, android::renderscript::Allocation arg7, jint arg8);
		void ZHEMM(jint arg0, jint arg1, android::renderscript::Double2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, android::renderscript::Double2 arg5, android::renderscript::Allocation arg6);
		void ZHEMV(jint arg0, android::renderscript::Double2 arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Double2 arg5, android::renderscript::Allocation arg6, jint arg7);
		void ZHER(jint arg0, jdouble arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4);
		void ZHER2(jint arg0, android::renderscript::Double2 arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, android::renderscript::Allocation arg6);
		void ZHER2K(jint arg0, jint arg1, android::renderscript::Double2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jdouble arg5, android::renderscript::Allocation arg6);
		void ZHERK(jint arg0, jint arg1, jdouble arg2, android::renderscript::Allocation arg3, jdouble arg4, android::renderscript::Allocation arg5);
		void ZHPMV(jint arg0, android::renderscript::Double2 arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Double2 arg5, android::renderscript::Allocation arg6, jint arg7);
		void ZHPR(jint arg0, jdouble arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4);
		void ZHPR2(jint arg0, android::renderscript::Double2 arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, android::renderscript::Allocation arg6);
		void ZSYMM(jint arg0, jint arg1, android::renderscript::Double2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, android::renderscript::Double2 arg5, android::renderscript::Allocation arg6);
		void ZSYR2K(jint arg0, jint arg1, android::renderscript::Double2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, android::renderscript::Double2 arg5, android::renderscript::Allocation arg6);
		void ZSYRK(jint arg0, jint arg1, android::renderscript::Double2 arg2, android::renderscript::Allocation arg3, android::renderscript::Double2 arg4, android::renderscript::Allocation arg5);
		void ZTBMV(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6);
		void ZTBSV(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6);
		void ZTPMV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5);
		void ZTPSV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5);
		void ZTRMM(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Double2 arg4, android::renderscript::Allocation arg5, android::renderscript::Allocation arg6);
		void ZTRMV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5);
		void ZTRSM(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Double2 arg4, android::renderscript::Allocation arg5, android::renderscript::Allocation arg6);
		void ZTRSV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5);
	};
} // namespace android::renderscript

