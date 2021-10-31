#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./PlaybackState.hpp"

namespace android::media::session
{
	// Fields
	jlong PlaybackState::ACTION_FAST_FORWARD()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_FAST_FORWARD"
		);
	}
	jlong PlaybackState::ACTION_PAUSE()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PAUSE"
		);
	}
	jlong PlaybackState::ACTION_PLAY()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PLAY"
		);
	}
	jlong PlaybackState::ACTION_PLAY_FROM_MEDIA_ID()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PLAY_FROM_MEDIA_ID"
		);
	}
	jlong PlaybackState::ACTION_PLAY_FROM_SEARCH()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PLAY_FROM_SEARCH"
		);
	}
	jlong PlaybackState::ACTION_PLAY_FROM_URI()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PLAY_FROM_URI"
		);
	}
	jlong PlaybackState::ACTION_PLAY_PAUSE()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PLAY_PAUSE"
		);
	}
	jlong PlaybackState::ACTION_PREPARE()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PREPARE"
		);
	}
	jlong PlaybackState::ACTION_PREPARE_FROM_MEDIA_ID()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PREPARE_FROM_MEDIA_ID"
		);
	}
	jlong PlaybackState::ACTION_PREPARE_FROM_SEARCH()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PREPARE_FROM_SEARCH"
		);
	}
	jlong PlaybackState::ACTION_PREPARE_FROM_URI()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PREPARE_FROM_URI"
		);
	}
	jlong PlaybackState::ACTION_REWIND()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_REWIND"
		);
	}
	jlong PlaybackState::ACTION_SEEK_TO()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_SEEK_TO"
		);
	}
	jlong PlaybackState::ACTION_SET_RATING()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_SET_RATING"
		);
	}
	jlong PlaybackState::ACTION_SKIP_TO_NEXT()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_SKIP_TO_NEXT"
		);
	}
	jlong PlaybackState::ACTION_SKIP_TO_PREVIOUS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_SKIP_TO_PREVIOUS"
		);
	}
	jlong PlaybackState::ACTION_SKIP_TO_QUEUE_ITEM()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_SKIP_TO_QUEUE_ITEM"
		);
	}
	jlong PlaybackState::ACTION_STOP()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_STOP"
		);
	}
	QAndroidJniObject PlaybackState::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.session.PlaybackState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jlong PlaybackState::PLAYBACK_POSITION_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"PLAYBACK_POSITION_UNKNOWN"
		);
	}
	jint PlaybackState::STATE_BUFFERING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_BUFFERING"
		);
	}
	jint PlaybackState::STATE_CONNECTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_CONNECTING"
		);
	}
	jint PlaybackState::STATE_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_ERROR"
		);
	}
	jint PlaybackState::STATE_FAST_FORWARDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_FAST_FORWARDING"
		);
	}
	jint PlaybackState::STATE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_NONE"
		);
	}
	jint PlaybackState::STATE_PAUSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_PAUSED"
		);
	}
	jint PlaybackState::STATE_PLAYING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_PLAYING"
		);
	}
	jint PlaybackState::STATE_REWINDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_REWINDING"
		);
	}
	jint PlaybackState::STATE_SKIPPING_TO_NEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_SKIPPING_TO_NEXT"
		);
	}
	jint PlaybackState::STATE_SKIPPING_TO_PREVIOUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_SKIPPING_TO_PREVIOUS"
		);
	}
	jint PlaybackState::STATE_SKIPPING_TO_QUEUE_ITEM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_SKIPPING_TO_QUEUE_ITEM"
		);
	}
	jint PlaybackState::STATE_STOPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_STOPPED"
		);
	}
	
	// QAndroidJniObject forward
	PlaybackState::PlaybackState(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
	QAndroidJniObject PlaybackState::getCustomActions()
	{
		return callObjectMethod(
			"getCustomActions",
			"()Ljava/util/List;"
		);
	}
	jstring PlaybackState::getErrorMessage()
	{
		return callObjectMethod(
			"getErrorMessage",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject PlaybackState::getExtras()
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
	jstring PlaybackState::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

