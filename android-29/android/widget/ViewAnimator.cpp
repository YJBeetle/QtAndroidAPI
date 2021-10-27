#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/animation/Animation.hpp"
#include "./ViewAnimator.hpp"

namespace android::widget
{
	// Fields
	
	ViewAnimator::ViewAnimator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ViewAnimator::ViewAnimator(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ViewAnimator",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	ViewAnimator::ViewAnimator(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ViewAnimator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void ViewAnimator::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jstring ViewAnimator::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean ViewAnimator::getAnimateFirstView()
	{
		return __thiz.callMethod<jboolean>(
			"getAnimateFirstView",
			"()Z"
		);
	}
	jint ViewAnimator::getBaseline()
	{
		return __thiz.callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	QAndroidJniObject ViewAnimator::getCurrentView()
	{
		return __thiz.callObjectMethod(
			"getCurrentView",
			"()Landroid/view/View;"
		);
	}
	jint ViewAnimator::getDisplayedChild()
	{
		return __thiz.callMethod<jint>(
			"getDisplayedChild",
			"()I"
		);
	}
	QAndroidJniObject ViewAnimator::getInAnimation()
	{
		return __thiz.callObjectMethod(
			"getInAnimation",
			"()Landroid/view/animation/Animation;"
		);
	}
	QAndroidJniObject ViewAnimator::getOutAnimation()
	{
		return __thiz.callObjectMethod(
			"getOutAnimation",
			"()Landroid/view/animation/Animation;"
		);
	}
	void ViewAnimator::removeAllViews()
	{
		__thiz.callMethod<void>(
			"removeAllViews",
			"()V"
		);
	}
	void ViewAnimator::removeView(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"removeView",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewAnimator::removeViewAt(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeViewAt",
			"(I)V",
			arg0
		);
	}
	void ViewAnimator::removeViewInLayout(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"removeViewInLayout",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewAnimator::removeViews(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"removeViews",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ViewAnimator::removeViewsInLayout(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"removeViewsInLayout",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ViewAnimator::setAnimateFirstView(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAnimateFirstView",
			"(Z)V",
			arg0
		);
	}
	void ViewAnimator::setDisplayedChild(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDisplayedChild",
			"(I)V",
			arg0
		);
	}
	void ViewAnimator::setInAnimation(android::view::animation::Animation arg0)
	{
		__thiz.callMethod<void>(
			"setInAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewAnimator::setInAnimation(android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setInAnimation",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ViewAnimator::setOutAnimation(android::view::animation::Animation arg0)
	{
		__thiz.callMethod<void>(
			"setOutAnimation",
			"(Landroid/view/animation/Animation;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewAnimator::setOutAnimation(android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setOutAnimation",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ViewAnimator::showNext()
	{
		__thiz.callMethod<void>(
			"showNext",
			"()V"
		);
	}
	void ViewAnimator::showPrevious()
	{
		__thiz.callMethod<void>(
			"showPrevious",
			"()V"
		);
	}
} // namespace android::widget

