#pragma once

#ifndef ANDROID_MEDIA_MEDIADRM_PROVISIONREQUEST
#define ANDROID_MEDIA_MEDIADRM_PROVISIONREQUEST

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class MediaDrm_ProvisionRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getDefaultUrl();
		QAndroidJniObject getData();
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaDrm_ProvisionRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaDrm$ProvisionRequest",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MediaDrm_ProvisionRequest::getDefaultUrl()
	{
		return __thiz.callObjectMethod(
			"getDefaultUrl",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject MediaDrm_ProvisionRequest::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()[B");
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaDrm_ProvisionRequest : public __jni_impl::android::media::MediaDrm_ProvisionRequest
	{
	public:
		MediaDrm_ProvisionRequest(QAndroidJniObject obj) { __thiz = obj; }
		MediaDrm_ProvisionRequest()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIADRM_PROVISIONREQUEST

