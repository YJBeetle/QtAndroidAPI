#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PlaybackState_CustomAction.hpp"

namespace android::media::session
{
	// Fields
	JObject PlaybackState_CustomAction::CREATOR()
	{
		return getStaticObjectField(
			"android.media.session.PlaybackState$CustomAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	PlaybackState_CustomAction::PlaybackState_CustomAction(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint PlaybackState_CustomAction::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString PlaybackState_CustomAction::getAction()
	{
		return callObjectMethod(
			"getAction",
			"()Ljava/lang/String;"
		);
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
	JString PlaybackState_CustomAction::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString PlaybackState_CustomAction::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

