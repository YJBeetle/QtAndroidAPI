#include "./Keyframe.hpp"

namespace android::animation
{
	// Fields
	
	// QAndroidJniObject forward
	Keyframe::Keyframe(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Keyframe::Keyframe()
		: __JniBaseClass(
			"android.animation.Keyframe",
			"()V"
		) {}
	
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
		return callObjectMethod(
			"clone",
			"()Landroid/animation/Keyframe;"
		);
	}
	jfloat Keyframe::getFraction()
	{
		return callMethod<jfloat>(
			"getFraction",
			"()F"
		);
	}
	QAndroidJniObject Keyframe::getInterpolator()
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	jclass Keyframe::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jobject Keyframe::getValue()
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean Keyframe::hasValue()
	{
		return callMethod<jboolean>(
			"hasValue",
			"()Z"
		);
	}
	void Keyframe::setFraction(jfloat arg0)
	{
		callMethod<void>(
			"setFraction",
			"(F)V",
			arg0
		);
	}
	void Keyframe::setInterpolator(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)V",
			arg0.object()
		);
	}
	void Keyframe::setValue(jobject arg0)
	{
		callMethod<void>(
			"setValue",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace android::animation
