#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::hardware::usb
{
	class UsbEndpoint : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit UsbEndpoint(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UsbEndpoint(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jint getAddress();
		jint getAttributes();
		jint getDirection();
		jint getEndpointNumber();
		jint getInterval();
		jint getMaxPacketSize();
		jint getType();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::hardware::usb

