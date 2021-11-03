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
	class DisplayCutout : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DisplayCutout(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DisplayCutout(QJniObject obj);
		
		// Constructors
		DisplayCutout(android::graphics::Rect arg0, JObject arg1);
		DisplayCutout(android::graphics::Insets arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, android::graphics::Rect arg3, android::graphics::Rect arg4);
		
		// Methods
		jboolean equals(jobject arg0);
		android::graphics::Rect getBoundingRectBottom();
		android::graphics::Rect getBoundingRectLeft();
		android::graphics::Rect getBoundingRectRight();
		android::graphics::Rect getBoundingRectTop();
		JObject getBoundingRects();
		jint getSafeInsetBottom();
		jint getSafeInsetLeft();
		jint getSafeInsetRight();
		jint getSafeInsetTop();
		jint hashCode();
		jstring toString();
	};
} // namespace android::view

