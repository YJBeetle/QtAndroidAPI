#include "../Canvas.hpp"
#include "./TransitionDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QJniObject forward
	TransitionDrawable::TransitionDrawable(QJniObject obj) : android::graphics::drawable::LayerDrawable(obj) {}
	
	// Constructors
	TransitionDrawable::TransitionDrawable(jarray arg0)
		: android::graphics::drawable::LayerDrawable(
			"android.graphics.drawable.TransitionDrawable",
			"([Landroid/graphics/drawable/Drawable;)V",
			arg0
		) {}
	
	// Methods
	void TransitionDrawable::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jboolean TransitionDrawable::isCrossFadeEnabled()
	{
		return callMethod<jboolean>(
			"isCrossFadeEnabled",
			"()Z"
		);
	}
	void TransitionDrawable::resetTransition()
	{
		callMethod<void>(
			"resetTransition",
			"()V"
		);
	}
	void TransitionDrawable::reverseTransition(jint arg0)
	{
		callMethod<void>(
			"reverseTransition",
			"(I)V",
			arg0
		);
	}
	void TransitionDrawable::setCrossFadeEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setCrossFadeEnabled",
			"(Z)V",
			arg0
		);
	}
	void TransitionDrawable::startTransition(jint arg0)
	{
		callMethod<void>(
			"startTransition",
			"(I)V",
			arg0
		);
	}
} // namespace android::graphics::drawable

