#pragma once

#include "./PorterDuff_Mode.def.hpp"
#include "./Shader.def.hpp"
#include "./Xfermode.def.hpp"
#include "./ComposeShader.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline ComposeShader::ComposeShader(android::graphics::Shader arg0, android::graphics::Shader arg1, android::graphics::PorterDuff_Mode arg2)
		: android::graphics::Shader(
			"android.graphics.ComposeShader",
			"(Landroid/graphics/Shader;Landroid/graphics/Shader;Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	inline ComposeShader::ComposeShader(android::graphics::Shader arg0, android::graphics::Shader arg1, android::graphics::Xfermode arg2)
		: android::graphics::Shader(
			"android.graphics.ComposeShader",
			"(Landroid/graphics/Shader;Landroid/graphics/Shader;Landroid/graphics/Xfermode;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
} // namespace android::graphics

// Base class headers
#include "./Shader.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
