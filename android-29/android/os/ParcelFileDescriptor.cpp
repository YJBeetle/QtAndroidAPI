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
	QAndroidJniObject ParcelFileDescriptor::CREATOR()
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
	
	ParcelFileDescriptor::ParcelFileDescriptor(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ParcelFileDescriptor::ParcelFileDescriptor(android::os::ParcelFileDescriptor &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.ParcelFileDescriptor",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ParcelFileDescriptor::adoptFd(jint arg0)
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
	QAndroidJniObject ParcelFileDescriptor::dup(java::io::FileDescriptor arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"dup",
			"(Ljava/io/FileDescriptor;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ParcelFileDescriptor::fromDatagramSocket(java::net::DatagramSocket arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"fromDatagramSocket",
			"(Ljava/net/DatagramSocket;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ParcelFileDescriptor::fromFd(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"fromFd",
			"(I)Landroid/os/ParcelFileDescriptor;",
			arg0
		);
	}
	QAndroidJniObject ParcelFileDescriptor::fromSocket(java::net::Socket arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"fromSocket",
			"(Ljava/net/Socket;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ParcelFileDescriptor::open(java::io::File arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"open",
			"(Ljava/io/File;I)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ParcelFileDescriptor::open(java::io::File arg0, jint arg1, android::os::Handler arg2, __JniBaseClass arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"open",
			"(Ljava/io/File;ILandroid/os/Handler;Landroid/os/ParcelFileDescriptor$OnCloseListener;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
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
	jint ParcelFileDescriptor::parseMode(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.ParcelFileDescriptor",
			"parseMode",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean ParcelFileDescriptor::canDetectErrors()
	{
		return __thiz.callMethod<jboolean>(
			"canDetectErrors",
			"()Z"
		);
	}
	void ParcelFileDescriptor::checkError()
	{
		__thiz.callMethod<void>(
			"checkError",
			"()V"
		);
	}
	void ParcelFileDescriptor::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void ParcelFileDescriptor::closeWithError(jstring arg0)
	{
		__thiz.callMethod<void>(
			"closeWithError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ParcelFileDescriptor::closeWithError(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"closeWithError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint ParcelFileDescriptor::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint ParcelFileDescriptor::detachFd()
	{
		return __thiz.callMethod<jint>(
			"detachFd",
			"()I"
		);
	}
	QAndroidJniObject ParcelFileDescriptor::dup()
	{
		return __thiz.callObjectMethod(
			"dup",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	jint ParcelFileDescriptor::getFd()
	{
		return __thiz.callMethod<jint>(
			"getFd",
			"()I"
		);
	}
	QAndroidJniObject ParcelFileDescriptor::getFileDescriptor()
	{
		return __thiz.callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;"
		);
	}
	jlong ParcelFileDescriptor::getStatSize()
	{
		return __thiz.callMethod<jlong>(
			"getStatSize",
			"()J"
		);
	}
	jstring ParcelFileDescriptor::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ParcelFileDescriptor::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::os

