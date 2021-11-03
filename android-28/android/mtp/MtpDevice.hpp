#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JIntArray;
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
class JString;

namespace android::mtp
{
	class MtpDevice : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MtpDevice(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MtpDevice(QJniObject obj);
		
		// Constructors
		MtpDevice(android::hardware::usb::UsbDevice arg0);
		
		// Methods
		void close();
		jboolean deleteObject(jint arg0);
		jint getDeviceId();
		android::mtp::MtpDeviceInfo getDeviceInfo();
		JString getDeviceName();
		JByteArray getObject(jint arg0, jint arg1);
		JIntArray getObjectHandles(jint arg0, jint arg1, jint arg2);
		android::mtp::MtpObjectInfo getObjectInfo(jint arg0);
		jlong getParent(jint arg0);
		jlong getPartialObject(jint arg0, jlong arg1, jlong arg2, JByteArray arg3);
		jlong getPartialObject64(jint arg0, jlong arg1, jlong arg2, JByteArray arg3);
		jlong getStorageId(jint arg0);
		JIntArray getStorageIds();
		android::mtp::MtpStorageInfo getStorageInfo(jint arg0);
		JByteArray getThumbnail(jint arg0);
		jboolean importFile(jint arg0, android::os::ParcelFileDescriptor arg1);
		jboolean importFile(jint arg0, JString arg1);
		jboolean open(android::hardware::usb::UsbDeviceConnection arg0);
		android::mtp::MtpEvent readEvent(android::os::CancellationSignal arg0);
		jboolean sendObject(jint arg0, jlong arg1, android::os::ParcelFileDescriptor arg2);
		android::mtp::MtpObjectInfo sendObjectInfo(android::mtp::MtpObjectInfo arg0);
		JString toString();
	};
} // namespace android::mtp

