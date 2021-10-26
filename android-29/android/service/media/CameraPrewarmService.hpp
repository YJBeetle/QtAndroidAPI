#pragma once

#ifndef ANDROID_SERVICE_MEDIA_CAMERAPREWARMSERVICE
#define ANDROID_SERVICE_MEDIA_CAMERAPREWARMSERVICE

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::service::media
{
	class CameraPrewarmService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onPrewarm();
		void onCooldown(jboolean arg0);
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		jboolean onUnbind(__jni_impl::android::content::Intent arg0);
	};
} // namespace __jni_impl::android::service::media

#include "../../content/Intent.hpp"

namespace __jni_impl::android::service::media
{
	// Fields
	
	// Constructors
	void CameraPrewarmService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.media.CameraPrewarmService",
			"()V"
		);
	}
	
	// Methods
	void CameraPrewarmService::onPrewarm()
	{
		__thiz.callMethod<void>(
			"onPrewarm",
			"()V"
		);
	}
	void CameraPrewarmService::onCooldown(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"onCooldown",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject CameraPrewarmService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	jboolean CameraPrewarmService::onUnbind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onUnbind",
			"(Landroid/content/Intent;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::service::media

namespace android::service::media
{
	class CameraPrewarmService : public __jni_impl::android::service::media::CameraPrewarmService
	{
	public:
		CameraPrewarmService(QAndroidJniObject obj) { __thiz = obj; }
		CameraPrewarmService()
		{
			__constructor();
		}
	};
} // namespace android::service::media

#endif // ANDROID_SERVICE_MEDIA_CAMERAPREWARMSERVICE

