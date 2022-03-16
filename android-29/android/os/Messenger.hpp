#pragma once

#include "./Handler.def.hpp"
#include "./Message.def.hpp"
#include "./Parcel.def.hpp"
#include "../../JObject.hpp"
#include "./Messenger.def.hpp"

namespace android::os
{
	// Fields
	inline JObject Messenger::CREATOR()
	{
		return getStaticObjectField(
			"android.os.Messenger",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline Messenger::Messenger(android::os::Handler arg0)
		: JObject(
			"android.os.Messenger",
			"(Landroid/os/Handler;)V",
			arg0.object()
		) {}
	inline Messenger::Messenger(JObject arg0)
		: JObject(
			"android.os.Messenger",
			"(Landroid/os/IBinder;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::os::Messenger Messenger::readMessengerOrNullFromParcel(android::os::Parcel arg0)
	{
		return callStaticObjectMethod(
			"android.os.Messenger",
			"readMessengerOrNullFromParcel",
			"(Landroid/os/Parcel;)Landroid/os/Messenger;",
			arg0.object()
		);
	}
	inline void Messenger::writeMessengerOrNullToParcel(android::os::Messenger arg0, android::os::Parcel arg1)
	{
		callStaticMethod<void>(
			"android.os.Messenger",
			"writeMessengerOrNullToParcel",
			"(Landroid/os/Messenger;Landroid/os/Parcel;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint Messenger::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Messenger::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject Messenger::getBinder() const
	{
		return callObjectMethod(
			"getBinder",
			"()Landroid/os/IBinder;"
		);
	}
	inline jint Messenger::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void Messenger::send(android::os::Message arg0) const
	{
		callMethod<void>(
			"send",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	inline void Messenger::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

