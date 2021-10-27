#pragma once

#ifndef ANDROID_MEDIA_SESSION_PLAYBACKSTATE
#define ANDROID_MEDIA_SESSION_PLAYBACKSTATE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::media::session
{
	class PlaybackState : public __JniBaseClass
	{
	public:
		// Fields
		static jlong ACTION_FAST_FORWARD();
		static jlong ACTION_PAUSE();
		static jlong ACTION_PLAY();
		static jlong ACTION_PLAY_FROM_MEDIA_ID();
		static jlong ACTION_PLAY_FROM_SEARCH();
		static jlong ACTION_PLAY_FROM_URI();
		static jlong ACTION_PLAY_PAUSE();
		static jlong ACTION_PREPARE();
		static jlong ACTION_PREPARE_FROM_MEDIA_ID();
		static jlong ACTION_PREPARE_FROM_SEARCH();
		static jlong ACTION_PREPARE_FROM_URI();
		static jlong ACTION_REWIND();
		static jlong ACTION_SEEK_TO();
		static jlong ACTION_SET_RATING();
		static jlong ACTION_SKIP_TO_NEXT();
		static jlong ACTION_SKIP_TO_PREVIOUS();
		static jlong ACTION_SKIP_TO_QUEUE_ITEM();
		static jlong ACTION_STOP();
		static QAndroidJniObject CREATOR();
		static jlong PLAYBACK_POSITION_UNKNOWN();
		static jint STATE_BUFFERING();
		static jint STATE_CONNECTING();
		static jint STATE_ERROR();
		static jint STATE_FAST_FORWARDING();
		static jint STATE_NONE();
		static jint STATE_PAUSED();
		static jint STATE_PLAYING();
		static jint STATE_REWINDING();
		static jint STATE_SKIPPING_TO_NEXT();
		static jint STATE_SKIPPING_TO_PREVIOUS();
		static jint STATE_SKIPPING_TO_QUEUE_ITEM();
		static jint STATE_STOPPED();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jlong getActions();
		jlong getActiveQueueItemId();
		jlong getBufferedPosition();
		QAndroidJniObject getCustomActions();
		jstring getErrorMessage();
		QAndroidJniObject getExtras();
		jlong getLastPositionUpdateTime();
		jfloat getPlaybackSpeed();
		jlong getPosition();
		jint getState();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::media::session

#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::media::session
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
	
	// Constructors
	void PlaybackState::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.session.PlaybackState",
			"(V)V");
	}
	
	// Methods
	jint PlaybackState::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong PlaybackState::getActions()
	{
		return __thiz.callMethod<jlong>(
			"getActions",
			"()J"
		);
	}
	jlong PlaybackState::getActiveQueueItemId()
	{
		return __thiz.callMethod<jlong>(
			"getActiveQueueItemId",
			"()J"
		);
	}
	jlong PlaybackState::getBufferedPosition()
	{
		return __thiz.callMethod<jlong>(
			"getBufferedPosition",
			"()J"
		);
	}
	QAndroidJniObject PlaybackState::getCustomActions()
	{
		return __thiz.callObjectMethod(
			"getCustomActions",
			"()Ljava/util/List;"
		);
	}
	jstring PlaybackState::getErrorMessage()
	{
		return __thiz.callObjectMethod(
			"getErrorMessage",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject PlaybackState::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jlong PlaybackState::getLastPositionUpdateTime()
	{
		return __thiz.callMethod<jlong>(
			"getLastPositionUpdateTime",
			"()J"
		);
	}
	jfloat PlaybackState::getPlaybackSpeed()
	{
		return __thiz.callMethod<jfloat>(
			"getPlaybackSpeed",
			"()F"
		);
	}
	jlong PlaybackState::getPosition()
	{
		return __thiz.callMethod<jlong>(
			"getPosition",
			"()J"
		);
	}
	jint PlaybackState::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jstring PlaybackState::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PlaybackState::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::media::session

namespace android::media::session
{
	class PlaybackState : public __jni_impl::android::media::session::PlaybackState
	{
	public:
		PlaybackState(QAndroidJniObject obj) { __thiz = obj; }
		PlaybackState()
		{
			__constructor();
		}
	};
} // namespace android::media::session

#endif // ANDROID_MEDIA_SESSION_PLAYBACKSTATE

