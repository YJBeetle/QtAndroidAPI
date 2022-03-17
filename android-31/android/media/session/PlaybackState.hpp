#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PlaybackState.def.hpp"

namespace android::media::session
{
	// Fields
	inline jlong PlaybackState::ACTION_FAST_FORWARD()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_FAST_FORWARD"
		);
	}
	inline jlong PlaybackState::ACTION_PAUSE()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PAUSE"
		);
	}
	inline jlong PlaybackState::ACTION_PLAY()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PLAY"
		);
	}
	inline jlong PlaybackState::ACTION_PLAY_FROM_MEDIA_ID()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PLAY_FROM_MEDIA_ID"
		);
	}
	inline jlong PlaybackState::ACTION_PLAY_FROM_SEARCH()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PLAY_FROM_SEARCH"
		);
	}
	inline jlong PlaybackState::ACTION_PLAY_FROM_URI()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PLAY_FROM_URI"
		);
	}
	inline jlong PlaybackState::ACTION_PLAY_PAUSE()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PLAY_PAUSE"
		);
	}
	inline jlong PlaybackState::ACTION_PREPARE()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PREPARE"
		);
	}
	inline jlong PlaybackState::ACTION_PREPARE_FROM_MEDIA_ID()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PREPARE_FROM_MEDIA_ID"
		);
	}
	inline jlong PlaybackState::ACTION_PREPARE_FROM_SEARCH()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PREPARE_FROM_SEARCH"
		);
	}
	inline jlong PlaybackState::ACTION_PREPARE_FROM_URI()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_PREPARE_FROM_URI"
		);
	}
	inline jlong PlaybackState::ACTION_REWIND()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_REWIND"
		);
	}
	inline jlong PlaybackState::ACTION_SEEK_TO()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_SEEK_TO"
		);
	}
	inline jlong PlaybackState::ACTION_SET_PLAYBACK_SPEED()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_SET_PLAYBACK_SPEED"
		);
	}
	inline jlong PlaybackState::ACTION_SET_RATING()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_SET_RATING"
		);
	}
	inline jlong PlaybackState::ACTION_SKIP_TO_NEXT()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_SKIP_TO_NEXT"
		);
	}
	inline jlong PlaybackState::ACTION_SKIP_TO_PREVIOUS()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_SKIP_TO_PREVIOUS"
		);
	}
	inline jlong PlaybackState::ACTION_SKIP_TO_QUEUE_ITEM()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_SKIP_TO_QUEUE_ITEM"
		);
	}
	inline jlong PlaybackState::ACTION_STOP()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"ACTION_STOP"
		);
	}
	inline JObject PlaybackState::CREATOR()
	{
		return getStaticObjectField(
			"android.media.session.PlaybackState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jlong PlaybackState::PLAYBACK_POSITION_UNKNOWN()
	{
		return getStaticField<jlong>(
			"android.media.session.PlaybackState",
			"PLAYBACK_POSITION_UNKNOWN"
		);
	}
	inline jint PlaybackState::STATE_BUFFERING()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_BUFFERING"
		);
	}
	inline jint PlaybackState::STATE_CONNECTING()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_CONNECTING"
		);
	}
	inline jint PlaybackState::STATE_ERROR()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_ERROR"
		);
	}
	inline jint PlaybackState::STATE_FAST_FORWARDING()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_FAST_FORWARDING"
		);
	}
	inline jint PlaybackState::STATE_NONE()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_NONE"
		);
	}
	inline jint PlaybackState::STATE_PAUSED()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_PAUSED"
		);
	}
	inline jint PlaybackState::STATE_PLAYING()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_PLAYING"
		);
	}
	inline jint PlaybackState::STATE_REWINDING()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_REWINDING"
		);
	}
	inline jint PlaybackState::STATE_SKIPPING_TO_NEXT()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_SKIPPING_TO_NEXT"
		);
	}
	inline jint PlaybackState::STATE_SKIPPING_TO_PREVIOUS()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_SKIPPING_TO_PREVIOUS"
		);
	}
	inline jint PlaybackState::STATE_SKIPPING_TO_QUEUE_ITEM()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_SKIPPING_TO_QUEUE_ITEM"
		);
	}
	inline jint PlaybackState::STATE_STOPPED()
	{
		return getStaticField<jint>(
			"android.media.session.PlaybackState",
			"STATE_STOPPED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PlaybackState::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jlong PlaybackState::getActions() const
	{
		return callMethod<jlong>(
			"getActions",
			"()J"
		);
	}
	inline jlong PlaybackState::getActiveQueueItemId() const
	{
		return callMethod<jlong>(
			"getActiveQueueItemId",
			"()J"
		);
	}
	inline jlong PlaybackState::getBufferedPosition() const
	{
		return callMethod<jlong>(
			"getBufferedPosition",
			"()J"
		);
	}
	inline JObject PlaybackState::getCustomActions() const
	{
		return callObjectMethod(
			"getCustomActions",
			"()Ljava/util/List;"
		);
	}
	inline JString PlaybackState::getErrorMessage() const
	{
		return callObjectMethod(
			"getErrorMessage",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::os::Bundle PlaybackState::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jlong PlaybackState::getLastPositionUpdateTime() const
	{
		return callMethod<jlong>(
			"getLastPositionUpdateTime",
			"()J"
		);
	}
	inline jfloat PlaybackState::getPlaybackSpeed() const
	{
		return callMethod<jfloat>(
			"getPlaybackSpeed",
			"()F"
		);
	}
	inline jlong PlaybackState::getPosition() const
	{
		return callMethod<jlong>(
			"getPosition",
			"()J"
		);
	}
	inline jint PlaybackState::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline jboolean PlaybackState::isActive() const
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	inline JString PlaybackState::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PlaybackState::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::session

// Base class headers

