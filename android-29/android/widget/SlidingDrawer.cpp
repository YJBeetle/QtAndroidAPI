#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "../../JString.hpp"
#include "./SlidingDrawer.hpp"

namespace android::widget
{
	// Fields
	jint SlidingDrawer::ORIENTATION_HORIZONTAL()
	{
		return getStaticField<jint>(
			"android.widget.SlidingDrawer",
			"ORIENTATION_HORIZONTAL"
		);
	}
	jint SlidingDrawer::ORIENTATION_VERTICAL()
	{
		return getStaticField<jint>(
			"android.widget.SlidingDrawer",
			"ORIENTATION_VERTICAL"
		);
	}
	
	// QJniObject forward
	SlidingDrawer::SlidingDrawer(QJniObject obj) : android::view::ViewGroup(obj) {}
	
	// Constructors
	SlidingDrawer::SlidingDrawer(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup(
			"android.widget.SlidingDrawer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	SlidingDrawer::SlidingDrawer(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::ViewGroup(
			"android.widget.SlidingDrawer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	SlidingDrawer::SlidingDrawer(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::ViewGroup(
			"android.widget.SlidingDrawer",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void SlidingDrawer::animateClose() const
	{
		callMethod<void>(
			"animateClose",
			"()V"
		);
	}
	void SlidingDrawer::animateOpen() const
	{
		callMethod<void>(
			"animateOpen",
			"()V"
		);
	}
	void SlidingDrawer::animateToggle() const
	{
		callMethod<void>(
			"animateToggle",
			"()V"
		);
	}
	void SlidingDrawer::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	JString SlidingDrawer::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::view::View SlidingDrawer::getContent() const
	{
		return callObjectMethod(
			"getContent",
			"()Landroid/view/View;"
		);
	}
	android::view::View SlidingDrawer::getHandle() const
	{
		return callObjectMethod(
			"getHandle",
			"()Landroid/view/View;"
		);
	}
	jboolean SlidingDrawer::isMoving() const
	{
		return callMethod<jboolean>(
			"isMoving",
			"()Z"
		);
	}
	jboolean SlidingDrawer::isOpened() const
	{
		return callMethod<jboolean>(
			"isOpened",
			"()Z"
		);
	}
	void SlidingDrawer::lock() const
	{
		callMethod<void>(
			"lock",
			"()V"
		);
	}
	jboolean SlidingDrawer::onInterceptTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onInterceptTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	jboolean SlidingDrawer::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void SlidingDrawer::open() const
	{
		callMethod<void>(
			"open",
			"()V"
		);
	}
	void SlidingDrawer::setOnDrawerCloseListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDrawerCloseListener",
			"(Landroid/widget/SlidingDrawer$OnDrawerCloseListener;)V",
			arg0.object()
		);
	}
	void SlidingDrawer::setOnDrawerOpenListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDrawerOpenListener",
			"(Landroid/widget/SlidingDrawer$OnDrawerOpenListener;)V",
			arg0.object()
		);
	}
	void SlidingDrawer::setOnDrawerScrollListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDrawerScrollListener",
			"(Landroid/widget/SlidingDrawer$OnDrawerScrollListener;)V",
			arg0.object()
		);
	}
	void SlidingDrawer::toggle() const
	{
		callMethod<void>(
			"toggle",
			"()V"
		);
	}
	void SlidingDrawer::unlock() const
	{
		callMethod<void>(
			"unlock",
			"()V"
		);
	}
} // namespace android::widget

