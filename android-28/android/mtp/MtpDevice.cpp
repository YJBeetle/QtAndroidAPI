#include "../../JByteArray.hpp"
#include "../../JIntArray.hpp"
#include "../hardware/usb/UsbDevice.hpp"
#include "../hardware/usb/UsbDeviceConnection.hpp"
#include "./MtpDeviceInfo.hpp"
#include "./MtpEvent.hpp"
#include "./MtpObjectInfo.hpp"
#include "./MtpStorageInfo.hpp"
#include "../os/CancellationSignal.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "../../JString.hpp"
#include "./MtpDevice.hpp"

namespace android::mtp
{
	// Fields
	
	// QAndroidJniObject forward
	MtpDevice::MtpDevice(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MtpDevice::MtpDevice(android::hardware::usb::UsbDevice arg0)
		: JObject(
			"android.mtp.MtpDevice",
			"(Landroid/hardware/usb/UsbDevice;)V",
			arg0.object()
		) {}
	
	// Methods
	void MtpDevice::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean MtpDevice::deleteObject(jint arg0)
	{
		return callMethod<jboolean>(
			"deleteObject",
			"(I)Z",
			arg0
		);
	}
	jint MtpDevice::getDeviceId()
	{
		return callMethod<jint>(
			"getDeviceId",
			"()I"
		);
	}
	android::mtp::MtpDeviceInfo MtpDevice::getDeviceInfo()
	{
		return callObjectMethod(
			"getDeviceInfo",
			"()Landroid/mtp/MtpDeviceInfo;"
		);
	}
	JString MtpDevice::getDeviceName()
	{
		return callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		);
	}
	JByteArray MtpDevice::getObject(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getObject",
			"(II)[B",
			arg0,
			arg1
		);
	}
	JIntArray MtpDevice::getObjectHandles(jint arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"getObjectHandles",
			"(III)[I",
			arg0,
			arg1,
			arg2
		);
	}
	android::mtp::MtpObjectInfo MtpDevice::getObjectInfo(jint arg0)
	{
		return callObjectMethod(
			"getObjectInfo",
			"(I)Landroid/mtp/MtpObjectInfo;",
			arg0
		);
	}
	jlong MtpDevice::getParent(jint arg0)
	{
		return callMethod<jlong>(
			"getParent",
			"(I)J",
			arg0
		);
	}
	jlong MtpDevice::getPartialObject(jint arg0, jlong arg1, jlong arg2, JByteArray arg3)
	{
		return callMethod<jlong>(
			"getPartialObject",
			"(IJJ[B)J",
			arg0,
			arg1,
			arg2,
			arg3.object<jbyteArray>()
		);
	}
	jlong MtpDevice::getPartialObject64(jint arg0, jlong arg1, jlong arg2, JByteArray arg3)
	{
		return callMethod<jlong>(
			"getPartialObject64",
			"(IJJ[B)J",
			arg0,
			arg1,
			arg2,
			arg3.object<jbyteArray>()
		);
	}
	jlong MtpDevice::getStorageId(jint arg0)
	{
		return callMethod<jlong>(
			"getStorageId",
			"(I)J",
			arg0
		);
	}
	JIntArray MtpDevice::getStorageIds()
	{
		return callObjectMethod(
			"getStorageIds",
			"()[I"
		);
	}
	android::mtp::MtpStorageInfo MtpDevice::getStorageInfo(jint arg0)
	{
		return callObjectMethod(
			"getStorageInfo",
			"(I)Landroid/mtp/MtpStorageInfo;",
			arg0
		);
	}
	JByteArray MtpDevice::getThumbnail(jint arg0)
	{
		return callObjectMethod(
			"getThumbnail",
			"(I)[B",
			arg0
		);
	}
	jboolean MtpDevice::importFile(jint arg0, android::os::ParcelFileDescriptor arg1)
	{
		return callMethod<jboolean>(
			"importFile",
			"(ILandroid/os/ParcelFileDescriptor;)Z",
			arg0,
			arg1.object()
		);
	}
	jboolean MtpDevice::importFile(jint arg0, JString arg1)
	{
		return callMethod<jboolean>(
			"importFile",
			"(ILjava/lang/String;)Z",
			arg0,
			arg1.object<jstring>()
		);
	}
	jboolean MtpDevice::open(android::hardware::usb::UsbDeviceConnection arg0)
	{
		return callMethod<jboolean>(
			"open",
			"(Landroid/hardware/usb/UsbDeviceConnection;)Z",
			arg0.object()
		);
	}
	android::mtp::MtpEvent MtpDevice::readEvent(android::os::CancellationSignal arg0)
	{
		return callObjectMethod(
			"readEvent",
			"(Landroid/os/CancellationSignal;)Landroid/mtp/MtpEvent;",
			arg0.object()
		);
	}
	jboolean MtpDevice::sendObject(jint arg0, jlong arg1, android::os::ParcelFileDescriptor arg2)
	{
		return callMethod<jboolean>(
			"sendObject",
			"(IJLandroid/os/ParcelFileDescriptor;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::mtp::MtpObjectInfo MtpDevice::sendObjectInfo(android::mtp::MtpObjectInfo arg0)
	{
		return callObjectMethod(
			"sendObjectInfo",
			"(Landroid/mtp/MtpObjectInfo;)Landroid/mtp/MtpObjectInfo;",
			arg0.object()
		);
	}
	JString MtpDevice::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::mtp

