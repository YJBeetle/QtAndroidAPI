#include "../../content/Intent.hpp"
#include "./TvInputService_RecordingSession.hpp"
#include "./TvInputService_Session.hpp"
#include "./TvInputService.hpp"

namespace android::media::tv
{
	// Fields
	jstring TvInputService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvInputService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvInputService::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvInputService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	TvInputService::TvInputService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TvInputService::TvInputService()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvInputService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject TvInputService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TvInputService::onCreateRecordingSession(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"onCreateRecordingSession",
			"(Ljava/lang/String;)Landroid/media/tv/TvInputService$RecordingSession;",
			arg0
		);
	}
	QAndroidJniObject TvInputService::onCreateSession(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"onCreateSession",
			"(Ljava/lang/String;)Landroid/media/tv/TvInputService$Session;",
			arg0
		);
	}
} // namespace android::media::tv

