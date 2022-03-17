#pragma once

#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "./Shader_TileMode.def.hpp"
#include "./LinearGradient.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline LinearGradient::LinearGradient(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, JIntArray arg4, JFloatArray arg5, android::graphics::Shader_TileMode arg6)
		: android::graphics::Shader(
			"android.graphics.LinearGradient",
			"(FFFF[I[FLandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jintArray>(),
			arg5.object<jfloatArray>(),
			arg6.object()
		) {}
	inline LinearGradient::LinearGradient(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4, jint arg5, android::graphics::Shader_TileMode arg6)
		: android::graphics::Shader(
			"android.graphics.LinearGradient",
			"(FFFFIILandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object()
		) {}
	
	// Methods
} // namespace android::graphics

// Base class headers
#include "./Shader.hpp"

