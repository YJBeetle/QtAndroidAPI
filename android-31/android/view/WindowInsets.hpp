#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Insets;
}
namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class DisplayCutout;
}
namespace android::view
{
	class RoundedCorner;
}

namespace android::view
{
	class WindowInsets : public __JniBaseClass
	{
	public:
		// Fields
		static android::view::WindowInsets CONSUMED();
		
		// QJniObject forward
		template<typename ...Ts> explicit WindowInsets(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WindowInsets(QJniObject obj);
		
		// Constructors
		WindowInsets(android::view::WindowInsets &arg0);
		
		// Methods
		android::view::WindowInsets consumeDisplayCutout();
		android::view::WindowInsets consumeStableInsets();
		android::view::WindowInsets consumeSystemWindowInsets();
		jboolean equals(jobject arg0);
		android::view::DisplayCutout getDisplayCutout();
		android::graphics::Insets getInsets(jint arg0);
		android::graphics::Insets getInsetsIgnoringVisibility(jint arg0);
		android::graphics::Insets getMandatorySystemGestureInsets();
		android::graphics::Rect getPrivacyIndicatorBounds();
		android::view::RoundedCorner getRoundedCorner(jint arg0);
		jint getStableInsetBottom();
		jint getStableInsetLeft();
		jint getStableInsetRight();
		jint getStableInsetTop();
		android::graphics::Insets getStableInsets();
		android::graphics::Insets getSystemGestureInsets();
		jint getSystemWindowInsetBottom();
		jint getSystemWindowInsetLeft();
		jint getSystemWindowInsetRight();
		jint getSystemWindowInsetTop();
		android::graphics::Insets getSystemWindowInsets();
		android::graphics::Insets getTappableElementInsets();
		jboolean hasInsets();
		jboolean hasStableInsets();
		jboolean hasSystemWindowInsets();
		jint hashCode();
		android::view::WindowInsets inset(android::graphics::Insets arg0);
		android::view::WindowInsets inset(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean isConsumed();
		jboolean isRound();
		jboolean isVisible(jint arg0);
		android::view::WindowInsets replaceSystemWindowInsets(android::graphics::Rect arg0);
		android::view::WindowInsets replaceSystemWindowInsets(jint arg0, jint arg1, jint arg2, jint arg3);
		jstring toString();
	};
} // namespace android::view

