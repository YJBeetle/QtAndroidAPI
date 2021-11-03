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
		jint describeContents() const;
		jint getAddress() const;
		jint getAttributes() const;
		jint getDirection() const;
		jint getEndpointNumber() const;
		jint getInterval() const;
		jint getMaxPacketSize() const;
		jint getType() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::hardware::usb

