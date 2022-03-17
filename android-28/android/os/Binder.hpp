#pragma once

#include "../../JArray.hpp"
#include "./Parcel.def.hpp"
#include "./UserHandle.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../java/io/PrintWriter.def.hpp"
#include "../../JString.hpp"
#include "./Binder.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline Binder::Binder()
		: JObject(
			"android.os.Binder",
			"()V"
		) {}
	
	// Methods
	inline jlong Binder::clearCallingIdentity()
	{
		return callStaticMethod<jlong>(
			"android.os.Binder",
			"clearCallingIdentity",
			"()J"
		);
	}
	inline void Binder::flushPendingCommands()
	{
		callStaticMethod<void>(
			"android.os.Binder",
			"flushPendingCommands",
			"()V"
		);
	}
	inline jint Binder::getCallingPid()
	{
		return callStaticMethod<jint>(
			"android.os.Binder",
			"getCallingPid",
			"()I"
		);
	}
	inline jint Binder::getCallingUid()
	{
		return callStaticMethod<jint>(
			"android.os.Binder",
			"getCallingUid",
			"()I"
		);
	}
	inline android::os::UserHandle Binder::getCallingUserHandle()
	{
		return callStaticObjectMethod(
			"android.os.Binder",
			"getCallingUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	inline void Binder::joinThreadPool()
	{
		callStaticMethod<void>(
			"android.os.Binder",
			"joinThreadPool",
			"()V"
		);
	}
	inline void Binder::restoreCallingIdentity(jlong arg0)
	{
		callStaticMethod<void>(
			"android.os.Binder",
			"restoreCallingIdentity",
			"(J)V",
			arg0
		);
	}
	inline void Binder::attachInterface(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"attachInterface",
			"(Landroid/os/IInterface;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void Binder::dump(java::io::FileDescriptor arg0, JArray arg1) const
	{
		callMethod<void>(
			"dump",
			"(Ljava/io/FileDescriptor;[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline void Binder::dumpAsync(java::io::FileDescriptor arg0, JArray arg1) const
	{
		callMethod<void>(
			"dumpAsync",
			"(Ljava/io/FileDescriptor;[Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline JString Binder::getInterfaceDescriptor() const
	{
		return callObjectMethod(
			"getInterfaceDescriptor",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean Binder::isBinderAlive() const
	{
		return callMethod<jboolean>(
			"isBinderAlive",
			"()Z"
		);
	}
	inline void Binder::linkToDeath(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"linkToDeath",
			"(Landroid/os/IBinder$DeathRecipient;I)V",
			arg0.object(),
			arg1
		);
	}
	inline jboolean Binder::pingBinder() const
	{
		return callMethod<jboolean>(
			"pingBinder",
			"()Z"
		);
	}
	inline JObject Binder::queryLocalInterface(JString arg0) const
	{
		return callObjectMethod(
			"queryLocalInterface",
			"(Ljava/lang/String;)Landroid/os/IInterface;",
			arg0.object<jstring>()
		);
	}
	inline jboolean Binder::transact(jint arg0, android::os::Parcel arg1, android::os::Parcel arg2, jint arg3) const
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
	inline jboolean Binder::unlinkToDeath(JObject arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"unlinkToDeath",
			"(Landroid/os/IBinder$DeathRecipient;I)Z",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

// Base class headers

