#include "../../JArray.hpp"
#include "./Handler.hpp"
#include "./Parcel.hpp"
#include "../../java/io/File.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../JString.hpp"
#include "../../java/net/DatagramSocket.hpp"
#include "../../java/net/Socket.hpp"
#include "./ParcelFileDescriptor.hpp"

namespace android::os
{
	// Fields
	JObject ParcelFileDescriptor::CREATOR()
	{
		return getStaticObjectField(
			"android.os.ParcelFileDescriptor",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ParcelFileDescriptor::MODE_APPEND()
	{
		return getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_APPEND"
		);
	}
	jint ParcelFileDescriptor::MODE_CREATE()
	{
		return getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_CREATE"
		);
	}
	jint ParcelFileDescriptor::MODE_READ_ONLY()
	{
		return getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_READ_ONLY"
		);
	}
	jint ParcelFileDescriptor::MODE_READ_WRITE()
	{
		return getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_READ_WRITE"
		);
	}
	jint ParcelFileDescriptor::MODE_TRUNCATE()
	{
		return getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_TRUNCATE"
		);
	}
	jint ParcelFileDescriptor::MODE_WORLD_READABLE()
	{
		return getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_WORLD_READABLE"
		);
	}
	jint ParcelFileDescriptor::MODE_WORLD_WRITEABLE()
	{
		return getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_WORLD_WRITEABLE"
		);
	}
	jint ParcelFileDescriptor::MODE_WRITE_ONLY()
	{
		return getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_WRITE_ONLY"
		);
	}
	
	// QAndroidJniObject forward
	ParcelFileDescriptor::ParcelFileDescriptor(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ParcelFileDescriptor::ParcelFileDescriptor(android::os::ParcelFileDescriptor &arg0)
		: JObject(
			"android.os.ParcelFileDescriptor",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.object()
		) {}
	
	// Methods
	android::os::ParcelFileDescriptor ParcelFileDescriptor::adoptFd(jint arg0)
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"adoptFd",
			"(I)Landroid/os/ParcelFileDescriptor;",
			arg0
		);
	}
	JArray ParcelFileDescriptor::createPipe()
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"createPipe",
			"()[Landroid/os/ParcelFileDescriptor;"
		);
	}
	JArray ParcelFileDescriptor::createReliablePipe()
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"createReliablePipe",
			"()[Landroid/os/ParcelFileDescriptor;"
		);
	}
	JArray ParcelFileDescriptor::createReliableSocketPair()
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"createReliableSocketPair",
			"()[Landroid/os/ParcelFileDescriptor;"
		);
	}
	JArray ParcelFileDescriptor::createSocketPair()
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"createSocketPair",
			"()[Landroid/os/ParcelFileDescriptor;"
		);
	}
	android::os::ParcelFileDescriptor ParcelFileDescriptor::dup(java::io::FileDescriptor arg0)
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"dup",
			"(Ljava/io/FileDescriptor;)Landroid/os/ParcelFileDescriptor;",
			arg0.object()
		);
	}
	android::os::ParcelFileDescriptor ParcelFileDescriptor::fromDatagramSocket(java::net::DatagramSocket arg0)
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"fromDatagramSocket",
			"(Ljava/net/DatagramSocket;)Landroid/os/ParcelFileDescriptor;",
			arg0.object()
		);
	}
	android::os::ParcelFileDescriptor ParcelFileDescriptor::fromFd(jint arg0)
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"fromFd",
			"(I)Landroid/os/ParcelFileDescriptor;",
			arg0
		);
	}
	android::os::ParcelFileDescriptor ParcelFileDescriptor::fromSocket(java::net::Socket arg0)
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"fromSocket",
			"(Ljava/net/Socket;)Landroid/os/ParcelFileDescriptor;",
			arg0.object()
		);
	}
	android::os::ParcelFileDescriptor ParcelFileDescriptor::open(java::io::File arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"open",
			"(Ljava/io/File;I)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1
		);
	}
	android::os::ParcelFileDescriptor ParcelFileDescriptor::open(java::io::File arg0, jint arg1, android::os::Handler arg2, JObject arg3)
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
	jint ParcelFileDescriptor::parseMode(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.os.ParcelFileDescriptor",
			"parseMode",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	android::os::ParcelFileDescriptor ParcelFileDescriptor::wrap(android::os::ParcelFileDescriptor arg0, android::os::Handler arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"wrap",
			"(Landroid/os/ParcelFileDescriptor;Landroid/os/Handler;Landroid/os/ParcelFileDescriptor$OnCloseListener;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jboolean ParcelFileDescriptor::canDetectErrors() const
	{
		return callMethod<jboolean>(
			"canDetectErrors",
			"()Z"
		);
	}
	void ParcelFileDescriptor::checkError() const
	{
		callMethod<void>(
			"checkError",
			"()V"
		);
	}
	void ParcelFileDescriptor::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void ParcelFileDescriptor::closeWithError(JString arg0) const
	{
		callMethod<void>(
			"closeWithError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jint ParcelFileDescriptor::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint ParcelFileDescriptor::detachFd() const
	{
		return callMethod<jint>(
			"detachFd",
			"()I"
		);
	}
	android::os::ParcelFileDescriptor ParcelFileDescriptor::dup() const
	{
		return callObjectMethod(
			"dup",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	jint ParcelFileDescriptor::getFd() const
	{
		return callMethod<jint>(
			"getFd",
			"()I"
		);
	}
	java::io::FileDescriptor ParcelFileDescriptor::getFileDescriptor() const
	{
		return callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;"
		);
	}
	jlong ParcelFileDescriptor::getStatSize() const
	{
		return callMethod<jlong>(
			"getStatSize",
			"()J"
		);
	}
	JString ParcelFileDescriptor::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ParcelFileDescriptor::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

