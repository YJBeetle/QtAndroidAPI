#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "./SlidingDrawer.hpp"

namespace android::widget
{
	// Fields
	jint SlidingDrawer::ORIENTATION_HORIZONTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.SlidingDrawer",
			"ORIENTATION_HORIZONTAL"
		);
	}
	jint SlidingDrawer::ORIENTATION_VERTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.SlidingDrawer",
			"ORIENTATION_VERTICAL"
		);
	}
	
	// QAndroidJniObject forward
	SlidingDrawer::SlidingDrawer(QAndroidJniObject obj) : android::view::ViewGroup(obj) {}
	
	// Constructors
	SlidingDrawer::SlidingDrawer(android::content::Context arg0, __JniBaseClass arg1)
		: android::view::ViewGroup(
			"android.widget.SlidingDrawer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	SlidingDrawer::SlidingDrawer(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::view::ViewGroup(
			"android.widget.SlidingDrawer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	SlidingDrawer::SlidingDrawer(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::view::ViewGroup(
			"android.widget.SlidingDrawer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void SlidingDrawer::animateClose()
	{
		callMethod<void>(
			"animateClose",
			"()V"
		);
	}
	void SlidingDrawer::animateOpen()
	{
		callMethod<void>(
			"animateOpen",
			"()V"
		);
	}
	void SlidingDrawer::animateToggle()
	{
		callMethod<void>(
			"animateToggle",
			"()V"
		);
	}
	void SlidingDrawer::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jstring SlidingDrawer::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::view::View SlidingDrawer::getContent()
	{
		return callObjectMethod(
			"getContent",
			"()Landroid/view/View;"
		);
	}
	android::view::View SlidingDrawer::getHandle()
	{
		return callObjectMethod(
			"getHandle",
			"()Landroid/view/View;"
		);
	}
	jboolean SlidingDrawer::isMoving()
	{
		return callMethod<jboolean>(
			"isMoving",
			"()Z"
		);
	}
	jboolean SlidingDrawer::isOpened()
	{
		return callMethod<jboolean>(
			"isOpened",
			"()Z"
		);
	}
	void SlidingDrawer::lock()
	{
		callMethod<void>(
			"lock",
			"()V"
		);
	}
	jboolean SlidingDrawer::onInterceptTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean SlidingDrawer::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void SlidingDrawer::open()
	{
		callMethod<void>(
			"open",
			"()V"
		);
	}
	void SlidingDrawer::setOnDrawerCloseListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnDrawerCloseListener",
			"(Landroid/widget/SlidingDrawer$OnDrawerCloseListener;)V",
			arg0.object()
		);
	}
	void SlidingDrawer::setOnDrawerOpenListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnDrawerOpenListener",
			"(Landroid/widget/SlidingDrawer$OnDrawerOpenListener;)V",
			arg0.object()
		);
	}
	void SlidingDrawer::setOnDrawerScrollListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnDrawerScrollListener",
			"(Landroid/widget/SlidingDrawer$OnDrawerScrollListener;)V",
			arg0.object()
		);
	}
	void SlidingDrawer::toggle()
	{
		callMethod<void>(
			"toggle",
			"()V"
		);
	}
	void SlidingDrawer::unlock()
	{
		callMethod<void>(
			"unlock",
			"()V"
		);
	}
} // namespace android::widget

