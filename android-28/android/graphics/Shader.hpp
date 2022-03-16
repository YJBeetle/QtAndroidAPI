#pragma once

#include "./Matrix.def.hpp"
#include "./Shader.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline Shader::Shader()
		: JObject(
			"android.graphics.Shader",
			"()V"
		) {}
	
	// Methods
	inline jboolean Shader::getLocalMatrix(android::graphics::Matrix arg0) const
	{
		return callMethod<jboolean>(
			"getLocalMatrix",
			"(Landroid/graphics/Matrix;)Z",
			arg0.object()
		);
	}
	inline void Shader::setLocalMatrix(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"setLocalMatrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
} // namespace android::graphics

// Base class headers

