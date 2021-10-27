#include "./Bitmap.hpp"
#include "./Shader_TileMode.hpp"
#include "./BitmapShader.hpp"

namespace android::graphics
{
	// Fields
	
	BitmapShader::BitmapShader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BitmapShader::BitmapShader(android::graphics::Bitmap &arg0, android::graphics::Shader_TileMode &arg1, android::graphics::Shader_TileMode &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.BitmapShader",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Shader$TileMode;Landroid/graphics/Shader$TileMode;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
} // namespace android::graphics

