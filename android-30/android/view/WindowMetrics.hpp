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
		
		// QJniObject forward
		template<typename ...Ts> explicit WindowMetrics(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WindowMetrics(QJniObject obj);
		
		// Constructors
		WindowMetrics(android::graphics::Rect arg0, android::view::WindowInsets arg1);
		
		// Methods
		android::graphics::Rect getBounds();
		android::view::WindowInsets getWindowInsets();
	};
} // namespace android::view

