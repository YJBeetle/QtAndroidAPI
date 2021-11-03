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
		android::view::WindowInsets consumeDisplayCutout() const;
		android::view::WindowInsets consumeStableInsets() const;
		android::view::WindowInsets consumeSystemWindowInsets() const;
		jboolean equals(JObject arg0) const;
		android::view::DisplayCutout getDisplayCutout() const;
		jint getStableInsetBottom() const;
		jint getStableInsetLeft() const;
		jint getStableInsetRight() const;
		jint getStableInsetTop() const;
		jint getSystemWindowInsetBottom() const;
		jint getSystemWindowInsetLeft() const;
		jint getSystemWindowInsetRight() const;
		jint getSystemWindowInsetTop() const;
		jboolean hasInsets() const;
		jboolean hasStableInsets() const;
		jboolean hasSystemWindowInsets() const;
		jint hashCode() const;
		jboolean isConsumed() const;
		jboolean isRound() const;
		android::view::WindowInsets replaceSystemWindowInsets(android::graphics::Rect arg0) const;
		android::view::WindowInsets replaceSystemWindowInsets(jint arg0, jint arg1, jint arg2, jint arg3) const;
		JString toString() const;
	};
} // namespace android::view

