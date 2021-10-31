#pragma once

#include "../../__JniBaseClass.hpp"

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
	class WindowMetrics : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WindowMetrics(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WindowMetrics(QAndroidJniObject obj);
		
		// Constructors
		WindowMetrics(android::graphics::Rect arg0, android::view::WindowInsets arg1);
		
		// Methods
		android::graphics::Rect getBounds();
		android::view::WindowInsets getWindowInsets();
	};
} // namespace android::view

