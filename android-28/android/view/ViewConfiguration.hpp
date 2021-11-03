#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}

namespace android::view
{
	class ViewConfiguration : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ViewConfiguration(QJniObject obj);
		
		// Constructors
		ViewConfiguration();
		
		// Methods
		static android::view::ViewConfiguration get(android::content::Context arg0);
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
		jint getScaledDoubleTapSlop() const;
		jint getScaledEdgeSlop() const;
		jint getScaledFadingEdgeLength() const;
		jfloat getScaledHorizontalScrollFactor() const;
		jint getScaledHoverSlop() const;
		jint getScaledMaximumDrawingCacheSize() const;
		jint getScaledMaximumFlingVelocity() const;
		jint getScaledMinimumFlingVelocity() const;
		jint getScaledOverflingDistance() const;
		jint getScaledOverscrollDistance() const;
		jint getScaledPagingTouchSlop() const;
		jint getScaledScrollBarSize() const;
		jint getScaledTouchSlop() const;
		jfloat getScaledVerticalScrollFactor() const;
		jint getScaledWindowTouchSlop() const;
		jboolean hasPermanentMenuKey() const;
		jboolean shouldShowMenuShortcutsWhenKeyboardPresent() const;
	};
} // namespace android::view

