#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::hardware::usb
{
	class UsbEndpoint;
}
namespace android::os
{
	class Parcel;
}

namespace android::hardware::usb
{
	class UsbInterface : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		UsbInterface(QAndroidJniObject obj);
		// Constructors
		UsbInterface() = default;
		
		// Methods
		jint describeContents();
		jint getAlternateSetting();
		QAndroidJniObject getEndpoint(jint arg0);
		jint getEndpointCount();
		jint getId();
		jint getInterfaceClass();
		jint getInterfaceProtocol();
		jint getInterfaceSubclass();
		jstring getName();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::hardware::usb

