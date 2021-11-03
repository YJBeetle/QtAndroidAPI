#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/animation/Animation.hpp"
#include "../../JString.hpp"
#include "./ViewAnimator.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	ViewAnimator::ViewAnimator(QJniObject obj) : android::widget::FrameLayout(obj) {}
	
	// Constructors
	ViewAnimator::ViewAnimator(android::content::Context arg0)
		: android::widget::FrameLayout(
			"android.widget.ViewAnimator",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ViewAnimator::ViewAnimator(android::content::Context arg0, JObject arg1)
		: android::widget::FrameLayout(
			"android.widget.ViewAnimator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void ViewAnimator::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	JString ViewAnimator::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean ViewAnimator::getAnimateFirstView() const
	{
		return callMethod<jboolean>(
			"getAnimateFirstView",
			"()Z"
		);
	}
	jint ViewAnimator::getBaseline() const
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	android::view::View ViewAnimator::getCurrentView() const
	{
		return callObjectMethod(
			"getCurrentView",
			"()Landroid/view/View;"
		);
	}
	jint ViewAnimator::getDisplayedChild() const
	{
		return callMethod<jint>(
			"getDisplayedChild",
			"()I"
		);
	}
	android::view::animation::Animation ViewAnimator::getInAnimation() const
	{
		return callObjectMethod(
			"getInAnimation",
			"()Landroid/view/animation/Animation;"
		);
	}
	android::view::animation::Animation ViewAnimator::getOutAnimation() const
	{
		return callObjectMethod(
			"getOutAnimation",
			"()Landroid/view/animation/Animation;"
		);
	}
	void ViewAnimator::removeAllViews() const
	{
		callMethod<void>(
			"removeAllViews",
			"()V"
		);
	}
	void ViewAnimator::removeView(android::view::View arg0) const
	{
		callMethod<void>(
			"removeView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ViewAnimator::removeViewAt(jint arg0) const
	{
		callMethod<void>(
			"removeViewAt",
			"(I)V",
			arg0
		);
	}
	void ViewAnimator::removeViewInLayout(android::view::View arg0) const
	{
		callMethod<void>(
			"removeViewInLayout",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ViewAnimator::removeViews(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"removeViews",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ViewAnimator::removeViewsInLayout(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"removeViewsInLayout",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ViewAnimator::setAnimateFirstView(jboolean arg0) const
	{
		callMethod<void>(
			"setAnimateFirstView",
			"(Z)V",
			arg0
		);
	}
	void ViewAnimator::setDisplayedChild(jint arg0) const
	{
		callMethod<void>(
			"setDisplayedChild",
			"(I)V",
			arg0
		);
	}
	void ViewAnimator::setInAnimation(android::view::animation::Animation arg0) const
	{
		callMethod<void>(
			"setInAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		);
	}
	void ViewAnimator::setInAnimation(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setInAnimation",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void ViewAnimator::setOutAnimation(android::view::animation::Animation arg0) const
	{
		callMethod<void>(
			"setOutAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		);
	}
	void ViewAnimator::setOutAnimation(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setOutAnimation",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void ViewAnimator::showNext() const
	{
		callMethod<void>(
			"showNext",
			"()V"
		);
	}
	void ViewAnimator::showPrevious() const
	{
		callMethod<void>(
			"showPrevious",
			"()V"
		);
	}
} // namespace android::widget

