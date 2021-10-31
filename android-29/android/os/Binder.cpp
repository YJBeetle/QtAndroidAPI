#include "./Parcel.hpp"
#include "./UserHandle.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "./Binder.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	Binder::Binder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Binder::Binder()
		: __JniBaseClass(
			"android.os.Binder",
			"()V"
		) {}
	Binder::Binder(jstring arg0)
		: __JniBaseClass(
			"android.os.Binder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jlong Binder::clearCallingIdentity()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.Binder",
			"clearCallingIdentity",
			"()J"
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
	void Binder::flushPendingCommands()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Binder",
			"flushPendingCommands",
			"()V"
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
	jint Binder::getCallingUid()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Binder",
			"getCallingUid",
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
	QAndroidJniObject Binder::getCallingUserHandle()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Binder",
			"getCallingUserHandle",
			"()Landroid/os/UserHandle;"
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
	void Binder::joinThreadPool()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Binder",
			"joinThreadPool",
			"()V"
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
	void Binder::restoreCallingWorkSource(jlong arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Binder",
			"restoreCallingWorkSource",
			"(J)V",
			arg0
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
	void Binder::attachInterface(__JniBaseClass arg0, jstring arg1)
	{
		callMethod<void>(
			"attachInterface",
			"(Landroid/os/IInterface;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	void Binder::dump(java::io::FileDescriptor arg0, jarray arg1)
	{
		callMethod<void>(
			"dump",
			"(Ljava/io/FileDescriptor;[Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	void Binder::dumpAsync(java::io::FileDescriptor arg0, jarray arg1)
	{
		callMethod<void>(
			"dumpAsync",
			"(Ljava/io/FileDescriptor;[Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	jstring Binder::getInterfaceDescriptor()
	{
		return callObjectMethod(
			"getInterfaceDescriptor",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Binder::isBinderAlive()
	{
		return callMethod<jboolean>(
			"isBinderAlive",
			"()Z"
		);
	}
	void Binder::linkToDeath(__JniBaseClass arg0, jint arg1)
	{
		callMethod<void>(
			"linkToDeath",
			"(Landroid/os/IBinder$DeathRecipient;I)V",
			arg0.object(),
			arg1
		);
	}
	jboolean Binder::pingBinder()
	{
		return callMethod<jboolean>(
			"pingBinder",
			"()Z"
		);
	}
	QAndroidJniObject Binder::queryLocalInterface(jstring arg0)
	{
		return callObjectMethod(
			"queryLocalInterface",
			"(Ljava/lang/String;)Landroid/os/IInterface;",
			arg0
		);
	}
	jboolean Binder::transact(jint arg0, android::os::Parcel arg1, android::os::Parcel arg2, jint arg3)
	{
		return callMethod<jboolean>(
			"transact",
			"(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	jboolean Binder::unlinkToDeath(__JniBaseClass arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"unlinkToDeath",
			"(Landroid/os/IBinder$DeathRecipient;I)Z",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

