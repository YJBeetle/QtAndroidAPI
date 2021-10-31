#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class InputDevice;
}

namespace android::view
{
	class InputEvent : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit InputEvent(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InputEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::view::InputDevice getDevice();
		jint getDeviceId();
		jlong getEventTime();
		jint getSource();
		jboolean isFromSource(jint arg0);
	};
} // namespace android::view

