#include "./BlendMode.hpp"
#include "./PorterDuff_Mode.hpp"
#include "./Shader.hpp"
#include "./Xfermode.hpp"
#include "./ComposeShader.hpp"

namespace android::graphics
{
	// Fields
	
	ComposeShader::ComposeShader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ComposeShader::ComposeShader(android::graphics::Shader &arg0, android::graphics::Shader &arg1, android::graphics::BlendMode &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ComposeShader",
			"(Landroid/graphics/Shader;Landroid/graphics/Shader;Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	ComposeShader::ComposeShader(android::graphics::Shader &arg0, android::graphics::Shader &arg1, android::graphics::PorterDuff_Mode &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ComposeShader",
			"(Landroid/graphics/Shader;Landroid/graphics/Shader;Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	ComposeShader::ComposeShader(android::graphics::Shader &arg0, android::graphics::Shader &arg1, android::graphics::Xfermode &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ComposeShader",
			"(Landroid/graphics/Shader;Landroid/graphics/Shader;Landroid/graphics/Xfermode;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
} // namespace android::graphics

