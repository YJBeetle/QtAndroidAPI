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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SearchEvent(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SearchEvent(QAndroidJniObject obj);
		
		// Constructors
		SearchEvent(android::view::InputDevice arg0);
		
		// Methods
		QAndroidJniObject getInputDevice();
	};
} // namespace android::view

