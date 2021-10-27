#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./PlaybackState_CustomAction.hpp"

namespace android::media::session
{
	// Fields
	QAndroidJniObject PlaybackState_CustomAction::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.session.PlaybackState$CustomAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	PlaybackState_CustomAction::PlaybackState_CustomAction(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint PlaybackState_CustomAction::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring PlaybackState_CustomAction::getAction()
	{
		return __thiz.callObjectMethod(
			"getAction",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject PlaybackState_CustomAction::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint PlaybackState_CustomAction::getIcon()
	{
		return __thiz.callMethod<jint>(
			"getIcon",
			"()I"
		);
	}
	jstring PlaybackState_CustomAction::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring PlaybackState_CustomAction::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PlaybackState_CustomAction::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::media::session

