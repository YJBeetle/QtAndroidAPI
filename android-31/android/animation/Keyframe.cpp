#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "./Keyframe.hpp"

namespace android::animation
{
	// Fields
	
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
	android::animation::Keyframe Keyframe::ofObject(jfloat arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofObject",
			"(FLjava/lang/Object;)Landroid/animation/Keyframe;",
			arg0,
			arg1.object<jobject>()
		);
	}
	android::animation::Keyframe Keyframe::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/animation/Keyframe;"
		);
	}
	jfloat Keyframe::getFraction() const
	{
		return callMethod<jfloat>(
			"getFraction",
			"()F"
		);
	}
	JObject Keyframe::getInterpolator() const
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;"
		);
	}
	JClass Keyframe::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/Class;"
		);
	}
	JObject Keyframe::getValue() const
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/Object;"
		);
	}
	jboolean Keyframe::hasValue() const
	{
		return callMethod<jboolean>(
			"hasValue",
			"()Z"
		);
	}
	void Keyframe::setFraction(jfloat arg0) const
	{
		callMethod<void>(
			"setFraction",
			"(F)V",
			arg0
		);
	}
	void Keyframe::setInterpolator(JObject arg0) const
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)V",
			arg0.object()
		);
	}
	void Keyframe::setValue(JObject arg0) const
	{
		callMethod<void>(
			"setValue",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace android::animation

