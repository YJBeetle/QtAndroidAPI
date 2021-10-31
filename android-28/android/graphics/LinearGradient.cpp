#include "./Shader_TileMode.hpp"
#include "./LinearGradient.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	LinearGradient::LinearGradient(QJniObject obj) : android::graphics::Shader(obj) {}
	
	// Constructors
	LinearGradient::LinearGradient(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jintArray arg4, jfloatArray arg5, android::graphics::Shader_TileMode arg6)
		: android::graphics::Shader(
			"android.graphics.LinearGradient",
			"(FFFF[I[FLandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object()
		) {}
	LinearGradient::LinearGradient(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4, jint arg5, android::graphics::Shader_TileMode arg6)
		: android::graphics::Shader(
			"android.graphics.LinearGradient",
			"(FFFFIILandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object()
		) {}
	
	// Methods
} // namespace android::graphics

