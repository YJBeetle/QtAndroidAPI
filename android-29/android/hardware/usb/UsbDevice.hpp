#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::hardware::usb
{
	class UsbConfiguration;
}
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
	class UsbDevice : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UsbDevice(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UsbDevice(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getDeviceId(jstring arg0);
		static jstring getDeviceName(jint arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getConfiguration(jint arg0);
		jint getConfigurationCount();
		jint getDeviceClass();
		jint getDeviceId();
		jstring getDeviceName();
		jint getDeviceProtocol();
		jint getDeviceSubclass();
		QAndroidJniObject getInterface(jint arg0);
		jint getInterfaceCount();
		jstring getManufacturerName();
		jint getProductId();
		jstring getProductName();
		jstring getSerialNumber();
		jint getVendorId();
		jstring getVersion();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::hardware::usb

