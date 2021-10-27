#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Shader.hpp"


namespace android::graphics
{
	class SweepGradient : public android::graphics::Shader
	{
	public:
		// Fields
		
		SweepGradient(QAndroidJniObject obj);
		// Constructors
		SweepGradient(jfloat &arg0, jfloat &arg1, jintArray &arg2, jfloatArray &arg3);
		SweepGradient(jfloat &arg0, jfloat &arg1, jlongArray &arg2, jfloatArray &arg3);
		SweepGradient(jfloat &arg0, jfloat &arg1, jint &arg2, jint &arg3);
		SweepGradient(jfloat &arg0, jfloat &arg1, jlong &arg2, jlong &arg3);
		SweepGradient() = default;
		
		// Methods
	};
} // namespace android::graphics

