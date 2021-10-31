#include "../os/Parcel.hpp"
#include "./PlaybackParams.hpp"

namespace android::media
{
	// Fields
	jint PlaybackParams::AUDIO_FALLBACK_MODE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.PlaybackParams",
			"AUDIO_FALLBACK_MODE_DEFAULT"
		);
	}
	jint PlaybackParams::AUDIO_FALLBACK_MODE_FAIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.PlaybackParams",
			"AUDIO_FALLBACK_MODE_FAIL"
		);
	}
	jint PlaybackParams::AUDIO_FALLBACK_MODE_MUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.PlaybackParams",
			"AUDIO_FALLBACK_MODE_MUTE"
		);
	}
	QAndroidJniObject PlaybackParams::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.PlaybackParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	PlaybackParams::PlaybackParams(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PlaybackParams::PlaybackParams()
		: __JniBaseClass(
			"android.media.PlaybackParams",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject PlaybackParams::allowDefaults()
	{
		return callObjectMethod(
			"allowDefaults",
			"()Landroid/media/PlaybackParams;"
		);
	}
	jint PlaybackParams::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint PlaybackParams::getAudioFallbackMode()
	{
		return callMethod<jint>(
			"getAudioFallbackMode",
			"()I"
		);
	}
	jfloat PlaybackParams::getPitch()
	{
		return callMethod<jfloat>(
			"getPitch",
			"()F"
		);
	}
	jfloat PlaybackParams::getSpeed()
	{
		return callMethod<jfloat>(
			"getSpeed",
			"()F"
		);
	}
	QAndroidJniObject PlaybackParams::setAudioFallbackMode(jint arg0)
	{
		return callObjectMethod(
			"setAudioFallbackMode",
			"(I)Landroid/media/PlaybackParams;",
			arg0
		);
	}
	QAndroidJniObject PlaybackParams::setPitch(jfloat arg0)
	{
		return callObjectMethod(
			"setPitch",
			"(F)Landroid/media/PlaybackParams;",
			arg0
		);
	}
	QAndroidJniObject PlaybackParams::setSpeed(jfloat arg0)
	{
		return callObjectMethod(
			"setSpeed",
			"(F)Landroid/media/PlaybackParams;",
			arg0
		);
	}
	void PlaybackParams::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

