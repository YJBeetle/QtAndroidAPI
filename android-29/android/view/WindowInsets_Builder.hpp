#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Insets;
}
namespace android::view
{
	class DisplayCutout;
}
namespace android::view
{
	class WindowInsets;
}

namespace android::view
{
	class WindowInsets_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		WindowInsets_Builder(QAndroidJniObject obj);
		// Constructors
		WindowInsets_Builder();
		WindowInsets_Builder(android::view::WindowInsets &arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setDisplayCutout(android::view::DisplayCutout arg0);
		QAndroidJniObject setMandatorySystemGestureInsets(android::graphics::Insets arg0);
		QAndroidJniObject setStableInsets(android::graphics::Insets arg0);
		QAndroidJniObject setSystemGestureInsets(android::graphics::Insets arg0);
		QAndroidJniObject setSystemWindowInsets(android::graphics::Insets arg0);
		QAndroidJniObject setTappableElementInsets(android::graphics::Insets arg0);
	};
} // namespace android::view

