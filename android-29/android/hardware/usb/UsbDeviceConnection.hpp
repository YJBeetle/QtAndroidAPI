#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::hardware::usb
{
	class UsbConfiguration;
}
namespace android::hardware::usb
{
	class UsbDevice;
}
namespace android::hardware::usb
{
	class UsbEndpoint;
}
namespace android::hardware::usb
{
	class UsbInterface;
}
namespace android::hardware::usb
{
	class UsbRequest;
}

namespace android::hardware::usb
{
	class UsbDeviceConnection : public __JniBaseClass
	{
	public:
		// Fields
		
		UsbDeviceConnection(QAndroidJniObject obj);
		// Constructors
		UsbDeviceConnection() = default;
		
		// Methods
		jint bulkTransfer(android::hardware::usb::UsbEndpoint arg0, jbyteArray arg1, jint arg2, jint arg3);
		jint bulkTransfer(android::hardware::usb::UsbEndpoint arg0, jbyteArray arg1, jint arg2, jint arg3, jint arg4);
		jboolean claimInterface(android::hardware::usb::UsbInterface arg0, jboolean arg1);
		void close();
		jint controlTransfer(jint arg0, jint arg1, jint arg2, jint arg3, jbyteArray arg4, jint arg5, jint arg6);
		jint controlTransfer(jint arg0, jint arg1, jint arg2, jint arg3, jbyteArray arg4, jint arg5, jint arg6, jint arg7);
		jint getFileDescriptor();
		jbyteArray getRawDescriptors();
		jstring getSerial();
		jboolean releaseInterface(android::hardware::usb::UsbInterface arg0);
		QAndroidJniObject requestWait();
		QAndroidJniObject requestWait(jlong arg0);
		jboolean setConfiguration(android::hardware::usb::UsbConfiguration arg0);
		jboolean setInterface(android::hardware::usb::UsbInterface arg0);
	};
} // namespace android::hardware::usb

