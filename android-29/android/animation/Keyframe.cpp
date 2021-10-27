#include "./Keyframe.hpp"

namespace android::animation
{
	// Fields
	
	Keyframe::Keyframe(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Keyframe::Keyframe()
	{
		__thiz = QAndroidJniObject(
			"android.animation.Keyframe",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Keyframe::ofFloat(jfloat arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofFloat",
			"(F)Landroid/animation/Keyframe;",
			arg0
		);
	}
	QAndroidJniObject Keyframe::ofFloat(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofFloat",
			"(FF)Landroid/animation/Keyframe;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Keyframe::ofInt(jfloat arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofInt",
			"(F)Landroid/animation/Keyframe;",
			arg0
		);
	}
	QAndroidJniObject Keyframe::ofInt(jfloat arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofInt",
			"(FI)Landroid/animation/Keyframe;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Keyframe::ofObject(jfloat arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofObject",
			"(F)Landroid/animation/Keyframe;",
			arg0
		);
	}
	QAndroidJniObject Keyframe::ofObject(jfloat arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofObject",
			"(FLjava/lang/Object;)Landroid/animation/Keyframe;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Keyframe::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/animation/Keyframe;"
		);
	}
	jfloat Keyframe::getFraction()
	{
		return __thiz.callMethod<jfloat>(
			"getFraction",
			"()F"
		);
	}
	QAndroidJniObject Keyframe::getInterpolator()
	{
		return __thiz.callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	jclass Keyframe::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jobject Keyframe::getValue()
	{
		return __thiz.callObjectMethod(
			"getValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean Keyframe::hasValue()
	{
		return __thiz.callMethod<jboolean>(
			"hasValue",
			"()Z"
		);
	}
	void Keyframe::setFraction(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setFraction",
			"(F)V",
			arg0
		);
	}
	void Keyframe::setInterpolator(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)V",
			arg0.__jniObject().object()
		);
	}
	void Keyframe::setValue(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setValue",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace android::animation

