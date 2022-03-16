#pragma once

#include "./ScriptIntrinsic.def.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit ScriptIntrinsicBLAS(const char *className, const char *sig, Ts...agv) : android::renderscript::ScriptIntrinsic(className, sig, std::forward<Ts>(agv)...) {}
		ScriptIntrinsicBLAS(QJniObject obj) : android::renderscript::ScriptIntrinsic(obj) {}
		
		// Constructors
		
		// Methods
		static android::renderscript::ScriptIntrinsicBLAS create(android::renderscript::RenderScript arg0);
		void BNNM(android::renderscript::Allocation arg0, jint arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, jint arg6) const;
		void CGBMV(jint arg0, jint arg1, jint arg2, android::renderscript::Float2 arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6, android::renderscript::Float2 arg7, android::renderscript::Allocation arg8, jint arg9) const;
		void CGEMM(jint arg0, jint arg1, android::renderscript::Float2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, android::renderscript::Float2 arg5, android::renderscript::Allocation arg6) const;
		void CGEMV(jint arg0, android::renderscript::Float2 arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Float2 arg5, android::renderscript::Allocation arg6, jint arg7) const;
		void CGERC(android::renderscript::Float2 arg0, android::renderscript::Allocation arg1, jint arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Allocation arg5) const;
		void CGERU(android::renderscript::Float2 arg0, android::renderscript::Allocation arg1, jint arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Allocation arg5) const;
		void CHBMV(jint arg0, jint arg1, android::renderscript::Float2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5, android::renderscript::Float2 arg6, android::renderscript::Allocation arg7, jint arg8) const;
		void CHEMM(jint arg0, jint arg1, android::renderscript::Float2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, android::renderscript::Float2 arg5, android::renderscript::Allocation arg6) const;
		void CHEMV(jint arg0, android::renderscript::Float2 arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Float2 arg5, android::renderscript::Allocation arg6, jint arg7) const;
		void CHER(jint arg0, jfloat arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4) const;
		void CHER2(jint arg0, android::renderscript::Float2 arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, android::renderscript::Allocation arg6) const;
		void CHER2K(jint arg0, jint arg1, android::renderscript::Float2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jfloat arg5, android::renderscript::Allocation arg6) const;
		void CHERK(jint arg0, jint arg1, jfloat arg2, android::renderscript::Allocation arg3, jfloat arg4, android::renderscript::Allocation arg5) const;
		void CHPMV(jint arg0, android::renderscript::Float2 arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Float2 arg5, android::renderscript::Allocation arg6, jint arg7) const;
		void CHPR(jint arg0, jfloat arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4) const;
		void CHPR2(jint arg0, android::renderscript::Float2 arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, android::renderscript::Allocation arg6) const;
		void CSYMM(jint arg0, jint arg1, android::renderscript::Float2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, android::renderscript::Float2 arg5, android::renderscript::Allocation arg6) const;
		void CSYR2K(jint arg0, jint arg1, android::renderscript::Float2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, android::renderscript::Float2 arg5, android::renderscript::Allocation arg6) const;
		void CSYRK(jint arg0, jint arg1, android::renderscript::Float2 arg2, android::renderscript::Allocation arg3, android::renderscript::Float2 arg4, android::renderscript::Allocation arg5) const;
		void CTBMV(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6) const;
		void CTBSV(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6) const;
		void CTPMV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5) const;
		void CTPSV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5) const;
		void CTRMM(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Float2 arg4, android::renderscript::Allocation arg5, android::renderscript::Allocation arg6) const;
		void CTRMV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5) const;
		void CTRSM(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Float2 arg4, android::renderscript::Allocation arg5, android::renderscript::Allocation arg6) const;
		void CTRSV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5) const;
		void DGBMV(jint arg0, jint arg1, jint arg2, jdouble arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6, jdouble arg7, android::renderscript::Allocation arg8, jint arg9) const;
		void DGEMM(jint arg0, jint arg1, jdouble arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jdouble arg5, android::renderscript::Allocation arg6) const;
		void DGEMV(jint arg0, jdouble arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, jdouble arg5, android::renderscript::Allocation arg6, jint arg7) const;
		void DGER(jdouble arg0, android::renderscript::Allocation arg1, jint arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Allocation arg5) const;
		void DSBMV(jint arg0, jint arg1, jdouble arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5, jdouble arg6, android::renderscript::Allocation arg7, jint arg8) const;
		void DSPMV(jint arg0, jdouble arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, jdouble arg5, android::renderscript::Allocation arg6, jint arg7) const;
		void DSPR(jint arg0, jdouble arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4) const;
		void DSPR2(jint arg0, jdouble arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, android::renderscript::Allocation arg6) const;
		void DSYMM(jint arg0, jint arg1, jdouble arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jdouble arg5, android::renderscript::Allocation arg6) const;
		void DSYMV(jint arg0, jdouble arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, jdouble arg5, android::renderscript::Allocation arg6, jint arg7) const;
		void DSYR(jint arg0, jdouble arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4) const;
		void DSYR2(jint arg0, jdouble arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, android::renderscript::Allocation arg6) const;
		void DSYR2K(jint arg0, jint arg1, jdouble arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jdouble arg5, android::renderscript::Allocation arg6) const;
		void DSYRK(jint arg0, jint arg1, jdouble arg2, android::renderscript::Allocation arg3, jdouble arg4, android::renderscript::Allocation arg5) const;
		void DTBMV(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6) const;
		void DTBSV(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6) const;
		void DTPMV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5) const;
		void DTPSV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5) const;
		void DTRMM(jint arg0, jint arg1, jint arg2, jint arg3, jdouble arg4, android::renderscript::Allocation arg5, android::renderscript::Allocation arg6) const;
		void DTRMV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5) const;
		void DTRSM(jint arg0, jint arg1, jint arg2, jint arg3, jdouble arg4, android::renderscript::Allocation arg5, android::renderscript::Allocation arg6) const;
		void DTRSV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5) const;
		void SGBMV(jint arg0, jint arg1, jint arg2, jfloat arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6, jfloat arg7, android::renderscript::Allocation arg8, jint arg9) const;
		void SGEMM(jint arg0, jint arg1, jfloat arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jfloat arg5, android::renderscript::Allocation arg6) const;
		void SGEMV(jint arg0, jfloat arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, jfloat arg5, android::renderscript::Allocation arg6, jint arg7) const;
		void SGER(jfloat arg0, android::renderscript::Allocation arg1, jint arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Allocation arg5) const;
		void SSBMV(jint arg0, jint arg1, jfloat arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5, jfloat arg6, android::renderscript::Allocation arg7, jint arg8) const;
		void SSPMV(jint arg0, jfloat arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, jfloat arg5, android::renderscript::Allocation arg6, jint arg7) const;
		void SSPR(jint arg0, jfloat arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4) const;
		void SSPR2(jint arg0, jfloat arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, android::renderscript::Allocation arg6) const;
		void SSYMM(jint arg0, jint arg1, jfloat arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jfloat arg5, android::renderscript::Allocation arg6) const;
		void SSYMV(jint arg0, jfloat arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, jfloat arg5, android::renderscript::Allocation arg6, jint arg7) const;
		void SSYR(jint arg0, jfloat arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4) const;
		void SSYR2(jint arg0, jfloat arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, android::renderscript::Allocation arg6) const;
		void SSYR2K(jint arg0, jint arg1, jfloat arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jfloat arg5, android::renderscript::Allocation arg6) const;
		void SSYRK(jint arg0, jint arg1, jfloat arg2, android::renderscript::Allocation arg3, jfloat arg4, android::renderscript::Allocation arg5) const;
		void STBMV(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6) const;
		void STBSV(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6) const;
		void STPMV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5) const;
		void STPSV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5) const;
		void STRMM(jint arg0, jint arg1, jint arg2, jint arg3, jfloat arg4, android::renderscript::Allocation arg5, android::renderscript::Allocation arg6) const;
		void STRMV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5) const;
		void STRSM(jint arg0, jint arg1, jint arg2, jint arg3, jfloat arg4, android::renderscript::Allocation arg5, android::renderscript::Allocation arg6) const;
		void STRSV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5) const;
		void ZGBMV(jint arg0, jint arg1, jint arg2, android::renderscript::Double2 arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6, android::renderscript::Double2 arg7, android::renderscript::Allocation arg8, jint arg9) const;
		void ZGEMM(jint arg0, jint arg1, android::renderscript::Double2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, android::renderscript::Double2 arg5, android::renderscript::Allocation arg6) const;
		void ZGEMV(jint arg0, android::renderscript::Double2 arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Double2 arg5, android::renderscript::Allocation arg6, jint arg7) const;
		void ZGERC(android::renderscript::Double2 arg0, android::renderscript::Allocation arg1, jint arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Allocation arg5) const;
		void ZGERU(android::renderscript::Double2 arg0, android::renderscript::Allocation arg1, jint arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Allocation arg5) const;
		void ZHBMV(jint arg0, jint arg1, android::renderscript::Double2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5, android::renderscript::Double2 arg6, android::renderscript::Allocation arg7, jint arg8) const;
		void ZHEMM(jint arg0, jint arg1, android::renderscript::Double2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, android::renderscript::Double2 arg5, android::renderscript::Allocation arg6) const;
		void ZHEMV(jint arg0, android::renderscript::Double2 arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Double2 arg5, android::renderscript::Allocation arg6, jint arg7) const;
		void ZHER(jint arg0, jdouble arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4) const;
		void ZHER2(jint arg0, android::renderscript::Double2 arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, android::renderscript::Allocation arg6) const;
		void ZHER2K(jint arg0, jint arg1, android::renderscript::Double2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jdouble arg5, android::renderscript::Allocation arg6) const;
		void ZHERK(jint arg0, jint arg1, jdouble arg2, android::renderscript::Allocation arg3, jdouble arg4, android::renderscript::Allocation arg5) const;
		void ZHPMV(jint arg0, android::renderscript::Double2 arg1, android::renderscript::Allocation arg2, android::renderscript::Allocation arg3, jint arg4, android::renderscript::Double2 arg5, android::renderscript::Allocation arg6, jint arg7) const;
		void ZHPR(jint arg0, jdouble arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4) const;
		void ZHPR2(jint arg0, android::renderscript::Double2 arg1, android::renderscript::Allocation arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, android::renderscript::Allocation arg6) const;
		void ZSYMM(jint arg0, jint arg1, android::renderscript::Double2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, android::renderscript::Double2 arg5, android::renderscript::Allocation arg6) const;
		void ZSYR2K(jint arg0, jint arg1, android::renderscript::Double2 arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, android::renderscript::Double2 arg5, android::renderscript::Allocation arg6) const;
		void ZSYRK(jint arg0, jint arg1, android::renderscript::Double2 arg2, android::renderscript::Allocation arg3, android::renderscript::Double2 arg4, android::renderscript::Allocation arg5) const;
		void ZTBMV(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6) const;
		void ZTBSV(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, android::renderscript::Allocation arg5, jint arg6) const;
		void ZTPMV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5) const;
		void ZTPSV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5) const;
		void ZTRMM(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Double2 arg4, android::renderscript::Allocation arg5, android::renderscript::Allocation arg6) const;
		void ZTRMV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5) const;
		void ZTRSM(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Double2 arg4, android::renderscript::Allocation arg5, android::renderscript::Allocation arg6) const;
		void ZTRSV(jint arg0, jint arg1, jint arg2, android::renderscript::Allocation arg3, android::renderscript::Allocation arg4, jint arg5) const;
	};
} // namespace android::renderscript

