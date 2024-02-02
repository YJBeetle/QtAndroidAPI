#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}
namespace android::view
{
	class WindowInsets;
}
class JString;

namespace android::view
{
	class WindowMetrics : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WindowMetrics(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WindowMetrics(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WindowMetrics(android::graphics::Rect arg0, android::view::WindowInsets arg1);
		WindowMetrics(android::graphics::Rect arg0, android::view::WindowInsets arg1, jfloat arg2);
		
		// Methods
		android::graphics::Rect getBounds() const;
		jfloat getDensity() const;
		android::view::WindowInsets getWindowInsets() const;
		JString toString() const;
	};
} // namespace android::view

