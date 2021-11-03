#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class DisplayCutout;
}
class JObject;
class JString;

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
		jboolean equals(JObject arg0);
		android::view::DisplayCutout getDisplayCutout();
		jint getStableInsetBottom();
		jint getStableInsetLeft();
		jint getStableInsetRight();
		jint getStableInsetTop();
		jint getSystemWindowInsetBottom();
		jint getSystemWindowInsetLeft();
		jint getSystemWindowInsetRight();
		jint getSystemWindowInsetTop();
		jboolean hasInsets();
		jboolean hasStableInsets();
		jboolean hasSystemWindowInsets();
		jint hashCode();
		jboolean isConsumed();
		jboolean isRound();
		android::view::WindowInsets replaceSystemWindowInsets(android::graphics::Rect arg0);
		android::view::WindowInsets replaceSystemWindowInsets(jint arg0, jint arg1, jint arg2, jint arg3);
		JString toString();
	};
} // namespace android::view

