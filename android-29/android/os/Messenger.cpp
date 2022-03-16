#include "./Handler.hpp"
#include "./Message.hpp"
#include "./Parcel.hpp"
#include "../../JObject.hpp"
#include "./Messenger.hpp"

namespace android::os
{
	// Fields
	JObject Messenger::CREATOR()
	{
		return getStaticObjectField(
			"android.os.Messenger",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	Messenger::Messenger(android::os::Handler arg0)
		: JObject(
			"android.os.Messenger",
			"(Landroid/os/Handler;)V",
			arg0.object()
		) {}
	Messenger::Messenger(JObject arg0)
		: JObject(
			"android.os.Messenger",
			"(Landroid/os/IBinder;)V",
			arg0.object()
		) {}
	
	// Methods
	android::os::Messenger Messenger::readMessengerOrNullFromParcel(android::os::Parcel arg0)
	{
		return callStaticObjectMethod(
			"android.os.Messenger",
			"readMessengerOrNullFromParcel",
			"(Landroid/os/Parcel;)Landroid/os/Messenger;",
			arg0.object()
		);
	}
	void Messenger::writeMessengerOrNullToParcel(android::os::Messenger arg0, android::os::Parcel arg1)
	{
		callStaticMethod<void>(
			"android.os.Messenger",
			"writeMessengerOrNullToParcel",
			"(Landroid/os/Messenger;Landroid/os/Parcel;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jint Messenger::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Messenger::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject Messenger::getBinder() const
	{
		return callObjectMethod(
			"getBinder",
			"()Landroid/os/IBinder;"
		);
	}
	jint Messenger::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Messenger::send(android::os::Message arg0) const
	{
		callMethod<void>(
			"send",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	void Messenger::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

