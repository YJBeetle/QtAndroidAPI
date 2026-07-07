#pragma once

#include "../../JFloatArray.hpp"
#include "./Matrix.def.hpp"

namespace android::opengl
{
	// Fields
	
	// Constructors
	inline Matrix::Matrix()
		: JObject(
			"android.opengl.Matrix",
			"()V"
		) {}
	
	// Methods
	inline void Matrix::frustumM(JFloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7)
	{
		callStaticMethod<void>(
			"android.opengl.Matrix",
			"frustumM",
			"([FIFFFFFF)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	inline jboolean Matrix::invertM(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		return callStaticMethod<jboolean>(
			"android.opengl.Matrix",
			"invertM",
			"([FI[FI)Z",
			arg0.object<jfloatArray>(),
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
	inline jfloat Matrix::length(jfloat arg0, jfloat arg1, jfloat arg2)
	{
		return callStaticMethod<jfloat>(
			"android.opengl.Matrix",
			"length",
			"(FFF)F",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Matrix::multiplyMM(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, JFloatArray arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.Matrix",
			"multiplyMM",
			"([FI[FI[FI)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2.object<jfloatArray>(),
			arg3,
			arg4.object<jfloatArray>(),
			arg5
		);
	}
	inline void Matrix::multiplyMV(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, JFloatArray arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.Matrix",
			"multiplyMV",
			"([FI[FI[FI)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2.object<jfloatArray>(),
			arg3,
			arg4.object<jfloatArray>(),
			arg5
		);
	}
	inline void Matrix::orthoM(JFloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7)
	{
		callStaticMethod<void>(
			"android.opengl.Matrix",
			"orthoM",
			"([FIFFFFFF)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	inline void Matrix::perspectiveM(JFloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
	{
		callStaticMethod<void>(
			"android.opengl.Matrix",
			"perspectiveM",
			"([FIFFFF)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	inline void Matrix::rotateM(JFloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
	{
		callStaticMethod<void>(
			"android.opengl.Matrix",
			"rotateM",
			"([FIFFFF)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	inline void Matrix::rotateM(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7)
	{
		callStaticMethod<void>(
			"android.opengl.Matrix",
			"rotateM",
			"([FI[FIFFFF)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2.object<jfloatArray>(),
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	inline void Matrix::scaleM(JFloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4)
	{
		callStaticMethod<void>(
			"android.opengl.Matrix",
			"scaleM",
			"([FIFFF)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void Matrix::scaleM(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, jfloat arg4, jfloat arg5, jfloat arg6)
	{
		callStaticMethod<void>(
			"android.opengl.Matrix",
			"scaleM",
			"([FI[FIFFF)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2.object<jfloatArray>(),
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	inline void Matrix::setIdentityM(JFloatArray arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.opengl.Matrix",
			"setIdentityM",
			"([FI)V",
			arg0.object<jfloatArray>(),
			arg1
		);
	}
	inline void Matrix::setLookAtM(JFloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7, jfloat arg8, jfloat arg9, jfloat arg10)
	{
		callStaticMethod<void>(
			"android.opengl.Matrix",
			"setLookAtM",
			"([FIFFFFFFFFF)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10
		);
	}
	inline void Matrix::setRotateEulerM(JFloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4)
	{
		callStaticMethod<void>(
			"android.opengl.Matrix",
			"setRotateEulerM",
			"([FIFFF)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void Matrix::setRotateEulerM2(JFloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4)
	{
		callStaticMethod<void>(
			"android.opengl.Matrix",
			"setRotateEulerM2",
			"([FIFFF)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void Matrix::setRotateM(JFloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
	{
		callStaticMethod<void>(
			"android.opengl.Matrix",
			"setRotateM",
			"([FIFFFF)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	inline void Matrix::translateM(JFloatArray arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4)
	{
		callStaticMethod<void>(
			"android.opengl.Matrix",
			"translateM",
			"([FIFFF)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void Matrix::translateM(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, jfloat arg4, jfloat arg5, jfloat arg6)
	{
		callStaticMethod<void>(
			"android.opengl.Matrix",
			"translateM",
			"([FI[FIFFF)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2.object<jfloatArray>(),
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	inline void Matrix::transposeM(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.Matrix",
			"transposeM",
			"([FI[FI)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2.object<jfloatArray>(),
			arg3
		);
	}
} // namespace android::opengl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::opengl;
#endif
