#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Shader.hpp"

namespace android::graphics
{
	class BlendMode;
}
namespace android::graphics
{
	class PorterDuff_Mode;
}
namespace android::graphics
{
	class Shader;
}
namespace android::graphics
{
	class Xfermode;
}

namespace android::graphics
{
	class ComposeShader : public android::graphics::Shader
	{
	public:
		// Fields
		
		ComposeShader(QAndroidJniObject obj);
		// Constructors
		ComposeShader(android::graphics::Shader arg0, android::graphics::Shader arg1, android::graphics::BlendMode arg2);
		ComposeShader(android::graphics::Shader arg0, android::graphics::Shader arg1, android::graphics::PorterDuff_Mode arg2);
		ComposeShader(android::graphics::Shader arg0, android::graphics::Shader arg1, android::graphics::Xfermode arg2);
		ComposeShader() = default;
		
		// Methods
	};
} // namespace android::graphics

