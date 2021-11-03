#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "./Shader_TileMode.hpp"
#include "./RadialGradient.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	RadialGradient::RadialGradient(QAndroidJniObject obj) : android::graphics::Shader(obj) {}
	
	// Constructors
	RadialGradient::RadialGradient(jfloat arg0, jfloat arg1, jfloat arg2, JIntArray arg3, JFloatArray arg4, android::graphics::Shader_TileMode arg5)
		: android::graphics::Shader(
			"android.graphics.RadialGradient",
			"(FFF[I[FLandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3.object<jintArray>(),
			arg4.object<jfloatArray>(),
			arg5.object()
		) {}
	RadialGradient::RadialGradient(jfloat arg0, jfloat arg1, jfloat arg2, jint arg3, jint arg4, android::graphics::Shader_TileMode arg5)
		: android::graphics::Shader(
			"android.graphics.RadialGradient",
			"(FFFIILandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		) {}
	
	// Methods
} // namespace android::graphics

