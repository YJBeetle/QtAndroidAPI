#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::hardware::usb
{
	class UsbDevice;
}
namespace android::hardware::usb
{
	class UsbDeviceConnection;
}
namespace android::mtp
{
	class MtpDeviceInfo;
}
namespace android::mtp
{
	class MtpEvent;
}
namespace android::mtp
{
	class MtpObjectInfo;
}
namespace android::mtp
{
	class MtpStorageInfo;
}
namespace android::os
{
	class CancellationSignal;
}
namespace android::os
{
	class ParcelFileDescriptor;
}

namespace android::mtp
{
	class MtpDevice : public __JniBaseClass
	{
	public:
		// Fields
		
		MtpDevice(QAndroidJniObject obj);
		// Constructors
		MtpDevice(android::hardware::usb::UsbDevice arg0);
		MtpDevice() = default;
		
		// Methods
		void close();
		jboolean deleteObject(jint arg0);
		jint getDeviceId();
		QAndroidJniObject getDeviceInfo();
		jstring getDeviceName();
		jbyteArray getObject(jint arg0, jint arg1);
		jintArray getObjectHandles(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject getObjectInfo(jint arg0);
		jlong getParent(jint arg0);
		jlong getPartialObject(jint arg0, jlong arg1, jlong arg2, jbyteArray arg3);
		jlong getPartialObject64(jint arg0, jlong arg1, jlong arg2, jbyteArray arg3);
		jlong getStorageId(jint arg0);
		jintArray getStorageIds();
		QAndroidJniObject getStorageInfo(jint arg0);
		jbyteArray getThumbnail(jint arg0);
		jboolean importFile(jint arg0, android::os::ParcelFileDescriptor arg1);
		jboolean importFile(jint arg0, jstring arg1);
		jboolean open(android::hardware::usb::UsbDeviceConnection arg0);
		QAndroidJniObject readEvent(android::os::CancellationSignal arg0);
		jboolean sendObject(jint arg0, jlong arg1, android::os::ParcelFileDescriptor arg2);
		QAndroidJniObject sendObjectInfo(android::mtp::MtpObjectInfo arg0);
		jstring toString();
	};
} // namespace android::mtp

