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

namespace android::view
{
	class WindowMetrics : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WindowMetrics(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WindowMetrics(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		WindowMetrics(android::graphics::Rect arg0, android::view::WindowInsets arg1);
		
		// Methods
		android::graphics::Rect getBounds() const;
		android::view::WindowInsets getWindowInsets() const;
	};
} // namespace android::view

