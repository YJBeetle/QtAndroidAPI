#pragma once

#ifndef ANDROID_OS_PARCELFILEDESCRIPTOR
#define ANDROID_OS_PARCELFILEDESCRIPTOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::net
{
	class Socket;
}
namespace __jni_impl::java::net
{
	class DatagramSocket;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::os
{
	class ParcelFileDescriptor : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint MODE_APPEND();
		static jint MODE_CREATE();
		static jint MODE_READ_ONLY();
		static jint MODE_READ_WRITE();
		static jint MODE_TRUNCATE();
		static jint MODE_WORLD_READABLE();
		static jint MODE_WORLD_WRITEABLE();
		static jint MODE_WRITE_ONLY();
		
		// Constructors
		void __constructor(__jni_impl::android::os::ParcelFileDescriptor arg0);
		
		// Methods
		QAndroidJniObject toString();
		void close();
		static QAndroidJniObject open(__jni_impl::java::io::File arg0, jint arg1);
		static QAndroidJniObject open(__jni_impl::java::io::File arg0, jint arg1, __jni_impl::android::os::Handler arg2, __jni_impl::__JniBaseClass arg3);
		void checkError();
		static QAndroidJniObject dup(__jni_impl::java::io::FileDescriptor arg0);
		QAndroidJniObject dup();
		static QAndroidJniObject fromFd(jint arg0);
		static QAndroidJniObject adoptFd(jint arg0);
		static QAndroidJniObject fromSocket(__jni_impl::java::net::Socket arg0);
		static QAndroidJniObject fromDatagramSocket(__jni_impl::java::net::DatagramSocket arg0);
		static QAndroidJniObject createPipe();
		static QAndroidJniObject createReliablePipe();
		static QAndroidJniObject createSocketPair();
		static QAndroidJniObject createReliableSocketPair();
		static jint parseMode(jstring arg0);
		QAndroidJniObject getFileDescriptor();
		jlong getStatSize();
		jint getFd();
		jint detachFd();
		void closeWithError(jstring arg0);
		jboolean canDetectErrors();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::os

#include "../../java/io/File.hpp"
#include "Handler.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/net/Socket.hpp"
#include "../../java/net/DatagramSocket.hpp"
#include "Parcel.hpp"

namespace __jni_impl::android::os
{
	// Fields
	QAndroidJniObject ParcelFileDescriptor::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.ParcelFileDescriptor",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint ParcelFileDescriptor::MODE_APPEND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_APPEND");
	}
	jint ParcelFileDescriptor::MODE_CREATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_CREATE");
	}
	jint ParcelFileDescriptor::MODE_READ_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_READ_ONLY");
	}
	jint ParcelFileDescriptor::MODE_READ_WRITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_READ_WRITE");
	}
	jint ParcelFileDescriptor::MODE_TRUNCATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_TRUNCATE");
	}
	jint ParcelFileDescriptor::MODE_WORLD_READABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_WORLD_READABLE");
	}
	jint ParcelFileDescriptor::MODE_WORLD_WRITEABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_WORLD_WRITEABLE");
	}
	jint ParcelFileDescriptor::MODE_WRITE_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.ParcelFileDescriptor",
			"MODE_WRITE_ONLY");
	}
	
	// Constructors
	void ParcelFileDescriptor::__constructor(__jni_impl::android::os::ParcelFileDescriptor arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.ParcelFileDescriptor",
			"(Landroid/os/ParcelFileDescriptor;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject ParcelFileDescriptor::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void ParcelFileDescriptor::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	QAndroidJniObject ParcelFileDescriptor::open(__jni_impl::java::io::File arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"open",
			"(Ljava/io/File;I)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject ParcelFileDescriptor::open(__jni_impl::java::io::File arg0, jint arg1, __jni_impl::android::os::Handler arg2, __jni_impl::__JniBaseClass arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"open",
			"(Ljava/io/File;ILandroid/os/Handler;Landroid/os/ParcelFileDescriptor$OnCloseListener;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	void ParcelFileDescriptor::checkError()
	{
		__thiz.callMethod<void>(
			"checkError",
			"()V");
	}
	QAndroidJniObject ParcelFileDescriptor::dup(__jni_impl::java::io::FileDescriptor arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"dup",
			"(Ljava/io/FileDescriptor;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ParcelFileDescriptor::dup()
	{
		return __thiz.callObjectMethod(
			"dup",
			"()Landroid/os/ParcelFileDescriptor;");
	}
	QAndroidJniObject ParcelFileDescriptor::fromFd(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"fromFd",
			"(I)Landroid/os/ParcelFileDescriptor;",
			arg0);
	}
	QAndroidJniObject ParcelFileDescriptor::adoptFd(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"adoptFd",
			"(I)Landroid/os/ParcelFileDescriptor;",
			arg0);
	}
	QAndroidJniObject ParcelFileDescriptor::fromSocket(__jni_impl::java::net::Socket arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"fromSocket",
			"(Ljava/net/Socket;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ParcelFileDescriptor::fromDatagramSocket(__jni_impl::java::net::DatagramSocket arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"fromDatagramSocket",
			"(Ljava/net/DatagramSocket;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ParcelFileDescriptor::createPipe()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"createPipe",
			"()[Landroid/os/ParcelFileDescriptor;");
	}
	QAndroidJniObject ParcelFileDescriptor::createReliablePipe()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"createReliablePipe",
			"()[Landroid/os/ParcelFileDescriptor;");
	}
	QAndroidJniObject ParcelFileDescriptor::createSocketPair()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"createSocketPair",
			"()[Landroid/os/ParcelFileDescriptor;");
	}
	QAndroidJniObject ParcelFileDescriptor::createReliableSocketPair()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelFileDescriptor",
			"createReliableSocketPair",
			"()[Landroid/os/ParcelFileDescriptor;");
	}
	jint ParcelFileDescriptor::parseMode(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.ParcelFileDescriptor",
			"parseMode",
			"(Ljava/lang/String;)I",
			arg0);
	}
	QAndroidJniObject ParcelFileDescriptor::getFileDescriptor()
	{
		return __thiz.callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;");
	}
	jlong ParcelFileDescriptor::getStatSize()
	{
		return __thiz.callMethod<jlong>(
			"getStatSize",
			"()J");
	}
	jint ParcelFileDescriptor::getFd()
	{
		return __thiz.callMethod<jint>(
			"getFd",
			"()I");
	}
	jint ParcelFileDescriptor::detachFd()
	{
		return __thiz.callMethod<jint>(
			"detachFd",
			"()I");
	}
	void ParcelFileDescriptor::closeWithError(jstring arg0)
	{
		__thiz.callMethod<void>(
			"closeWithError",
			"(Ljava/lang/String;)V",
			arg0);
	}
	jboolean ParcelFileDescriptor::canDetectErrors()
	{
		return __thiz.callMethod<jboolean>(
			"canDetectErrors",
			"()Z");
	}
	jint ParcelFileDescriptor::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void ParcelFileDescriptor::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class ParcelFileDescriptor : public __jni_impl::android::os::ParcelFileDescriptor
	{
	public:
		ParcelFileDescriptor(QAndroidJniObject obj) { __thiz = obj; }
		ParcelFileDescriptor(__jni_impl::android::os::ParcelFileDescriptor arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

#endif // ANDROID_OS_PARCELFILEDESCRIPTOR

