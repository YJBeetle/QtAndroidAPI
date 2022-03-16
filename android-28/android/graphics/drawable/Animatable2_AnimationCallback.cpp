#include "./Drawable.hpp"
#include "./Animatable2_AnimationCallback.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	Animatable2_AnimationCallback::Animatable2_AnimationCallback()
		: JObject(
			"android.graphics.drawable.Animatable2$AnimationCallback",
			"()V"
		) {}
	
	// Methods
	void Animatable2_AnimationCallback::onAnimationEnd(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"onAnimationEnd",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void Animatable2_AnimationCallback::onAnimationStart(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"onAnimationStart",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable

