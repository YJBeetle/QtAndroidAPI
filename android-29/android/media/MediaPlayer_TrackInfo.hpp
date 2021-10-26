#pragma once

#ifndef ANDROID_MEDIA_MEDIAPLAYER_TRACKINFO
#define ANDROID_MEDIA_MEDIAPLAYER_TRACKINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::media
{
	class MediaFormat;
}

namespace __jni_impl::android::media
{
	class MediaPlayer_TrackInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint MEDIA_TRACK_TYPE_AUDIO();
		static jint MEDIA_TRACK_TYPE_METADATA();
		static jint MEDIA_TRACK_TYPE_SUBTITLE();
		static jint MEDIA_TRACK_TYPE_TIMEDTEXT();
		static jint MEDIA_TRACK_TYPE_UNKNOWN();
		static jint MEDIA_TRACK_TYPE_VIDEO();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jstring getLanguage();
		QAndroidJniObject getFormat();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getTrackType();
	};
} // namespace __jni_impl::android::media

#include "../os/Parcel.hpp"
#include "MediaFormat.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint MediaPlayer_TrackInfo::MEDIA_TRACK_TYPE_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer$TrackInfo",
			"MEDIA_TRACK_TYPE_AUDIO"
		);
	}
	jint MediaPlayer_TrackInfo::MEDIA_TRACK_TYPE_METADATA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer$TrackInfo",
			"MEDIA_TRACK_TYPE_METADATA"
		);
	}
	jint MediaPlayer_TrackInfo::MEDIA_TRACK_TYPE_SUBTITLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer$TrackInfo",
			"MEDIA_TRACK_TYPE_SUBTITLE"
		);
	}
	jint MediaPlayer_TrackInfo::MEDIA_TRACK_TYPE_TIMEDTEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer$TrackInfo",
			"MEDIA_TRACK_TYPE_TIMEDTEXT"
		);
	}
	jint MediaPlayer_TrackInfo::MEDIA_TRACK_TYPE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer$TrackInfo",
			"MEDIA_TRACK_TYPE_UNKNOWN"
		);
	}
	jint MediaPlayer_TrackInfo::MEDIA_TRACK_TYPE_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaPlayer$TrackInfo",
			"MEDIA_TRACK_TYPE_VIDEO"
		);
	}
	
	// Constructors
	void MediaPlayer_TrackInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaPlayer$TrackInfo",
			"(V)V");
	}
	
	// Methods
	jstring MediaPlayer_TrackInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaPlayer_TrackInfo::getLanguage()
	{
		return __thiz.callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaPlayer_TrackInfo::getFormat()
	{
		return __thiz.callObjectMethod(
			"getFormat",
			"()Landroid/media/MediaFormat;"
		);
	}
	jint MediaPlayer_TrackInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void MediaPlayer_TrackInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint MediaPlayer_TrackInfo::getTrackType()
	{
		return __thiz.callMethod<jint>(
			"getTrackType",
			"()I"
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaPlayer_TrackInfo : public __jni_impl::android::media::MediaPlayer_TrackInfo
	{
	public:
		MediaPlayer_TrackInfo(QAndroidJniObject obj) { __thiz = obj; }
		MediaPlayer_TrackInfo()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIAPLAYER_TRACKINFO

