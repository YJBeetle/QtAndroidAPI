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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MtpDevice(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MtpDevice(QAndroidJniObject obj);
		
		// Constructors
		MtpDevice(android::hardware::usb::UsbDevice arg0);
		
		// Methods
		void close();
		jboolean deleteObject(jint arg0);
		jint getDeviceId();
		android::mtp::MtpDeviceInfo getDeviceInfo();
		jstring getDeviceName();
		jbyteArray getObject(jint arg0, jint arg1);
		jintArray getObjectHandles(jint arg0, jint arg1, jint arg2);
		android::mtp::MtpObjectInfo getObjectInfo(jint arg0);
		jlong getParent(jint arg0);
		jlong getPartialObject(jint arg0, jlong arg1, jlong arg2, jbyteArray arg3);
		jlong getPartialObject64(jint arg0, jlong arg1, jlong arg2, jbyteArray arg3);
		jlong getStorageId(jint arg0);
		jintArray getStorageIds();
		android::mtp::MtpStorageInfo getStorageInfo(jint arg0);
		jbyteArray getThumbnail(jint arg0);
		jboolean importFile(jint arg0, android::os::ParcelFileDescriptor arg1);
		jboolean importFile(jint arg0, jstring arg1);
		jboolean open(android::hardware::usb::UsbDeviceConnection arg0);
		android::mtp::MtpEvent readEvent(android::os::CancellationSignal arg0);
		jboolean sendObject(jint arg0, jlong arg1, android::os::ParcelFileDescriptor arg2);
		android::mtp::MtpObjectInfo sendObjectInfo(android::mtp::MtpObjectInfo arg0);
		jstring toString();
	};
} // namespace android::mtp

