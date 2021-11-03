#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/animation/Animation.hpp"
#include "./ViewAnimator.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	ViewAnimator::ViewAnimator(QAndroidJniObject obj) : android::widget::FrameLayout(obj) {}
	
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
	void ViewAnimator::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2)
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jstring ViewAnimator::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean ViewAnimator::getAnimateFirstView()
	{
		return callMethod<jboolean>(
			"getAnimateFirstView",
			"()Z"
		);
	}
	jint ViewAnimator::getBaseline()
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	android::view::View ViewAnimator::getCurrentView()
	{
		return callObjectMethod(
			"getCurrentView",
			"()Landroid/view/View;"
		);
	}
	jint ViewAnimator::getDisplayedChild()
	{
		return callMethod<jint>(
			"getDisplayedChild",
			"()I"
		);
	}
	android::view::animation::Animation ViewAnimator::getInAnimation()
	{
		return callObjectMethod(
			"getInAnimation",
			"()Landroid/view/animation/Animation;"
		);
	}
	android::view::animation::Animation ViewAnimator::getOutAnimation()
	{
		return callObjectMethod(
			"getOutAnimation",
			"()Landroid/view/animation/Animation;"
		);
	}
	void ViewAnimator::removeAllViews()
	{
		callMethod<void>(
			"removeAllViews",
			"()V"
		);
	}
	void ViewAnimator::removeView(android::view::View arg0)
	{
		callMethod<void>(
			"removeView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ViewAnimator::removeViewAt(jint arg0)
	{
		callMethod<void>(
			"removeViewAt",
			"(I)V",
			arg0
		);
	}
	void ViewAnimator::removeViewInLayout(android::view::View arg0)
	{
		callMethod<void>(
			"removeViewInLayout",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void ViewAnimator::removeViews(jint arg0, jint arg1)
	{
		callMethod<void>(
			"removeViews",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ViewAnimator::removeViewsInLayout(jint arg0, jint arg1)
	{
		callMethod<void>(
			"removeViewsInLayout",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ViewAnimator::setAnimateFirstView(jboolean arg0)
	{
		callMethod<void>(
			"setAnimateFirstView",
			"(Z)V",
			arg0
		);
	}
	void ViewAnimator::setDisplayedChild(jint arg0)
	{
		callMethod<void>(
			"setDisplayedChild",
			"(I)V",
			arg0
		);
	}
	void ViewAnimator::setInAnimation(android::view::animation::Animation arg0)
	{
		callMethod<void>(
			"setInAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		);
	}
	void ViewAnimator::setInAnimation(android::content::Context arg0, jint arg1)
	{
		callMethod<void>(
			"setInAnimation",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void ViewAnimator::setOutAnimation(android::view::animation::Animation arg0)
	{
		callMethod<void>(
			"setOutAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.object()
		);
	}
	void ViewAnimator::setOutAnimation(android::content::Context arg0, jint arg1)
	{
		callMethod<void>(
			"setOutAnimation",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void ViewAnimator::showNext()
	{
		callMethod<void>(
			"showNext",
			"()V"
		);
	}
	void ViewAnimator::showPrevious()
	{
		callMethod<void>(
			"showPrevious",
			"()V"
		);
	}
} // namespace android::widget

