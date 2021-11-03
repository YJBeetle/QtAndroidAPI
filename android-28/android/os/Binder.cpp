#include "../../JArray.hpp"
#include "./Parcel.hpp"
#include "./UserHandle.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "../../JString.hpp"
#include "./Binder.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	Binder::Binder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Binder::Binder()
		: JObject(
			"android.os.Binder",
			"()V"
		) {}
	
	// Methods
	jlong Binder::clearCallingIdentity()
	{
		return callStaticMethod<jlong>(
			"android.os.Binder",
			"clearCallingIdentity",
			"()J"
		);
	}
	void Binder::flushPendingCommands()
	{
		callStaticMethod<void>(
			"android.os.Binder",
			"flushPendingCommands",
			"()V"
		);
	}
	jint Binder::getCallingPid()
	{
		return callStaticMethod<jint>(
			"android.os.Binder",
			"getCallingPid",
			"()I"
		);
	}
	jint Binder::getCallingUid()
	{
		return callStaticMethod<jint>(
			"android.os.Binder",
			"getCallingUid",
			"()I"
		);
	}
	android::os::UserHandle Binder::getCallingUserHandle()
	{
		return callStaticObjectMethod(
			"android.os.Binder",
			"getCallingUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	void Binder::joinThreadPool()
	{
		callStaticMethod<void>(
			"android.os.Binder",
			"joinThreadPool",
			"()V"
		);
	}
	void Binder::restoreCallingIdentity(jlong arg0)
	{
		callStaticMethod<void>(
			"android.os.Binder",
			"restoreCallingIdentity",
			"(J)V",
			arg0
		);
	}
	void Binder::attachInterface(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"attachInterface",
			"(Landroid/os/IInterface;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void Binder::dump(java::io::FileDescriptor arg0, JArray arg1) const
	{
		callMethod<void>(
			"dump",
			"(Ljava/io/FileDescriptor;[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	void Binder::dumpAsync(java::io::FileDescriptor arg0, JArray arg1) const
	{
		callMethod<void>(
			"dumpAsync",
			"(Ljava/io/FileDescriptor;[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	JString Binder::getInterfaceDescriptor() const
	{
		return callObjectMethod(
			"getInterfaceDescriptor",
			"()Ljava/lang/String;"
		);
	}
	jboolean Binder::isBinderAlive() const
	{
		return callMethod<jboolean>(
			"isBinderAlive",
			"()Z"
		);
	}
	void Binder::linkToDeath(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"linkToDeath",
			"(Landroid/os/IBinder$DeathRecipient;I)V",
			arg0.object(),
			arg1
		);
	}
	jboolean Binder::pingBinder() const
	{
		return callMethod<jboolean>(
			"pingBinder",
			"()Z"
		);
	}
	JObject Binder::queryLocalInterface(JString arg0) const
	{
		return callObjectMethod(
			"queryLocalInterface",
			"(Ljava/lang/String;)Landroid/os/IInterface;",
			arg0.object<jstring>()
		);
	}
	jboolean Binder::transact(jint arg0, android::os::Parcel arg1, android::os::Parcel arg2, jint arg3) const
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
	jboolean Binder::unlinkToDeath(JObject arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"unlinkToDeath",
			"(Landroid/os/IBinder$DeathRecipient;I)Z",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

