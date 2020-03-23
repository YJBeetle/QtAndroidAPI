#pragma once

#ifndef ANDROID_MEDIA_TV_TVTRACKINFO
#define ANDROID_MEDIA_TV_TVTRACKINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::media::tv
{
	class TvTrackInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint TYPE_AUDIO();
		static jint TYPE_SUBTITLE();
		static jint TYPE_VIDEO();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject getId();
		jint getType();
		QAndroidJniObject getLanguage();
		QAndroidJniObject getExtra();
		jint getAudioChannelCount();
		jint getAudioSampleRate();
		jint getVideoWidth();
		jint getVideoHeight();
		jfloat getVideoFrameRate();
		jfloat getVideoPixelAspectRatio();
		jbyte getVideoActiveFormatDescription();
		QAndroidJniObject getDescription();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::media::tv

#include "../../os/Parcel.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::media::tv
{
	// Fields
	QAndroidJniObject TvTrackInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvTrackInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint TvTrackInfo::TYPE_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvTrackInfo",
			"TYPE_AUDIO");
	}
	jint TvTrackInfo::TYPE_SUBTITLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvTrackInfo",
			"TYPE_SUBTITLE");
	}
	jint TvTrackInfo::TYPE_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvTrackInfo",
			"TYPE_VIDEO");
	}
	
	// Constructors
	void TvTrackInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvTrackInfo",
			"(V)V");
	}
	
	// Methods
	jboolean TvTrackInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint TvTrackInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject TvTrackInfo::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;");
	}
	jint TvTrackInfo::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I");
	}
	QAndroidJniObject TvTrackInfo::getLanguage()
	{
		return __thiz.callObjectMethod(
			"getLanguage",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TvTrackInfo::getExtra()
	{
		return __thiz.callObjectMethod(
			"getExtra",
			"()Landroid/os/Bundle;");
	}
	jint TvTrackInfo::getAudioChannelCount()
	{
		return __thiz.callMethod<jint>(
			"getAudioChannelCount",
			"()I");
	}
	jint TvTrackInfo::getAudioSampleRate()
	{
		return __thiz.callMethod<jint>(
			"getAudioSampleRate",
			"()I");
	}
	jint TvTrackInfo::getVideoWidth()
	{
		return __thiz.callMethod<jint>(
			"getVideoWidth",
			"()I");
	}
	jint TvTrackInfo::getVideoHeight()
	{
		return __thiz.callMethod<jint>(
			"getVideoHeight",
			"()I");
	}
	jfloat TvTrackInfo::getVideoFrameRate()
	{
		return __thiz.callMethod<jfloat>(
			"getVideoFrameRate",
			"()F");
	}
	jfloat TvTrackInfo::getVideoPixelAspectRatio()
	{
		return __thiz.callMethod<jfloat>(
			"getVideoPixelAspectRatio",
			"()F");
	}
	jbyte TvTrackInfo::getVideoActiveFormatDescription()
	{
		return __thiz.callMethod<jbyte>(
			"getVideoActiveFormatDescription",
			"()B");
	}
	QAndroidJniObject TvTrackInfo::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;");
	}
	jint TvTrackInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void TvTrackInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvTrackInfo : public __jni_impl::android::media::tv::TvTrackInfo
	{
	public:
		TvTrackInfo(QAndroidJniObject obj) { __thiz = obj; }
		TvTrackInfo()
		{
			__constructor();
		}
	};
} // namespace android::media::tv

#endif // ANDROID_MEDIA_TV_TVTRACKINFO

