#include "./Shader_TileMode.hpp"
#include "./RadialGradient.hpp"

namespace android::graphics
{
	// Fields
	
	RadialGradient::RadialGradient(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RadialGradient::RadialGradient(jfloat &arg0, jfloat &arg1, jfloat &arg2, jintArray &arg3, jfloatArray &arg4, android::graphics::Shader_TileMode &arg5)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RadialGradient",
			"(FFF[I[FLandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	RadialGradient::RadialGradient(jfloat &arg0, jfloat &arg1, jfloat &arg2, jlongArray &arg3, jfloatArray &arg4, android::graphics::Shader_TileMode &arg5)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RadialGradient",
			"(FFF[J[FLandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	RadialGradient::RadialGradient(jfloat &arg0, jfloat &arg1, jfloat &arg2, jint &arg3, jint &arg4, android::graphics::Shader_TileMode &arg5)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RadialGradient",
			"(FFFIILandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	RadialGradient::RadialGradient(jfloat &arg0, jfloat &arg1, jfloat &arg2, jlong &arg3, jlong &arg4, android::graphics::Shader_TileMode &arg5)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.RadialGradient",
			"(FFFJJLandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	
	// Methods
} // namespace android::graphics

