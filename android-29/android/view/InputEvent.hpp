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
		static QAndroidJniObject CREATOR();
		
		InputEvent(QAndroidJniObject obj);
		// Constructors
		InputEvent() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getDevice();
		jint getDeviceId();
		jlong getEventTime();
		jint getSource();
		jboolean isFromSource(jint arg0);
	};
} // namespace android::view

