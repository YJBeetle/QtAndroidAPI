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
class JObject;
class JString;

namespace android::view
{
	class DisplayCutout : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DisplayCutout(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DisplayCutout(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		DisplayCutout(android::graphics::Rect arg0, JObject arg1);
		DisplayCutout(android::graphics::Insets arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, android::graphics::Rect arg3, android::graphics::Rect arg4);
		DisplayCutout(android::graphics::Insets arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, android::graphics::Rect arg3, android::graphics::Rect arg4, android::graphics::Insets arg5);
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::graphics::Rect getBoundingRectBottom() const;
		android::graphics::Rect getBoundingRectLeft() const;
		android::graphics::Rect getBoundingRectRight() const;
		android::graphics::Rect getBoundingRectTop() const;
		JObject getBoundingRects() const;
		jint getSafeInsetBottom() const;
		jint getSafeInsetLeft() const;
		jint getSafeInsetRight() const;
		jint getSafeInsetTop() const;
		android::graphics::Insets getWaterfallInsets() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::view

