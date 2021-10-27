#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::service::media
{
	class MediaBrowserService;
}

namespace __jni_impl::android::service::media
{
	class MediaBrowserService_Result : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void detach();
		void sendResult(jobject arg0);
	};
} // namespace __jni_impl::android::service::media

#include "MediaBrowserService.hpp"

namespace __jni_impl::android::service::media
{
	// Fields
	
	// Constructors
	void MediaBrowserService_Result::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.media.MediaBrowserService$Result",
			"(V)V");
	}
	
	// Methods
	void MediaBrowserService_Result::detach()
	{
		__thiz.callMethod<void>(
			"detach",
			"()V"
		);
	}
	void MediaBrowserService_Result::sendResult(jobject arg0)
	{
		__thiz.callMethod<void>(
			"sendResult",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace __jni_impl::android::service::media

namespace android::service::media
{
	class MediaBrowserService_Result : public __jni_impl::android::service::media::MediaBrowserService_Result
	{
	public:
		MediaBrowserService_Result(QAndroidJniObject obj) { __thiz = obj; }
		MediaBrowserService_Result()
		{
			__constructor();
		}
	};
} // namespace android::service::media

