#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}

namespace android::view
{
	class ViewConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ViewConfiguration(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ViewConfiguration(QAndroidJniObject obj);
		
		// Constructors
		ViewConfiguration();
		
		// Methods
		static android::view::ViewConfiguration get(android::content::Context arg0);
		static jfloat getAmbiguousGestureMultiplier();
		static jlong getDefaultActionModeHideDuration();
		static jint getDoubleTapTimeout();
		static jint getEdgeSlop();
		static jint getFadingEdgeLength();
		static jlong getGlobalActionKeyTimeout();
		static jint getJumpTapTimeout();
		static jint getKeyRepeatDelay();
		static jint getKeyRepeatTimeout();
		static jint getLongPressTimeout();
		static jint getMaximumDrawingCacheSize();
		static jint getMaximumFlingVelocity();
		static jint getMinimumFlingVelocity();
		static jint getPressedStateDuration();
		static jint getScrollBarFadeDuration();
		static jint getScrollBarSize();
		static jint getScrollDefaultDelay();
		static jfloat getScrollFriction();
		static jint getTapTimeout();
		static jint getTouchSlop();
		static jint getWindowTouchSlop();
		static jlong getZoomControlsTimeout();
		jfloat getScaledAmbiguousGestureMultiplier();
		jint getScaledDoubleTapSlop();
		jint getScaledEdgeSlop();
		jint getScaledFadingEdgeLength();
		jfloat getScaledHorizontalScrollFactor();
		jint getScaledHoverSlop();
		jint getScaledMaximumDrawingCacheSize();
		jint getScaledMaximumFlingVelocity();
		jint getScaledMinimumFlingVelocity();
		jint getScaledMinimumScalingSpan();
		jint getScaledOverflingDistance();
		jint getScaledOverscrollDistance();
		jint getScaledPagingTouchSlop();
		jint getScaledScrollBarSize();
		jint getScaledTouchSlop();
		jfloat getScaledVerticalScrollFactor();
		jint getScaledWindowTouchSlop();
		jboolean hasPermanentMenuKey();
		jboolean shouldShowMenuShortcutsWhenKeyboardPresent();
	};
} // namespace android::view

