#pragma once

#include "../../JByteArray.hpp"
#include "../../JIntArray.hpp"
#include "../hardware/usb/UsbDevice.def.hpp"
#include "../hardware/usb/UsbDeviceConnection.def.hpp"
#include "./MtpDeviceInfo.def.hpp"
#include "./MtpEvent.def.hpp"
#include "./MtpObjectInfo.def.hpp"
#include "./MtpStorageInfo.def.hpp"
#include "../os/CancellationSignal.def.hpp"
#include "../os/ParcelFileDescriptor.def.hpp"
#include "../../JString.hpp"
#include "./MtpDevice.def.hpp"

namespace android::mtp
{
	// Fields
	
	// Constructors
	inline MtpDevice::MtpDevice(android::hardware::usb::UsbDevice arg0)
		: JObject(
			"android.mtp.MtpDevice",
			"(Landroid/hardware/usb/UsbDevice;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void MtpDevice::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jboolean MtpDevice::deleteObject(jint arg0) const
	{
		return callMethod<jboolean>(
			"deleteObject",
			"(I)Z",
			arg0
		);
	}
	inline jint MtpDevice::getDeviceId() const
	{
		return callMethod<jint>(
			"getDeviceId",
			"()I"
		);
	}
	inline android::mtp::MtpDeviceInfo MtpDevice::getDeviceInfo() const
	{
		return callObjectMethod(
			"getDeviceInfo",
			"()Landroid/mtp/MtpDeviceInfo;"
		);
	}
	inline JString MtpDevice::getDeviceName() const
	{
		return callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray MtpDevice::getObject(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getObject",
			"(II)[B",
			arg0,
			arg1
		);
	}
	inline JIntArray MtpDevice::getObjectHandles(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"getObjectHandles",
			"(III)[I",
			arg0,
			arg1,
			arg2
		);
	}
	inline android::mtp::MtpObjectInfo MtpDevice::getObjectInfo(jint arg0) const
	{
		return callObjectMethod(
			"getObjectInfo",
			"(I)Landroid/mtp/MtpObjectInfo;",
			arg0
		);
	}
	inline jlong MtpDevice::getParent(jint arg0) const
	{
		return callMethod<jlong>(
			"getParent",
			"(I)J",
			arg0
		);
	}
	inline jlong MtpDevice::getPartialObject(jint arg0, jlong arg1, jlong arg2, JByteArray arg3) const
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
	inline jlong MtpDevice::getPartialObject64(jint arg0, jlong arg1, jlong arg2, JByteArray arg3) const
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
	inline jlong MtpDevice::getStorageId(jint arg0) const
	{
		return callMethod<jlong>(
			"getStorageId",
			"(I)J",
			arg0
		);
	}
	inline JIntArray MtpDevice::getStorageIds() const
	{
		return callObjectMethod(
			"getStorageIds",
			"()[I"
		);
	}
	inline android::mtp::MtpStorageInfo MtpDevice::getStorageInfo(jint arg0) const
	{
		return callObjectMethod(
			"getStorageInfo",
			"(I)Landroid/mtp/MtpStorageInfo;",
			arg0
		);
	}
	inline JByteArray MtpDevice::getThumbnail(jint arg0) const
	{
		return callObjectMethod(
			"getThumbnail",
			"(I)[B",
			arg0
		);
	}
	inline jboolean MtpDevice::importFile(jint arg0, android::os::ParcelFileDescriptor arg1) const
	{
		return callMethod<jboolean>(
			"importFile",
			"(ILandroid/os/ParcelFileDescriptor;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jboolean MtpDevice::importFile(jint arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"importFile",
			"(ILjava/lang/String;)Z",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline jboolean MtpDevice::open(android::hardware::usb::UsbDeviceConnection arg0) const
	{
		return callMethod<jboolean>(
			"open",
			"(Landroid/hardware/usb/UsbDeviceConnection;)Z",
			arg0.object()
		);
	}
	inline android::mtp::MtpEvent MtpDevice::readEvent(android::os::CancellationSignal arg0) const
	{
		return callObjectMethod(
			"readEvent",
			"(Landroid/os/CancellationSignal;)Landroid/mtp/MtpEvent;",
			arg0.object()
		);
	}
	inline jboolean MtpDevice::sendObject(jint arg0, jlong arg1, android::os::ParcelFileDescriptor arg2) const
	{
		return callMethod<jboolean>(
			"sendObject",
			"(IJLandroid/os/ParcelFileDescriptor;)Z",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline android::mtp::MtpObjectInfo MtpDevice::sendObjectInfo(android::mtp::MtpObjectInfo arg0) const
	{
		return callObjectMethod(
			"sendObjectInfo",
			"(Landroid/mtp/MtpObjectInfo;)Landroid/mtp/MtpObjectInfo;",
			arg0.object()
		);
	}
	inline JString MtpDevice::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::mtp

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::mtp;
#endif
