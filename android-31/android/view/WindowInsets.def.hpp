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
	class RoundedCorner;
}
class JObject;
class JString;

namespace android::view
{
	class WindowInsets : public JObject
	{
	public:
		// Fields
		static android::view::WindowInsets CONSUMED();
		
		// QJniObject forward
		template<typename ...Ts> explicit WindowInsets(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WindowInsets(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WindowInsets(android::view::WindowInsets &arg0);
		
		// Methods
		android::view::WindowInsets consumeDisplayCutout() const;
		android::view::WindowInsets consumeStableInsets() const;
		android::view::WindowInsets consumeSystemWindowInsets() const;
		jboolean equals(JObject arg0) const;
		android::view::DisplayCutout getDisplayCutout() const;
		android::graphics::Insets getInsets(jint arg0) const;
		android::graphics::Insets getInsetsIgnoringVisibility(jint arg0) const;
		android::graphics::Insets getMandatorySystemGestureInsets() const;
		android::graphics::Rect getPrivacyIndicatorBounds() const;
		android::view::RoundedCorner getRoundedCorner(jint arg0) const;
		jint getStableInsetBottom() const;
		jint getStableInsetLeft() const;
		jint getStableInsetRight() const;
		jint getStableInsetTop() const;
		android::graphics::Insets getStableInsets() const;
		android::graphics::Insets getSystemGestureInsets() const;
		jint getSystemWindowInsetBottom() const;
		jint getSystemWindowInsetLeft() const;
		jint getSystemWindowInsetRight() const;
		jint getSystemWindowInsetTop() const;
		android::graphics::Insets getSystemWindowInsets() const;
		android::graphics::Insets getTappableElementInsets() const;
		jboolean hasInsets() const;
		jboolean hasStableInsets() const;
		jboolean hasSystemWindowInsets() const;
		jint hashCode() const;
		android::view::WindowInsets inset(android::graphics::Insets arg0) const;
		android::view::WindowInsets inset(jint arg0, jint arg1, jint arg2, jint arg3) const;
		jboolean isConsumed() const;
		jboolean isRound() const;
		jboolean isVisible(jint arg0) const;
		android::view::WindowInsets replaceSystemWindowInsets(android::graphics::Rect arg0) const;
		android::view::WindowInsets replaceSystemWindowInsets(jint arg0, jint arg1, jint arg2, jint arg3) const;
		JString toString() const;
	};
} // namespace android::view

