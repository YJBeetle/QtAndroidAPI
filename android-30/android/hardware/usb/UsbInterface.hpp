#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::usb
{
	class UsbEndpoint;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::hardware::usb
{
	class UsbInterface : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit UsbInterface(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UsbInterface(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jint getAlternateSetting();
		android::hardware::usb::UsbEndpoint getEndpoint(jint arg0);
		jint getEndpointCount();
		jint getId();
		jint getInterfaceClass();
		jint getInterfaceProtocol();
		jint getInterfaceSubclass();
		JString getName();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::hardware::usb

