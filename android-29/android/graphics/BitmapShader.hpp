#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Shader.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class Shader_TileMode;
}

namespace android::graphics
{
	class BitmapShader : public android::graphics::Shader
	{
	public:
		// Fields
		
		BitmapShader(QAndroidJniObject obj);
		// Constructors
		BitmapShader(android::graphics::Bitmap &arg0, android::graphics::Shader_TileMode &arg1, android::graphics::Shader_TileMode &arg2);
		BitmapShader() = default;
		
		// Methods
	};
} // namespace android::graphics

