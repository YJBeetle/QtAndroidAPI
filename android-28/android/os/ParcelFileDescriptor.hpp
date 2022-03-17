#pragma once

#include "../../JArray.hpp"
#include "./Handler.def.hpp"
#include "./Parcel.def.hpp"
#include "../../java/io/File.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../JString.hpp"
#include "../../java/net/DatagramSocket.def.hpp"
#include "../../java/net/Socket.def.hpp"
#include "./ParcelFileDescriptor.def.hpp"

namespace android::os
{
	// Fields
	inline JObject ParcelFileDescriptor::CREATOR()
	{
		return getStaticObjectField(
			"android.os.ParcelFileDescriptor",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ParcelFileDescriptor::MODE_APPEND()
	{
		return getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_APPEND"
		);
	}
	inline jint ParcelFileDescriptor::MODE_CREATE()
	{
		return getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_CREATE"
		);
	}
	inline jint ParcelFileDescriptor::MODE_READ_ONLY()
	{
		return getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_READ_ONLY"
		);
	}
	inline jint ParcelFileDescriptor::MODE_READ_WRITE()
	{
		return getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_READ_WRITE"
		);
	}
	inline jint ParcelFileDescriptor::MODE_TRUNCATE()
	{
		return getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_TRUNCATE"
		);
	}
	inline jint ParcelFileDescriptor::MODE_WORLD_READABLE()
	{
		return getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_WORLD_READABLE"
		);
	}
	inline jint ParcelFileDescriptor::MODE_WORLD_WRITEABLE()
	{
		return getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_WORLD_WRITEABLE"
		);
	}
	inline jint ParcelFileDescriptor::MODE_WRITE_ONLY()
	{
		return getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_WRITE_ONLY"
		);
	}
	
	// Constructors
	inline ParcelFileDescriptor::ParcelFileDescriptor(android::os::ParcelFileDescriptor &arg0)
		: JObject(
			"android.os.ParcelFileDescriptor",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::os::ParcelFileDescriptor ParcelFileDescriptor::adoptFd(jint arg0)
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"adoptFd",
			"(I)Landroid/os/ParcelFileDescriptor;",
			arg0
		);
	}
	inline JArray ParcelFileDescriptor::createPipe()
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"createPipe",
			"()[Landroid/os/ParcelFileDescriptor;"
		);
	}
	inline JArray ParcelFileDescriptor::createReliablePipe()
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"createReliablePipe",
			"()[Landroid/os/ParcelFileDescriptor;"
		);
	}
	inline JArray ParcelFileDescriptor::createReliableSocketPair()
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"createReliableSocketPair",
			"()[Landroid/os/ParcelFileDescriptor;"
		);
	}
	inline JArray ParcelFileDescriptor::createSocketPair()
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"createSocketPair",
			"()[Landroid/os/ParcelFileDescriptor;"
		);
	}
	inline android::os::ParcelFileDescriptor ParcelFileDescriptor::dup(java::io::FileDescriptor arg0)
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"dup",
			"(Ljava/io/FileDescriptor;)Landroid/os/ParcelFileDescriptor;",
			arg0.object()
		);
	}
	inline android::os::ParcelFileDescriptor ParcelFileDescriptor::fromDatagramSocket(java::net::DatagramSocket arg0)
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"fromDatagramSocket",
			"(Ljava/net/DatagramSocket;)Landroid/os/ParcelFileDescriptor;",
			arg0.object()
		);
	}
	inline android::os::ParcelFileDescriptor ParcelFileDescriptor::fromFd(jint arg0)
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"fromFd",
			"(I)Landroid/os/ParcelFileDescriptor;",
			arg0
		);
	}
	inline android::os::ParcelFileDescriptor ParcelFileDescriptor::fromSocket(java::net::Socket arg0)
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"fromSocket",
			"(Ljava/net/Socket;)Landroid/os/ParcelFileDescriptor;",
			arg0.object()
		);
	}
	inline android::os::ParcelFileDescriptor ParcelFileDescriptor::open(java::io::File arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"open",
			"(Ljava/io/File;I)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1
		);
	}
	inline android::os::ParcelFileDescriptor ParcelFileDescriptor::open(java::io::File arg0, jint arg1, android::os::Handler arg2, JObject arg3)
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"open",
			"(Ljava/io/File;ILandroid/os/Handler;Landroid/os/ParcelFileDescriptor$OnCloseListener;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	inline jint ParcelFileDescriptor::parseMode(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.os.ParcelFileDescriptor",
			"parseMode",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jboolean ParcelFileDescriptor::canDetectErrors() const
	{
		return callMethod<jboolean>(
			"canDetectErrors",
			"()Z"
		);
	}
	inline void ParcelFileDescriptor::checkError() const
	{
		callMethod<void>(
			"checkError",
			"()V"
		);
	}
	inline void ParcelFileDescriptor::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void ParcelFileDescriptor::closeWithError(JString arg0) const
	{
		callMethod<void>(
			"closeWithError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jint ParcelFileDescriptor::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint ParcelFileDescriptor::detachFd() const
	{
		return callMethod<jint>(
			"detachFd",
			"()I"
		);
	}
	inline android::os::ParcelFileDescriptor ParcelFileDescriptor::dup() const
	{
		return callObjectMethod(
			"dup",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	inline jint ParcelFileDescriptor::getFd() const
	{
		return callMethod<jint>(
			"getFd",
			"()I"
		);
	}
	inline java::io::FileDescriptor ParcelFileDescriptor::getFileDescriptor() const
	{
		return callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;"
		);
	}
	inline jlong ParcelFileDescriptor::getStatSize() const
	{
		return callMethod<jlong>(
			"getStatSize",
			"()J"
		);
	}
	inline JString ParcelFileDescriptor::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ParcelFileDescriptor::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
