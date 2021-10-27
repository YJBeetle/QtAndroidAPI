#include "./Shader_TileMode.hpp"
#include "./LinearGradient.hpp"

namespace android::graphics
{
	// Fields
	
	LinearGradient::LinearGradient(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LinearGradient::LinearGradient(jfloat &arg0, jfloat &arg1, jfloat &arg2, jfloat &arg3, jintArray &arg4, jfloatArray &arg5, android::graphics::Shader_TileMode &arg6)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.LinearGradient",
			"(FFFF[I[FLandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	LinearGradient::LinearGradient(jfloat &arg0, jfloat &arg1, jfloat &arg2, jfloat &arg3, jlongArray &arg4, jfloatArray &arg5, android::graphics::Shader_TileMode &arg6)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.LinearGradient",
			"(FFFF[J[FLandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	LinearGradient::LinearGradient(jfloat &arg0, jfloat &arg1, jfloat &arg2, jfloat &arg3, jint &arg4, jint &arg5, android::graphics::Shader_TileMode &arg6)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.LinearGradient",
			"(FFFFIILandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	LinearGradient::LinearGradient(jfloat &arg0, jfloat &arg1, jfloat &arg2, jfloat &arg3, jlong &arg4, jlong &arg5, android::graphics::Shader_TileMode &arg6)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.LinearGradient",
			"(FFFFJJLandroid/graphics/Shader$TileMode;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	
	// Methods
} // namespace android::graphics

