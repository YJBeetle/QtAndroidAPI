#pragma once

#include "../graphics/Bitmap.def.hpp"
#include "../../JString.hpp"
#include "./GLUtils.def.hpp"

namespace android::opengl
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString GLUtils::getEGLErrorString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.opengl.GLUtils",
			"getEGLErrorString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint GLUtils::getInternalFormat(android::graphics::Bitmap arg0)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLUtils",
			"getInternalFormat",
			"(Landroid/graphics/Bitmap;)I",
			arg0.object()
		);
	}
	inline jint GLUtils::getType(android::graphics::Bitmap arg0)
	{
		return callStaticMethod<jint>(
			"android.opengl.GLUtils",
			"getType",
			"(Landroid/graphics/Bitmap;)I",
			arg0.object()
		);
	}
	inline void GLUtils::texImage2D(jint arg0, jint arg1, android::graphics::Bitmap arg2, jint arg3)
	{
		callStaticMethod<void>(
			"android.opengl.GLUtils",
			"texImage2D",
			"(IILandroid/graphics/Bitmap;I)V",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	inline void GLUtils::texImage2D(jint arg0, jint arg1, jint arg2, android::graphics::Bitmap arg3, jint arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLUtils",
			"texImage2D",
			"(IIILandroid/graphics/Bitmap;I)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4
		);
	}
	inline void GLUtils::texImage2D(jint arg0, jint arg1, jint arg2, android::graphics::Bitmap arg3, jint arg4, jint arg5)
	{
		callStaticMethod<void>(
			"android.opengl.GLUtils",
			"texImage2D",
			"(IIILandroid/graphics/Bitmap;II)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5
		);
	}
	inline void GLUtils::texSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, android::graphics::Bitmap arg4)
	{
		callStaticMethod<void>(
			"android.opengl.GLUtils",
			"texSubImage2D",
			"(IIIILandroid/graphics/Bitmap;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	inline void GLUtils::texSubImage2D(jint arg0, jint arg1, jint arg2, jint arg3, android::graphics::Bitmap arg4, jint arg5, jint arg6)
	{
		callStaticMethod<void>(
			"android.opengl.GLUtils",
			"texSubImage2D",
			"(IIIILandroid/graphics/Bitmap;II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5,
			arg6
		);
	}
} // namespace android::opengl

// Base class headers

