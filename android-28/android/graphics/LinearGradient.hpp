#pragma once

#include "./Shader.hpp"

class JFloatArray;
class JIntArray;
namespace android::graphics
{
	class Shader_TileMode;
}

namespace android::graphics
{
	class LinearGradient : public android::graphics::Shader
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LinearGradient(const char *className, const char *sig, Ts...agv) : android::graphics::Shader(className, sig, std::forward<Ts>(agv)...) {}
		LinearGradient(QAndroidJniObject obj) : android::graphics::Shader(obj) {}
		
		// Constructors
		LinearGradient(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, JIntArray arg4, JFloatArray arg5, android::graphics::Shader_TileMode arg6);
		LinearGradient(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4, jint arg5, android::graphics::Shader_TileMode arg6);
		
		// Methods
	};
} // namespace android::graphics

