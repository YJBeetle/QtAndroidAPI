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
		
		// QJniObject forward
		template<typename ...Ts> explicit UsbRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UsbRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		UsbRequest();
		
		// Methods
		jboolean cancel() const;
		void close() const;
		JObject getClientData() const;
		android::hardware::usb::UsbEndpoint getEndpoint() const;
		jboolean initialize(android::hardware::usb::UsbDeviceConnection arg0, android::hardware::usb::UsbEndpoint arg1) const;
		jboolean queue(java::nio::ByteBuffer arg0) const;
		jboolean queue(java::nio::ByteBuffer arg0, jint arg1) const;
		void setClientData(JObject arg0) const;
	};
} // namespace android::hardware::usb

