#pragma once

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
		QAndroidJniObject getPssh();
		jarray getSupportedSchemes();
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
	QAndroidJniObject MediaPlayer_DrmInfo::getPssh()
	{
		return __thiz.callObjectMethod(
			"getPssh",
			"()Ljava/util/Map;"
		);
	}
	jarray MediaPlayer_DrmInfo::getSupportedSchemes()
	{
		return __thiz.callObjectMethod(
			"getSupportedSchemes",
			"()[Ljava/util/UUID;"
		).object<jarray>();
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

