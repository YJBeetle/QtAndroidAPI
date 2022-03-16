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
		MtpDevice(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MtpDevice(android::hardware::usb::UsbDevice arg0);
		
		// Methods
		void close() const;
		jboolean deleteObject(jint arg0) const;
		jint getDeviceId() const;
		android::mtp::MtpDeviceInfo getDeviceInfo() const;
		JString getDeviceName() const;
		JByteArray getObject(jint arg0, jint arg1) const;
		JIntArray getObjectHandles(jint arg0, jint arg1, jint arg2) const;
		android::mtp::MtpObjectInfo getObjectInfo(jint arg0) const;
		jlong getParent(jint arg0) const;
		jlong getPartialObject(jint arg0, jlong arg1, jlong arg2, JByteArray arg3) const;
		jlong getPartialObject64(jint arg0, jlong arg1, jlong arg2, JByteArray arg3) const;
		jlong getStorageId(jint arg0) const;
		JIntArray getStorageIds() const;
		android::mtp::MtpStorageInfo getStorageInfo(jint arg0) const;
		JByteArray getThumbnail(jint arg0) const;
		jboolean importFile(jint arg0, android::os::ParcelFileDescriptor arg1) const;
		jboolean importFile(jint arg0, JString arg1) const;
		jboolean open(android::hardware::usb::UsbDeviceConnection arg0) const;
		android::mtp::MtpEvent readEvent(android::os::CancellationSignal arg0) const;
		jboolean sendObject(jint arg0, jlong arg1, android::os::ParcelFileDescriptor arg2) const;
		android::mtp::MtpObjectInfo sendObjectInfo(android::mtp::MtpObjectInfo arg0) const;
		JString toString() const;
	};
} // namespace android::mtp

