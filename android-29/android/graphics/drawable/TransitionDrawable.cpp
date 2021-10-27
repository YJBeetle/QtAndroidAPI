#include "../Canvas.hpp"
#include "./TransitionDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	TransitionDrawable::TransitionDrawable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TransitionDrawable::TransitionDrawable(jarray &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.TransitionDrawable",
			"([Landroid/graphics/drawable/Drawable;)V",
			arg0
		);
	}
	
	// Methods
	void TransitionDrawable::draw(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean TransitionDrawable::isCrossFadeEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isCrossFadeEnabled",
			"()Z"
		);
	}
	void TransitionDrawable::resetTransition()
	{
		__thiz.callMethod<void>(
			"resetTransition",
			"()V"
		);
	}
	void TransitionDrawable::reverseTransition(jint arg0)
	{
		__thiz.callMethod<void>(
			"reverseTransition",
			"(I)V",
			arg0
		);
	}
	void TransitionDrawable::setCrossFadeEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCrossFadeEnabled",
			"(Z)V",
			arg0
		);
	}
	void TransitionDrawable::startTransition(jint arg0)
	{
		__thiz.callMethod<void>(
			"startTransition",
			"(I)V",
			arg0
		);
	}
} // namespace android::graphics::drawable

