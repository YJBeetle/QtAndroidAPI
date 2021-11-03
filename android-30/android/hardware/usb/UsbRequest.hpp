#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::usb
{
	class UsbDeviceConnection;
}
namespace android::hardware::usb
{
	class UsbEndpoint;
}
class JObject;
namespace java::nio
{
	class ByteBuffer;
}

namespace android::hardware::usb
{
	class UsbRequest : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UsbRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UsbRequest(QAndroidJniObject obj);
		
		// Constructors
		UsbRequest();
		
		// Methods
		jboolean cancel();
		void close();
		JObject getClientData();
		android::hardware::usb::UsbEndpoint getEndpoint();
		jboolean initialize(android::hardware::usb::UsbDeviceConnection arg0, android::hardware::usb::UsbEndpoint arg1);
		jboolean queue(java::nio::ByteBuffer arg0);
		jboolean queue(java::nio::ByteBuffer arg0, jint arg1);
		void setClientData(JObject arg0);
	};
} // namespace android::hardware::usb

