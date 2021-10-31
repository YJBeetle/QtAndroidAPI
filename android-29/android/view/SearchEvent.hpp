#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class InputDevice;
}

namespace android::view
{
	class SearchEvent : public __JniBaseClass
	{
	public:
		// Fields
		
		SearchEvent(QAndroidJniObject obj);
		// Constructors
		SearchEvent(android::view::InputDevice arg0);
		SearchEvent() = default;
		
		// Methods
		QAndroidJniObject getInputDevice();
	};
} // namespace android::view

