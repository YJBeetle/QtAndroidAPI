#pragma once

#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "./SweepGradient.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline SweepGradient::SweepGradient(jfloat arg0, jfloat arg1, JIntArray arg2, JFloatArray arg3)
		: android::graphics::Shader(
			"android.graphics.SweepGradient",
			"(FF[I[F)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3.object<jfloatArray>()
		) {}
	inline SweepGradient::SweepGradient(jfloat arg0, jfloat arg1, jint arg2, jint arg3)
		: android::graphics::Shader(
			"android.graphics.SweepGradient",
			"(FFII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::graphics

// Base class headers
#include "./Shader.hpp"

