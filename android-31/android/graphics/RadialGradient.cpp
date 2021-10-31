#include "./Shader_TileMode.hpp"
#include "./RadialGradient.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	RadialGradient::RadialGradient(QAndroidJniObject obj) : android::graphics::Shader(obj) {}
	
	// Constructors
	RadialGradient::RadialGradient(jfloat arg0, jfloat arg1, jfloat arg2, jintArray arg3, jfloatArray arg4, android::graphics::Shader_TileMode arg5)
		: android::graphics::Shader(
			"android.graphics.RadialGradient",
			"(FFF[I[FLandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		) {}
	RadialGradient::RadialGradient(jfloat arg0, jfloat arg1, jfloat arg2, jlongArray arg3, jfloatArray arg4, android::graphics::Shader_TileMode arg5)
		: android::graphics::Shader(
			"android.graphics.RadialGradient",
			"(FFF[J[FLandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
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
	RadialGradient::RadialGradient(jfloat arg0, jfloat arg1, jfloat arg2, jlong arg3, jlong arg4, android::graphics::Shader_TileMode arg5)
		: android::graphics::Shader(
			"android.graphics.RadialGradient",
			"(FFFJJLandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		) {}
	RadialGradient::RadialGradient(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jlongArray arg6, jfloatArray arg7, android::graphics::Shader_TileMode arg8)
		: android::graphics::Shader(
			"android.graphics.RadialGradient",
			"(FFFFFF[J[FLandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8.object()
		) {}
	
	// Methods
} // namespace android::graphics

