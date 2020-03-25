#pragma once

#ifndef ANDROID_MEDIA_TV_TVINPUTSERVICE
#define ANDROID_MEDIA_TV_TVINPUTSERVICE

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace __jni_impl::android::media::tv
{
	class TvInputService_Session;
}
namespace __jni_impl::android::media::tv
{
	class TvInputService_RecordingSession;
}
namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::media::tv
{
	class TvInputService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static QAndroidJniObject SERVICE_INTERFACE();
		static QAndroidJniObject SERVICE_META_DATA();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onCreateSession(jstring arg0);
		QAndroidJniObject onCreateRecordingSession(jstring arg0);
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
	};
} // namespace __jni_impl::android::media::tv

#include "TvInputService_Session.hpp"
#include "TvInputService_RecordingSession.hpp"
#include "../../content/Intent.hpp"

namespace __jni_impl::android::media::tv
{
	// Fields
	QAndroidJniObject TvInputService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvInputService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvInputService::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvInputService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void TvInputService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvInputService",
			"()V");
	}
	
	// Methods
	QAndroidJniObject TvInputService::onCreateSession(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"onCreateSession",
			"(Ljava/lang/String;)Landroid/media/tv/TvInputService$Session;",
			arg0);
	}
	QAndroidJniObject TvInputService::onCreateRecordingSession(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"onCreateRecordingSession",
			"(Ljava/lang/String;)Landroid/media/tv/TvInputService$RecordingSession;",
			arg0);
	}
	QAndroidJniObject TvInputService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvInputService : public __jni_impl::android::media::tv::TvInputService
	{
	public:
		TvInputService(QAndroidJniObject obj) { __thiz = obj; }
		TvInputService()
		{
			__constructor();
		}
	};
} // namespace android::media::tv

#endif // ANDROID_MEDIA_TV_TVINPUTSERVICE

