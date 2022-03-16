#include "./Bitmap.hpp"
#include "./Shader_TileMode.hpp"
#include "./BitmapShader.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	BitmapShader::BitmapShader(android::graphics::Bitmap arg0, android::graphics::Shader_TileMode arg1, android::graphics::Shader_TileMode arg2)
		: android::graphics::Shader(
			"android.graphics.BitmapShader",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Shader$TileMode;Landroid/graphics/Shader$TileMode;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
} // namespace android::graphics

