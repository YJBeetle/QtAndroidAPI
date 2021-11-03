#pragma once

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
		
		// QJniObject forward
		template<typename ...Ts> explicit BitmapShader(const char *className, const char *sig, Ts...agv) : android::graphics::Shader(className, sig, std::forward<Ts>(agv)...) {}
		BitmapShader(QJniObject obj);
		
		// Constructors
		BitmapShader(android::graphics::Bitmap arg0, android::graphics::Shader_TileMode arg1, android::graphics::Shader_TileMode arg2);
		
		// Methods
	};
} // namespace android::graphics

