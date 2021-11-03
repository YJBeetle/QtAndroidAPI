#pragma once

#include "../../JObject.hpp"

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
		
		// Methods
		jboolean equals(jobject arg0);
		JObject getBoundingRects();
		jint getSafeInsetBottom();
		jint getSafeInsetLeft();
		jint getSafeInsetRight();
		jint getSafeInsetTop();
		jint hashCode();
		jstring toString();
	};
} // namespace android::view

