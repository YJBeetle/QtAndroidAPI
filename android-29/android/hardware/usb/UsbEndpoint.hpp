#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::hardware::usb
{
	class UsbEndpoint : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		UsbEndpoint(QAndroidJniObject obj);
		// Constructors
		UsbEndpoint() = default;
		
		// Methods
		jint describeContents();
		jint getAddress();
		jint getAttributes();
		jint getDirection();
		jint getEndpointNumber();
		jint getInterval();
		jint getMaxPacketSize();
		jint getType();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::hardware::usb

