#pragma once

#include "../../../JObject.hpp"

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
class JObject;
class JString;

namespace android::hardware::usb
{
	class UsbDevice : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit UsbDevice(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UsbDevice(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getDeviceId(JString arg0);
		static JString getDeviceName(jint arg0);
		jint describeContents();
		jboolean equals(JObject arg0);
		android::hardware::usb::UsbConfiguration getConfiguration(jint arg0);
		jint getConfigurationCount();
		jint getDeviceClass();
		jint getDeviceId();
		JString getDeviceName();
		jint getDeviceProtocol();
		jint getDeviceSubclass();
		android::hardware::usb::UsbInterface getInterface(jint arg0);
		jint getInterfaceCount();
		JString getManufacturerName();
		jint getProductId();
		JString getProductName();
		JString getSerialNumber();
		jint getVendorId();
		JString getVersion();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::hardware::usb

