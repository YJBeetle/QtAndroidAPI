#include "../../../JArray.hpp"
#include "../Canvas.hpp"
#include "./TransitionDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QJniObject forward
	TransitionDrawable::TransitionDrawable(QJniObject obj) : android::graphics::drawable::LayerDrawable(obj) {}
	
	// Constructors
	TransitionDrawable::TransitionDrawable(JArray arg0)
		: android::graphics::drawable::LayerDrawable(
			"android.graphics.drawable.TransitionDrawable",
			"([Landroid/graphics/drawable/Drawable;)V",
			arg0.object<jarray>()
		) {}
	
	// Methods
	void TransitionDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jboolean TransitionDrawable::isCrossFadeEnabled() const
	{
		return callMethod<jboolean>(
			"isCrossFadeEnabled",
			"()Z"
		);
	}
	void TransitionDrawable::resetTransition() const
	{
		callMethod<void>(
			"resetTransition",
			"()V"
		);
	}
	void TransitionDrawable::reverseTransition(jint arg0) const
	{
		callMethod<void>(
			"reverseTransition",
			"(I)V",
			arg0
		);
	}
	void TransitionDrawable::setCrossFadeEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setCrossFadeEnabled",
			"(Z)V",
			arg0
		);
	}
	void TransitionDrawable::startTransition(jint arg0) const
	{
		callMethod<void>(
			"startTransition",
			"(I)V",
			arg0
		);
	}
} // namespace android::graphics::drawable

