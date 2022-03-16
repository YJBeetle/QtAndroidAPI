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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UsbDevice(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UsbDevice(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jint getDeviceId(JString arg0);
		static JString getDeviceName(jint arg0);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::hardware::usb::UsbConfiguration getConfiguration(jint arg0) const;
		jint getConfigurationCount() const;
		jint getDeviceClass() const;
		jint getDeviceId() const;
		JString getDeviceName() const;
		jint getDeviceProtocol() const;
		jint getDeviceSubclass() const;
		android::hardware::usb::UsbInterface getInterface(jint arg0) const;
		jint getInterfaceCount() const;
		JString getManufacturerName() const;
		jint getProductId() const;
		JString getProductName() const;
		JString getSerialNumber() const;
		jint getVendorId() const;
		JString getVersion() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::hardware::usb

