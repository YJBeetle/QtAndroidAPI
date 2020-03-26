#pragma once

#ifndef ANDROID_MEDIA_MEDIAPLAYER_DRMINFO
#define ANDROID_MEDIA_MEDIAPLAYER_DRMINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::media
{
	class MediaPlayer_DrmInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jarray getSupportedSchemes();
		QAndroidJniObject getPssh();
	};
} // namespace __jni_impl::android::media

#include "../os/Parcel.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaPlayer_DrmInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaPlayer$DrmInfo",
			"(V)V");
	}
	
	// Methods
	jarray MediaPlayer_DrmInfo::getSupportedSchemes()
	{
		return __thiz.callObjectMethod(
			"getSupportedSchemes",
			"()[Ljava/util/UUID;"
		).object<jarray>();
	}
	QAndroidJniObject MediaPlayer_DrmInfo::getPssh()
	{
		return __thiz.callObjectMethod(
			"getPssh",
			"()Ljava/util/Map;"
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaPlayer_DrmInfo : public __jni_impl::android::media::MediaPlayer_DrmInfo
	{
	public:
		MediaPlayer_DrmInfo(QAndroidJniObject obj) { __thiz = obj; }
		MediaPlayer_DrmInfo()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIAPLAYER_DRMINFO

