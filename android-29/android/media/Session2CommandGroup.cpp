#include "./Session2Command.hpp"
#include "../os/Parcel.hpp"
#include "./Session2CommandGroup.hpp"

namespace android::media
{
	// Fields
	JObject Session2CommandGroup::CREATOR()
	{
		return getStaticObjectField(
			"android.media.Session2CommandGroup",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint Session2CommandGroup::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject Session2CommandGroup::getCommands() const
	{
		return callObjectMethod(
			"getCommands",
			"()Ljava/util/Set;"
		);
	}
	jboolean Session2CommandGroup::hasCommand(android::media::Session2Command arg0) const
	{
		return callMethod<jboolean>(
			"hasCommand",
			"(Landroid/media/Session2Command;)Z",
			arg0.object()
		);
	}
	jboolean Session2CommandGroup::hasCommand(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasCommand",
			"(I)Z",
			arg0
		);
	}
	void Session2CommandGroup::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

