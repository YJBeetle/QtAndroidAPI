#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::media
{
	class PlaybackParams : public __JniBaseClass
	{
	public:
		// Fields
		static jint AUDIO_FALLBACK_MODE_DEFAULT();
		static jint AUDIO_FALLBACK_MODE_FAIL();
		static jint AUDIO_FALLBACK_MODE_MUTE();
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject allowDefaults();
		jint describeContents();
		jint getAudioFallbackMode();
		jfloat getPitch();
		jfloat getSpeed();
		QAndroidJniObject setAudioFallbackMode(jint arg0);
		QAndroidJniObject setPitch(jfloat arg0);
		QAndroidJniObject setSpeed(jfloat arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::media

#include "../os/Parcel.hpp"

namespace __jni_impl::android::media
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
	
	// Constructors
	void PlaybackParams::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.PlaybackParams",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject PlaybackParams::allowDefaults()
	{
		return __thiz.callObjectMethod(
			"allowDefaults",
			"()Landroid/media/PlaybackParams;"
		);
	}
	jint PlaybackParams::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint PlaybackParams::getAudioFallbackMode()
	{
		return __thiz.callMethod<jint>(
			"getAudioFallbackMode",
			"()I"
		);
	}
	jfloat PlaybackParams::getPitch()
	{
		return __thiz.callMethod<jfloat>(
			"getPitch",
			"()F"
		);
	}
	jfloat PlaybackParams::getSpeed()
	{
		return __thiz.callMethod<jfloat>(
			"getSpeed",
			"()F"
		);
	}
	QAndroidJniObject PlaybackParams::setAudioFallbackMode(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setAudioFallbackMode",
			"(I)Landroid/media/PlaybackParams;",
			arg0
		);
	}
	QAndroidJniObject PlaybackParams::setPitch(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"setPitch",
			"(F)Landroid/media/PlaybackParams;",
			arg0
		);
	}
	QAndroidJniObject PlaybackParams::setSpeed(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"setSpeed",
			"(F)Landroid/media/PlaybackParams;",
			arg0
		);
	}
	void PlaybackParams::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class PlaybackParams : public __jni_impl::android::media::PlaybackParams
	{
	public:
		PlaybackParams(QAndroidJniObject obj) { __thiz = obj; }
		PlaybackParams()
		{
			__constructor();
		}
	};
} // namespace android::media

