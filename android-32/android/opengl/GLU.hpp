#pragma once

#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JString.hpp"
#include "./GLU.def.hpp"

namespace android::opengl
{
	// Fields
	
	// Constructors
	inline GLU::GLU()
		: JObject(
			"android.opengl.GLU",
			"()V"
		) {}
	
	// Methods
	inline JString GLU::gluErrorString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.opengl.GLU",
			"gluErrorString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline void GLU::gluLookAt(JObject arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jfloat arg6, jfloat arg7, jfloat arg8, jfloat arg9)
	{
		callStaticMethod<void>(
			"android.opengl.GLU",
			"gluLookAt",
			"(Ljavax/microedition/khronos/opengles/GL10;FFFFFFFFF)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9
		);
	}
	inline void GLU::gluOrtho2D(JObject arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLU",
			"gluOrtho2D",
			"(Ljavax/microedition/khronos/opengles/GL10;FFFF)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void GLU::gluPerspective(JObject arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLU",
			"gluPerspective",
			"(Ljavax/microedition/khronos/opengles/GL10;FFFF)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline jint GLU::gluProject(jfloat arg0, jfloat arg1, jfloat arg2, JFloatArray arg3, jint arg4, JFloatArray arg5, jint arg6, JIntArray arg7, jint arg8, JFloatArray arg9, jint arg10)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLU",
			"gluProject",
			"(FFF[FI[FI[II[FI)I",
			arg0,
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4,
			arg5.object<jfloatArray>(),
			arg6,
			arg7.object<jintArray>(),
			arg8,
			arg9.object<jfloatArray>(),
			arg10
		);
	}
	inline jint GLU::gluUnProject(jfloat arg0, jfloat arg1, jfloat arg2, JFloatArray arg3, jint arg4, JFloatArray arg5, jint arg6, JIntArray arg7, jint arg8, JFloatArray arg9, jint arg10)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLU",
			"gluUnProject",
			"(FFF[FI[FI[II[FI)I",
			arg0,
			arg1,
			arg2,
			arg3.object<jfloatArray>(),
			arg4,
			arg5.object<jfloatArray>(),
			arg6,
			arg7.object<jintArray>(),
			arg8,
			arg9.object<jfloatArray>(),
			arg10
		);
	}
} // namespace android::opengl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::opengl;
#endif
