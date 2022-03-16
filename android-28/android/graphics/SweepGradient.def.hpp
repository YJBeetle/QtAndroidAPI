#pragma once

#include "./Shader.def.hpp"

class JFloatArray;
class JIntArray;

namespace android::graphics
{
	class SweepGradient : public android::graphics::Shader
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SweepGradient(const char *className, const char *sig, Ts...agv) : android::graphics::Shader(className, sig, std::forward<Ts>(agv)...) {}
		SweepGradient(QJniObject obj) : android::graphics::Shader(obj) {}
		
		// Constructors
		SweepGradient(jfloat arg0, jfloat arg1, JIntArray arg2, JFloatArray arg3);
		SweepGradient(jfloat arg0, jfloat arg1, jint arg2, jint arg3);
		
		// Methods
	};
} // namespace android::graphics

