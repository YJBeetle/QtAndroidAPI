#pragma once

#include "../../JObject.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit DisplayCutout(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DisplayCutout(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DisplayCutout(android::graphics::Rect arg0, JObject arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getBoundingRects() const;
		jint getSafeInsetBottom() const;
		jint getSafeInsetLeft() const;
		jint getSafeInsetRight() const;
		jint getSafeInsetTop() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::view

