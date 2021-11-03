#pragma once

#include "../../JObject.hpp"
#include "./Shader.hpp"


namespace android::graphics
{
	class SweepGradient : public android::graphics::Shader
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SweepGradient(const char *className, const char *sig, Ts...agv) : android::graphics::Shader(className, sig, std::forward<Ts>(agv)...) {}
		SweepGradient(QAndroidJniObject obj);
		
		// Constructors
		SweepGradient(jfloat arg0, jfloat arg1, jintArray arg2, jfloatArray arg3);
		SweepGradient(jfloat arg0, jfloat arg1, jlongArray arg2, jfloatArray arg3);
		SweepGradient(jfloat arg0, jfloat arg1, jint arg2, jint arg3);
		SweepGradient(jfloat arg0, jfloat arg1, jlong arg2, jlong arg3);
		
		// Methods
	};
} // namespace android::graphics

