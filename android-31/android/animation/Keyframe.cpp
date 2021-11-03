#include "./Keyframe.hpp"

namespace android::animation
{
	// Fields
	
	// QAndroidJniObject forward
	Keyframe::Keyframe(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Keyframe::Keyframe()
		: JObject(
			"android.animation.Keyframe",
			"()V"
		) {}
	
	// Methods
	android::animation::Keyframe Keyframe::ofFloat(jfloat arg0)
	{
		return callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofFloat",
			"(F)Landroid/animation/Keyframe;",
			arg0
		);
	}
	android::animation::Keyframe Keyframe::ofFloat(jfloat arg0, jfloat arg1)
	{
		return callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofFloat",
			"(FF)Landroid/animation/Keyframe;",
			arg0,
			arg1
		);
	}
	android::animation::Keyframe Keyframe::ofInt(jfloat arg0)
	{
		return callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofInt",
			"(F)Landroid/animation/Keyframe;",
			arg0
		);
	}
	android::animation::Keyframe Keyframe::ofInt(jfloat arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofInt",
			"(FI)Landroid/animation/Keyframe;",
			arg0,
			arg1
		);
	}
	android::animation::Keyframe Keyframe::ofObject(jfloat arg0)
	{
		return callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofObject",
			"(F)Landroid/animation/Keyframe;",
			arg0
		);
	}
	android::animation::Keyframe Keyframe::ofObject(jfloat arg0, jobject arg1)
	{
		return callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofObject",
			"(FLjava/lang/Object;)Landroid/animation/Keyframe;",
			arg0,
			arg1
		);
	}
	android::animation::Keyframe Keyframe::clone()
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
	JObject Keyframe::getInterpolator()
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
	void Keyframe::setInterpolator(JObject arg0)
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

