#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::hardware::usb
{
	class UsbAccessory : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		UsbAccessory(QAndroidJniObject obj);
		// Constructors
		UsbAccessory() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getDescription();
		jstring getManufacturer();
		jstring getModel();
		jstring getSerial();
		jstring getUri();
		jstring getVersion();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::hardware::usb

