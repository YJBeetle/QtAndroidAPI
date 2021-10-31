#include "./SweepGradient.hpp"

namespace android::graphics
{
	// Fields
	
	SweepGradient::SweepGradient(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SweepGradient::SweepGradient(jfloat arg0, jfloat arg1, jintArray arg2, jfloatArray arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SweepGradient",
			"(FF[I[F)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	SweepGradient::SweepGradient(jfloat arg0, jfloat arg1, jlongArray arg2, jfloatArray arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SweepGradient",
			"(FF[J[F)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	SweepGradient::SweepGradient(jfloat arg0, jfloat arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SweepGradient",
			"(FFII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	SweepGradient::SweepGradient(jfloat arg0, jfloat arg1, jlong arg2, jlong arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.SweepGradient",
			"(FFJJ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace android::graphics

