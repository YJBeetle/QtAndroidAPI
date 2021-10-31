#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./PlaybackState_CustomAction.hpp"

namespace android::media::session
{
	// Fields
	__JniBaseClass PlaybackState_CustomAction::CREATOR()
	{
		return getStaticObjectField(
			"android.media.session.PlaybackState$CustomAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	PlaybackState_CustomAction::PlaybackState_CustomAction(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint PlaybackState_CustomAction::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring PlaybackState_CustomAction::getAction()
	{
		return callObjectMethod(
			"getAction",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::os::Bundle PlaybackState_CustomAction::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint PlaybackState_CustomAction::getIcon()
	{
		return callMethod<jint>(
			"getIcon",
			"()I"
		);
	}
	jstring PlaybackState_CustomAction::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring PlaybackState_CustomAction::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PlaybackState_CustomAction::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::session

