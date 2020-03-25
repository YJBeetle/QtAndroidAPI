#pragma once

#ifndef ANDROID_MEDIA_MEDIAPLAYER_PROVISIONINGNETWORKERROREXCEPTION
#define ANDROID_MEDIA_MEDIAPLAYER_PROVISIONINGNETWORKERROREXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "MediaDrmException.hpp"


namespace __jni_impl::android::media
{
	class MediaPlayer_ProvisioningNetworkErrorException : public __jni_impl::android::media::MediaDrmException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaPlayer_ProvisioningNetworkErrorException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaPlayer$ProvisioningNetworkErrorException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaPlayer_ProvisioningNetworkErrorException : public __jni_impl::android::media::MediaPlayer_ProvisioningNetworkErrorException
	{
	public:
		MediaPlayer_ProvisioningNetworkErrorException(QAndroidJniObject obj) { __thiz = obj; }
		MediaPlayer_ProvisioningNetworkErrorException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIAPLAYER_PROVISIONINGNETWORKERROREXCEPTION

