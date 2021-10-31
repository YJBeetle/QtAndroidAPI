#include "./Handler.hpp"
#include "./Parcel.hpp"
#include "../../java/io/File.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/net/DatagramSocket.hpp"
#include "../../java/net/Socket.hpp"
#include "./ParcelFileDescriptor.hpp"

namespace android::os
{
	// Fields
	__JniBaseClass ParcelFileDescriptor::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.ParcelFileDescriptor",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ParcelFileDescriptor::MODE_APPEND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_APPEND"
		);
	}
	jint ParcelFileDescriptor::MODE_CREATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_CREATE"
		);
	}
	jint ParcelFileDescriptor::MODE_READ_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_READ_ONLY"
		);
	}
	jint ParcelFileDescriptor::MODE_READ_WRITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_READ_WRITE"
		);
	}
	jint ParcelFileDescriptor::MODE_TRUNCATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_TRUNCATE"
		);
	}
	jint ParcelFileDescriptor::MODE_WORLD_READABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_WORLD_READABLE"
		);
	}
	jint ParcelFileDescriptor::MODE_WORLD_WRITEABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_WORLD_WRITEABLE"
		);
	}
	jint ParcelFileDescriptor::MODE_WRITE_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_WRITE_ONLY"
		);
	}
	
	// QAndroidJniObject forward
	ParcelFileDescriptor::ParcelFileDescriptor(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ParcelFileDescriptor::ParcelFileDescriptor(android::os::ParcelFileDescriptor &arg0)
		: __JniBaseClass(
			"android.os.ParcelFileDescriptor",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.object()
		) {}
	
	// Methods
	android::os::ParcelFileDescriptor ParcelFileDescriptor::adoptFd(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"adoptFd",
			"(I)Landroid/os/ParcelFileDescriptor;",
			arg0
		);
	}
	jarray ParcelFileDescriptor::createPipe()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"createPipe",
			"()[Landroid/os/ParcelFileDescriptor;"
		).object<jarray>();
	}
	jarray ParcelFileDescriptor::createReliablePipe()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"createReliablePipe",
			"()[Landroid/os/ParcelFileDescriptor;"
		).object<jarray>();
	}
	jarray ParcelFileDescriptor::createReliableSocketPair()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"createReliableSocketPair",
			"()[Landroid/os/ParcelFileDescriptor;"
		).object<jarray>();
	}
	jarray ParcelFileDescriptor::createSocketPair()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"createSocketPair",
			"()[Landroid/os/ParcelFileDescriptor;"
		).object<jarray>();
	}
	android::os::ParcelFileDescriptor ParcelFileDescriptor::dup(java::io::FileDescriptor arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"dup",
			"(Ljava/io/FileDescriptor;)Landroid/os/ParcelFileDescriptor;",
			arg0.object()
		);
	}
	android::os::ParcelFileDescriptor ParcelFileDescriptor::fromDatagramSocket(java::net::DatagramSocket arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"fromDatagramSocket",
			"(Ljava/net/DatagramSocket;)Landroid/os/ParcelFileDescriptor;",
			arg0.object()
		);
	}
	android::os::ParcelFileDescriptor ParcelFileDescriptor::fromFd(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"fromFd",
			"(I)Landroid/os/ParcelFileDescriptor;",
			arg0
		);
	}
	android::os::ParcelFileDescriptor ParcelFileDescriptor::fromSocket(java::net::Socket arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"fromSocket",
			"(Ljava/net/Socket;)Landroid/os/ParcelFileDescriptor;",
			arg0.object()
		);
	}
	android::os::ParcelFileDescriptor ParcelFileDescriptor::open(java::io::File arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"open",
			"(Ljava/io/File;I)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1
		);
	}
	android::os::ParcelFileDescriptor ParcelFileDescriptor::open(java::io::File arg0, jint arg1, android::os::Handler arg2, __JniBaseClass arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"open",
			"(Ljava/io/File;ILandroid/os/Handler;Landroid/os/ParcelFileDescriptor$OnCloseListener;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	jint ParcelFileDescriptor::parseMode(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.ParcelFileDescriptor",
			"parseMode",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jboolean ParcelFileDescriptor::canDetectErrors()
	{
		return callMethod<jboolean>(
			"canDetectErrors",
			"()Z"
		);
	}
	void ParcelFileDescriptor::checkError()
	{
		callMethod<void>(
			"checkError",
			"()V"
		);
	}
	void ParcelFileDescriptor::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void ParcelFileDescriptor::closeWithError(jstring arg0)
	{
		callMethod<void>(
			"closeWithError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jint ParcelFileDescriptor::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint ParcelFileDescriptor::detachFd()
	{
		return callMethod<jint>(
			"detachFd",
			"()I"
		);
	}
	android::os::ParcelFileDescriptor ParcelFileDescriptor::dup()
	{
		return callObjectMethod(
			"dup",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	jint ParcelFileDescriptor::getFd()
	{
		return callMethod<jint>(
			"getFd",
			"()I"
		);
	}
	java::io::FileDescriptor ParcelFileDescriptor::getFileDescriptor()
	{
		return callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;"
		);
	}
	jlong ParcelFileDescriptor::getStatSize()
	{
		return callMethod<jlong>(
			"getStatSize",
			"()J"
		);
	}
	jstring ParcelFileDescriptor::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ParcelFileDescriptor::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

