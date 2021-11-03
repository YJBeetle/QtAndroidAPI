#pragma once

#include "../../JObject.hpp"

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
	class WindowInsets : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WindowInsets(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WindowInsets(QAndroidJniObject obj);
		
		// Constructors
		WindowInsets(android::view::WindowInsets &arg0);
		
		// Methods
		android::view::WindowInsets consumeDisplayCutout();
		android::view::WindowInsets consumeStableInsets();
		android::view::WindowInsets consumeSystemWindowInsets();
		jboolean equals(jobject arg0);
		android::view::DisplayCutout getDisplayCutout();
		android::graphics::Insets getMandatorySystemGestureInsets();
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
		android::view::WindowInsets inset(jint arg0, jint arg1, jint arg2, jint arg3);
		jboolean isConsumed();
		jboolean isRound();
		android::view::WindowInsets replaceSystemWindowInsets(android::graphics::Rect arg0);
		android::view::WindowInsets replaceSystemWindowInsets(jint arg0, jint arg1, jint arg2, jint arg3);
		jstring toString();
	};
} // namespace android::view

