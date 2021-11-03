#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PlaybackState.hpp"

namespace android::media::session
{
	// Fields
	jlong PlaybackState::ACTION_FAST_FORWARD()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_FAST_FORWARD"
		);
	}
	jlong PlaybackState::ACTION_PAUSE()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PAUSE"
		);
	}
	jlong PlaybackState::ACTION_PLAY()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PLAY"
		);
	}
	jlong PlaybackState::ACTION_PLAY_FROM_MEDIA_ID()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PLAY_FROM_MEDIA_ID"
		);
	}
	jlong PlaybackState::ACTION_PLAY_FROM_SEARCH()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PLAY_FROM_SEARCH"
		);
	}
	jlong PlaybackState::ACTION_PLAY_FROM_URI()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PLAY_FROM_URI"
		);
	}
	jlong PlaybackState::ACTION_PLAY_PAUSE()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PLAY_PAUSE"
		);
	}
	jlong PlaybackState::ACTION_PREPARE()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PREPARE"
		);
	}
	jlong PlaybackState::ACTION_PREPARE_FROM_MEDIA_ID()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PREPARE_FROM_MEDIA_ID"
		);
	}
	jlong PlaybackState::ACTION_PREPARE_FROM_SEARCH()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PREPARE_FROM_SEARCH"
		);
	}
	jlong PlaybackState::ACTION_PREPARE_FROM_URI()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PREPARE_FROM_URI"
		);
	}
	jlong PlaybackState::ACTION_REWIND()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_REWIND"
		);
	}
	jlong PlaybackState::ACTION_SEEK_TO()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_SEEK_TO"
		);
	}
	jlong PlaybackState::ACTION_SET_RATING()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_SET_RATING"
		);
	}
	jlong PlaybackState::ACTION_SKIP_TO_NEXT()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_SKIP_TO_NEXT"
		);
	}
	jlong PlaybackState::ACTION_SKIP_TO_PREVIOUS()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_SKIP_TO_PREVIOUS"
		);
	}
	jlong PlaybackState::ACTION_SKIP_TO_QUEUE_ITEM()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_SKIP_TO_QUEUE_ITEM"
		);
	}
	jlong PlaybackState::ACTION_STOP()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_STOP"
		);
	}
	JObject PlaybackState::CREATOR()
	{
		return getStaticObjectField(
			"android.media.session.PlaybackState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jlong PlaybackState::PLAYBACK_POSITION_UNKNOWN()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"PLAYBACK_POSITION_UNKNOWN"
		);
	}
	jint PlaybackState::STATE_BUFFERING()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_BUFFERING"
		);
	}
	jint PlaybackState::STATE_CONNECTING()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_CONNECTING"
		);
	}
	jint PlaybackState::STATE_ERROR()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_ERROR"
		);
	}
	jint PlaybackState::STATE_FAST_FORWARDING()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_FAST_FORWARDING"
		);
	}
	jint PlaybackState::STATE_NONE()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_NONE"
		);
	}
	jint PlaybackState::STATE_PAUSED()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_PAUSED"
		);
	}
	jint PlaybackState::STATE_PLAYING()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_PLAYING"
		);
	}
	jint PlaybackState::STATE_REWINDING()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_REWINDING"
		);
	}
	jint PlaybackState::STATE_SKIPPING_TO_NEXT()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_SKIPPING_TO_NEXT"
		);
	}
	jint PlaybackState::STATE_SKIPPING_TO_PREVIOUS()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_SKIPPING_TO_PREVIOUS"
		);
	}
	jint PlaybackState::STATE_SKIPPING_TO_QUEUE_ITEM()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_SKIPPING_TO_QUEUE_ITEM"
		);
	}
	jint PlaybackState::STATE_STOPPED()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_STOPPED"
		);
	}
	
	// QAndroidJniObject forward
	PlaybackState::PlaybackState(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint PlaybackState::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong PlaybackState::getActions()
	{
		return callMethod<jlong>(
			"getActions",
			"()J"
		);
	}
	jlong PlaybackState::getActiveQueueItemId()
	{
		return callMethod<jlong>(
			"getActiveQueueItemId",
			"()J"
		);
	}
	jlong PlaybackState::getBufferedPosition()
	{
		return callMethod<jlong>(
			"getBufferedPosition",
			"()J"
		);
	}
	JObject PlaybackState::getCustomActions()
	{
		return callObjectMethod(
			"getCustomActions",
			"()Ljava/util/List;"
		);
	}
	JString PlaybackState::getErrorMessage()
	{
		return callObjectMethod(
			"getErrorMessage",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::os::Bundle PlaybackState::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jlong PlaybackState::getLastPositionUpdateTime()
	{
		return callMethod<jlong>(
			"getLastPositionUpdateTime",
			"()J"
		);
	}
	jfloat PlaybackState::getPlaybackSpeed()
	{
		return callMethod<jfloat>(
			"getPlaybackSpeed",
			"()F"
		);
	}
	jlong PlaybackState::getPosition()
	{
		return callMethod<jlong>(
			"getPosition",
			"()J"
		);
	}
	jint PlaybackState::getState()
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	JString PlaybackState::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PlaybackState::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::session

