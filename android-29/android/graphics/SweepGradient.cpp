#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JLongArray.hpp"
#include "./SweepGradient.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	SweepGradient::SweepGradient(QAndroidJniObject obj) : android::graphics::Shader(obj) {}
	
	// Constructors
	SweepGradient::SweepGradient(jfloat arg0, jfloat arg1, JIntArray arg2, JFloatArray arg3)
		: android::graphics::Shader(
			"android.graphics.SweepGradient",
			"(FF[I[F)V",
			arg0,
			arg1,
			arg2.object<jintArray>(),
			arg3.object<jfloatArray>()
		) {}
	SweepGradient::SweepGradient(jfloat arg0, jfloat arg1, JLongArray arg2, JFloatArray arg3)
		: android::graphics::Shader(
			"android.graphics.SweepGradient",
			"(FF[J[F)V",
			arg0,
			arg1,
			arg2.object<jlongArray>(),
			arg3.object<jfloatArray>()
		) {}
	SweepGradient::SweepGradient(jfloat arg0, jfloat arg1, jint arg2, jint arg3)
		: android::graphics::Shader(
			"android.graphics.SweepGradient",
			"(FFII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	SweepGradient::SweepGradient(jfloat arg0, jfloat arg1, jlong arg2, jlong arg3)
		: android::graphics::Shader(
			"android.graphics.SweepGradient",
			"(FFJJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::graphics

