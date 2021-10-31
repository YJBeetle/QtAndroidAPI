#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::hardware::usb
{
	class UsbEndpoint : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit UsbEndpoint(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::hardware::usb

