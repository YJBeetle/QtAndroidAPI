#pragma once

#ifndef ANDROID_MEDIA_MEDIAEXTRACTOR_CASINFO
#define ANDROID_MEDIA_MEDIAEXTRACTOR_CASINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaCas_Session;
}

namespace __jni_impl::android::media
{
	class MediaExtractor_CasInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getSystemId();
		QAndroidJniObject getPrivateData();
		QAndroidJniObject getSession();
	};
} // namespace __jni_impl::android::media

#include "MediaCas_Session.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaExtractor_CasInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaExtractor$CasInfo",
			"(V)V");
	}
	
	// Methods
	jint MediaExtractor_CasInfo::getSystemId()
	{
		return __thiz.callMethod<jint>(
			"getSystemId",
			"()I");
	}
	QAndroidJniObject MediaExtractor_CasInfo::getPrivateData()
	{
		return __thiz.callObjectMethod(
			"getPrivateData",
			"()[B");
	}
	QAndroidJniObject MediaExtractor_CasInfo::getSession()
	{
		return __thiz.callObjectMethod(
			"getSession",
			"()Landroid/media/MediaCas$Session;");
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaExtractor_CasInfo : public __jni_impl::android::media::MediaExtractor_CasInfo
	{
	public:
		MediaExtractor_CasInfo(QAndroidJniObject obj) { __thiz = obj; }
		MediaExtractor_CasInfo()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIAEXTRACTOR_CASINFO

