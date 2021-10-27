#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Shader.hpp"

namespace android::graphics
{
	class Shader_TileMode;
}

namespace android::graphics
{
	class RadialGradient : public android::graphics::Shader
	{
	public:
		// Fields
		
		RadialGradient(QAndroidJniObject obj);
		// Constructors
		RadialGradient(jfloat &arg0, jfloat &arg1, jfloat &arg2, jintArray &arg3, jfloatArray &arg4, android::graphics::Shader_TileMode &arg5);
		RadialGradient(jfloat &arg0, jfloat &arg1, jfloat &arg2, jlongArray &arg3, jfloatArray &arg4, android::graphics::Shader_TileMode &arg5);
		RadialGradient(jfloat &arg0, jfloat &arg1, jfloat &arg2, jint &arg3, jint &arg4, android::graphics::Shader_TileMode &arg5);
		RadialGradient(jfloat &arg0, jfloat &arg1, jfloat &arg2, jlong &arg3, jlong &arg4, android::graphics::Shader_TileMode &arg5);
		RadialGradient() = default;
		
		// Methods
	};
} // namespace android::graphics

