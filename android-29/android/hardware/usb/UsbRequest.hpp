#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::hardware::usb
{
	class UsbDeviceConnection;
}
namespace android::hardware::usb
{
	class UsbEndpoint;
}
namespace java::nio
{
	class ByteBuffer;
}

namespace android::hardware::usb
{
	class UsbRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		UsbRequest(QAndroidJniObject obj);
		// Constructors
		UsbRequest();
		
		// Methods
		jboolean cancel();
		void close();
		jobject getClientData();
		QAndroidJniObject getEndpoint();
		jboolean initialize(android::hardware::usb::UsbDeviceConnection arg0, android::hardware::usb::UsbEndpoint arg1);
		jboolean queue(java::nio::ByteBuffer arg0);
		jboolean queue(java::nio::ByteBuffer arg0, jint arg1);
		void setClientData(jobject arg0);
	};
} // namespace android::hardware::usb

