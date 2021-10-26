#pragma once

#ifndef ANDROID_OS_BINDER
#define ANDROID_OS_BINDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class UserHandle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}

namespace __jni_impl::android::os
{
	class Binder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		static jint getCallingUid();
		static jlong clearCallingIdentity();
		static void restoreCallingIdentity(jlong arg0);
		static QAndroidJniObject getCallingUserHandle();
		static jlong setCallingWorkSourceUid(jint arg0);
		static jint getCallingWorkSourceUid();
		static jlong clearCallingWorkSource();
		static void restoreCallingWorkSource(jlong arg0);
		static void flushPendingCommands();
		static void joinThreadPool();
		void attachInterface(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void attachInterface(__jni_impl::__JniBaseClass arg0, const QString &arg1);
		static jint getCallingPid();
		static jint getCallingUidOrThrow();
		void dump(__jni_impl::java::io::FileDescriptor arg0, jarray arg1);
		jstring getInterfaceDescriptor();
		jboolean pingBinder();
		jboolean isBinderAlive();
		QAndroidJniObject queryLocalInterface(jstring arg0);
		QAndroidJniObject queryLocalInterface(const QString &arg0);
		void dumpAsync(__jni_impl::java::io::FileDescriptor arg0, jarray arg1);
		jboolean transact(jint arg0, __jni_impl::android::os::Parcel arg1, __jni_impl::android::os::Parcel arg2, jint arg3);
		void linkToDeath(__jni_impl::__JniBaseClass arg0, jint arg1);
		jboolean unlinkToDeath(__jni_impl::__JniBaseClass arg0, jint arg1);
	};
} // namespace __jni_impl::android::os

#include "UserHandle.hpp"
#include "Parcel.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void Binder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.Binder",
			"()V"
		);
	}
	void Binder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Binder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Binder::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Binder",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jint Binder::getCallingUid()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Binder",
			"getCallingUid",
			"()I"
		);
	}
	jlong Binder::clearCallingIdentity()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.Binder",
			"clearCallingIdentity",
			"()J"
		);
	}
	void Binder::restoreCallingIdentity(jlong arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Binder",
			"restoreCallingIdentity",
			"(J)V",
			arg0
		);
	}
	QAndroidJniObject Binder::getCallingUserHandle()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Binder",
			"getCallingUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	jlong Binder::setCallingWorkSourceUid(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.Binder",
			"setCallingWorkSourceUid",
			"(I)J",
			arg0
		);
	}
	jint Binder::getCallingWorkSourceUid()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Binder",
			"getCallingWorkSourceUid",
			"()I"
		);
	}
	jlong Binder::clearCallingWorkSource()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.Binder",
			"clearCallingWorkSource",
			"()J"
		);
	}
	void Binder::restoreCallingWorkSource(jlong arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Binder",
			"restoreCallingWorkSource",
			"(J)V",
			arg0
		);
	}
	void Binder::flushPendingCommands()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Binder",
			"flushPendingCommands",
			"()V"
		);
	}
	void Binder::joinThreadPool()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Binder",
			"joinThreadPool",
			"()V"
		);
	}
	void Binder::attachInterface(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"attachInterface",
			"(Landroid/os/IInterface;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Binder::attachInterface(__jni_impl::__JniBaseClass arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"attachInterface",
			"(Landroid/os/IInterface;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint Binder::getCallingPid()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Binder",
			"getCallingPid",
			"()I"
		);
	}
	jint Binder::getCallingUidOrThrow()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Binder",
			"getCallingUidOrThrow",
			"()I"
		);
	}
	void Binder::dump(__jni_impl::java::io::FileDescriptor arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/io/FileDescriptor;[Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring Binder::getInterfaceDescriptor()
	{
		return __thiz.callObjectMethod(
			"getInterfaceDescriptor",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Binder::pingBinder()
	{
		return __thiz.callMethod<jboolean>(
			"pingBinder",
			"()Z"
		);
	}
	jboolean Binder::isBinderAlive()
	{
		return __thiz.callMethod<jboolean>(
			"isBinderAlive",
			"()Z"
		);
	}
	QAndroidJniObject Binder::queryLocalInterface(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"queryLocalInterface",
			"(Ljava/lang/String;)Landroid/os/IInterface;",
			arg0
		);
	}
	QAndroidJniObject Binder::queryLocalInterface(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"queryLocalInterface",
			"(Ljava/lang/String;)Landroid/os/IInterface;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Binder::dumpAsync(__jni_impl::java::io::FileDescriptor arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"dumpAsync",
			"(Ljava/io/FileDescriptor;[Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Binder::transact(jint arg0, __jni_impl::android::os::Parcel arg1, __jni_impl::android::os::Parcel arg2, jint arg3)
	{
		return __thiz.callMethod<jboolean>(
			"transact",
			"(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void Binder::linkToDeath(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"linkToDeath",
			"(Landroid/os/IBinder$DeathRecipient;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Binder::unlinkToDeath(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"unlinkToDeath",
			"(Landroid/os/IBinder$DeathRecipient;I)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class Binder : public __jni_impl::android::os::Binder
	{
	public:
		Binder(QAndroidJniObject obj) { __thiz = obj; }
		Binder()
		{
			__constructor();
		}
		Binder(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

#endif // ANDROID_OS_BINDER

