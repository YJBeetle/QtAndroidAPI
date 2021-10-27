#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::hardware::usb
{
	class UsbInterface;
}
namespace android::os
{
	class Parcel;
}

namespace android::hardware::usb
{
	class UsbConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		UsbConfiguration(QAndroidJniObject obj);
		// Constructors
		UsbConfiguration() = default;
		
		// Methods
		jint describeContents();
		jint getId();
		QAndroidJniObject getInterface(jint arg0);
		jint getInterfaceCount();
		jint getMaxPower();
		jstring getName();
		jboolean isRemoteWakeup();
		jboolean isSelfPowered();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::hardware::usb

