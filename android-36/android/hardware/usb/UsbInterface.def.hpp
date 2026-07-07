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
		UsbInterface(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getAlternateSetting() const;
		android::hardware::usb::UsbEndpoint getEndpoint(jint arg0) const;
		jint getEndpointCount() const;
		jint getId() const;
		jint getInterfaceClass() const;
		jint getInterfaceProtocol() const;
		jint getInterfaceSubclass() const;
		JString getName() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::hardware::usb

