#include "./Session2Command.hpp"
#include "../os/Parcel.hpp"
#include "./Session2CommandGroup.hpp"

namespace android::media
{
	// Fields
	__JniBaseClass Session2CommandGroup::CREATOR()
	{
		return getStaticObjectField(
			"android.media.Session2CommandGroup",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	Session2CommandGroup::Session2CommandGroup(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint Session2CommandGroup::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	__JniBaseClass Session2CommandGroup::getCommands()
	{
		return callObjectMethod(
			"getCommands",
			"()Ljava/util/Set;"
		);
	}
	jboolean Session2CommandGroup::hasCommand(android::media::Session2Command arg0)
	{
		return callMethod<jboolean>(
			"hasCommand",
			"(Landroid/media/Session2Command;)Z",
			arg0.object()
		);
	}
	jboolean Session2CommandGroup::hasCommand(jint arg0)
	{
		return callMethod<jboolean>(
			"hasCommand",
			"(I)Z",
			arg0
		);
	}
	void Session2CommandGroup::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

