#include "./BlendMode.hpp"
#include "./PorterDuff_Mode.hpp"
#include "./Shader.hpp"
#include "./Xfermode.hpp"
#include "./ComposeShader.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	ComposeShader::ComposeShader(QAndroidJniObject obj) : android::graphics::Shader(obj) {}
	
	// Constructors
	ComposeShader::ComposeShader(android::graphics::Shader arg0, android::graphics::Shader arg1, android::graphics::BlendMode arg2)
		: android::graphics::Shader(
			"android.graphics.ComposeShader",
			"(Landroid/graphics/Shader;Landroid/graphics/Shader;Landroid/graphics/BlendMode;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	ComposeShader::ComposeShader(android::graphics::Shader arg0, android::graphics::Shader arg1, android::graphics::PorterDuff_Mode arg2)
		: android::graphics::Shader(
			"android.graphics.ComposeShader",
			"(Landroid/graphics/Shader;Landroid/graphics/Shader;Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	ComposeShader::ComposeShader(android::graphics::Shader arg0, android::graphics::Shader arg1, android::graphics::Xfermode arg2)
		: android::graphics::Shader(
			"android.graphics.ComposeShader",
			"(Landroid/graphics/Shader;Landroid/graphics/Shader;Landroid/graphics/Xfermode;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
} // namespace android::graphics

