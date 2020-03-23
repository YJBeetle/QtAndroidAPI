#pragma once

#ifndef ANDROID_MEDIA_MEDIAEXTRACTOR_METRICSCONSTANTS
#define ANDROID_MEDIA_MEDIAEXTRACTOR_METRICSCONSTANTS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class MediaExtractor_MetricsConstants : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject FORMAT();
		static QAndroidJniObject MIME_TYPE();
		static QAndroidJniObject TRACKS();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	QAndroidJniObject MediaExtractor_MetricsConstants::FORMAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaExtractor$MetricsConstants",
			"FORMAT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaExtractor_MetricsConstants::MIME_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaExtractor$MetricsConstants",
			"MIME_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaExtractor_MetricsConstants::TRACKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaExtractor$MetricsConstants",
			"TRACKS",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void MediaExtractor_MetricsConstants::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaExtractor$MetricsConstants",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaExtractor_MetricsConstants : public __jni_impl::android::media::MediaExtractor_MetricsConstants
	{
	public:
		MediaExtractor_MetricsConstants(QAndroidJniObject obj) { __thiz = obj; }
		MediaExtractor_MetricsConstants()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIAEXTRACTOR_METRICSCONSTANTS

