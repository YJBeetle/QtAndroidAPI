#pragma once

#ifndef ANDROID_MEDIA_MEDIACAS_PLUGINDESCRIPTOR
#define ANDROID_MEDIA_MEDIACAS_PLUGINDESCRIPTOR

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class MediaCas_PluginDescriptor : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getName();
		QAndroidJniObject toString();
		jint getSystemId();
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaCas_PluginDescriptor::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCas$PluginDescriptor",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MediaCas_PluginDescriptor::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject MediaCas_PluginDescriptor::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint MediaCas_PluginDescriptor::getSystemId()
	{
		return __thiz.callMethod<jint>(
			"getSystemId",
			"()I");
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCas_PluginDescriptor : public __jni_impl::android::media::MediaCas_PluginDescriptor
	{
	public:
		MediaCas_PluginDescriptor(QAndroidJniObject obj) { __thiz = obj; }
		MediaCas_PluginDescriptor()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACAS_PLUGINDESCRIPTOR

