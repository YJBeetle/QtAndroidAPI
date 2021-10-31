#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../view/MotionEvent.hpp"
#include "./StackView.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	StackView::StackView(QAndroidJniObject obj) : android::widget::AdapterViewAnimator(obj) {}
	
	// Constructors
	StackView::StackView(android::content::Context arg0)
		: android::widget::AdapterViewAnimator(
			"android.widget.StackView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	StackView::StackView(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::AdapterViewAnimator(
			"android.widget.StackView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	StackView::StackView(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::widget::AdapterViewAnimator(
			"android.widget.StackView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	StackView::StackView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::widget::AdapterViewAnimator(
			"android.widget.StackView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void StackView::advance()
	{
		callMethod<void>(
			"advance",
			"()V"
		);
	}
	jstring StackView::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean StackView::onGenericMotionEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onGenericMotionEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean StackView::onInterceptTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean StackView::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void StackView::showNext()
	{
		callMethod<void>(
			"showNext",
			"()V"
		);
	}
	void StackView::showPrevious()
	{
		callMethod<void>(
			"showPrevious",
			"()V"
		);
	}
} // namespace android::widget

