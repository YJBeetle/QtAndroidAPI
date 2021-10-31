#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Shader.hpp"

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
		
		LinearGradient(QAndroidJniObject obj);
		// Constructors
		LinearGradient(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jintArray arg4, jfloatArray arg5, android::graphics::Shader_TileMode arg6);
		LinearGradient(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jlongArray arg4, jfloatArray arg5, android::graphics::Shader_TileMode arg6);
		LinearGradient(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4, jint arg5, android::graphics::Shader_TileMode arg6);
		LinearGradient(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jlong arg4, jlong arg5, android::graphics::Shader_TileMode arg6);
		LinearGradient() = default;
		
		// Methods
	};
} // namespace android::graphics

