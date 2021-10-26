#pragma once

#ifndef ANDROID_MEDIA_SESSION_MEDIACONTROLLER_PLAYBACKINFO
#define ANDROID_MEDIA_SESSION_MEDIACONTROLLER_PLAYBACKINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::media
{
	class AudioAttributes;
}

namespace __jni_impl::android::media::session
{
	class MediaController_PlaybackInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint PLAYBACK_TYPE_LOCAL();
		static jint PLAYBACK_TYPE_REMOTE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jint getPlaybackType();
		jint getVolumeControl();
		jint getMaxVolume();
		jint getCurrentVolume();
		QAndroidJniObject getAudioAttributes();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::media::session

#include "../../os/Parcel.hpp"
#include "../AudioAttributes.hpp"

namespace __jni_impl::android::media::session
{
	// Fields
	QAndroidJniObject MediaController_PlaybackInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.session.MediaController$PlaybackInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint MediaController_PlaybackInfo::PLAYBACK_TYPE_LOCAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.session.MediaController$PlaybackInfo",
			"PLAYBACK_TYPE_LOCAL"
		);
	}
	jint MediaController_PlaybackInfo::PLAYBACK_TYPE_REMOTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.session.MediaController$PlaybackInfo",
			"PLAYBACK_TYPE_REMOTE"
		);
	}
	
	// Constructors
	void MediaController_PlaybackInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.session.MediaController$PlaybackInfo",
			"(V)V");
	}
	
	// Methods
	jstring MediaController_PlaybackInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaController_PlaybackInfo::getPlaybackType()
	{
		return __thiz.callMethod<jint>(
			"getPlaybackType",
			"()I"
		);
	}
	jint MediaController_PlaybackInfo::getVolumeControl()
	{
		return __thiz.callMethod<jint>(
			"getVolumeControl",
			"()I"
		);
	}
	jint MediaController_PlaybackInfo::getMaxVolume()
	{
		return __thiz.callMethod<jint>(
			"getMaxVolume",
			"()I"
		);
	}
	jint MediaController_PlaybackInfo::getCurrentVolume()
	{
		return __thiz.callMethod<jint>(
			"getCurrentVolume",
			"()I"
		);
	}
	QAndroidJniObject MediaController_PlaybackInfo::getAudioAttributes()
	{
		return __thiz.callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	jint MediaController_PlaybackInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void MediaController_PlaybackInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class MediaController_PlaybackInfo : public __jni_impl::android::media::session::MediaController_PlaybackInfo
	{
	public:
		MediaController_PlaybackInfo(QAndroidJniObject obj) { __thiz = obj; }
		MediaController_PlaybackInfo()
		{
			__constructor();
		}
	};
} // namespace android::media::session

#endif // ANDROID_MEDIA_SESSION_MEDIACONTROLLER_PLAYBACKINFO

