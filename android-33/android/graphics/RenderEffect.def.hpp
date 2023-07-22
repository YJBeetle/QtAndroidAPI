#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class BlendMode;
}
namespace android::graphics
{
	class ColorFilter;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics
{
	class RuntimeShader;
}
namespace android::graphics
{
	class Shader;
}
namespace android::graphics
{
	class Shader_TileMode;
}
class JString;

namespace android::graphics
{
	class RenderEffect : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RenderEffect(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RenderEffect(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::graphics::RenderEffect createBitmapEffect(android::graphics::Bitmap arg0);
		static android::graphics::RenderEffect createBitmapEffect(android::graphics::Bitmap arg0, android::graphics::Rect arg1, android::graphics::Rect arg2);
		static android::graphics::RenderEffect createBlendModeEffect(android::graphics::RenderEffect arg0, android::graphics::RenderEffect arg1, android::graphics::BlendMode arg2);
		static android::graphics::RenderEffect createBlurEffect(jfloat arg0, jfloat arg1, android::graphics::Shader_TileMode arg2);
		static android::graphics::RenderEffect createBlurEffect(jfloat arg0, jfloat arg1, android::graphics::RenderEffect arg2, android::graphics::Shader_TileMode arg3);
		static android::graphics::RenderEffect createChainEffect(android::graphics::RenderEffect arg0, android::graphics::RenderEffect arg1);
		static android::graphics::RenderEffect createColorFilterEffect(android::graphics::ColorFilter arg0);
		static android::graphics::RenderEffect createColorFilterEffect(android::graphics::ColorFilter arg0, android::graphics::RenderEffect arg1);
		static android::graphics::RenderEffect createOffsetEffect(jfloat arg0, jfloat arg1);
		static android::graphics::RenderEffect createOffsetEffect(jfloat arg0, jfloat arg1, android::graphics::RenderEffect arg2);
		static android::graphics::RenderEffect createRuntimeShaderEffect(android::graphics::RuntimeShader arg0, JString arg1);
		static android::graphics::RenderEffect createShaderEffect(android::graphics::Shader arg0);
	};
} // namespace android::graphics

