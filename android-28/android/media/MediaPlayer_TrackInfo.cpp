#include "./MediaFormat.hpp"
#include "../os/Parcel.hpp"
#include "./MediaPlayer_TrackInfo.hpp"

namespace android::media
{
	// Fields
	jint MediaPlayer_TrackInfo::MEDIA_TRACK_TYPE_AUDIO()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer$TrackInfo",
			"MEDIA_TRACK_TYPE_AUDIO"
		);
	}
	jint MediaPlayer_TrackInfo::MEDIA_TRACK_TYPE_METADATA()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer$TrackInfo",
			"MEDIA_TRACK_TYPE_METADATA"
		);
	}
	jint MediaPlayer_TrackInfo::MEDIA_TRACK_TYPE_SUBTITLE()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer$TrackInfo",
			"MEDIA_TRACK_TYPE_SUBTITLE"
		);
	}
	jint MediaPlayer_TrackInfo::MEDIA_TRACK_TYPE_TIMEDTEXT()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer$TrackInfo",
			"MEDIA_TRACK_TYPE_TIMEDTEXT"
		);
	}
	jint MediaPlayer_TrackInfo::MEDIA_TRACK_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer$TrackInfo",
			"MEDIA_TRACK_TYPE_UNKNOWN"
		);
	}
	jint MediaPlayer_TrackInfo::MEDIA_TRACK_TYPE_VIDEO()
	{
		return getStaticField<jint>(
			"android.media.MediaPlayer$TrackInfo",
			"MEDIA_TRACK_TYPE_VIDEO"
		);
	}
	
	// QAndroidJniObject forward
	MediaPlayer_TrackInfo::MediaPlayer_TrackInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint MediaPlayer_TrackInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::media::MediaFormat MediaPlayer_TrackInfo::getFormat()
	{
		return callObjectMethod(
			"getFormat",
			"()Landroid/media/MediaFormat;"
		);
	}
	jstring MediaPlayer_TrackInfo::getLanguage()
	{
		return callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaPlayer_TrackInfo::getTrackType()
	{
		return callMethod<jint>(
			"getTrackType",
			"()I"
		);
	}
	jstring MediaPlayer_TrackInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void MediaPlayer_TrackInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

