#include "../../content/Intent.hpp"
#include "./TvInputService_RecordingSession.hpp"
#include "./TvInputService_Session.hpp"
#include "../../../JString.hpp"
#include "./TvInputService.hpp"

namespace android::media::tv
{
	// Fields
	jint TvInputService::PRIORITY_HINT_USE_CASE_TYPE_BACKGROUND()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputService",
			"PRIORITY_HINT_USE_CASE_TYPE_BACKGROUND"
		);
	}
	jint TvInputService::PRIORITY_HINT_USE_CASE_TYPE_LIVE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputService",
			"PRIORITY_HINT_USE_CASE_TYPE_LIVE"
		);
	}
	jint TvInputService::PRIORITY_HINT_USE_CASE_TYPE_PLAYBACK()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputService",
			"PRIORITY_HINT_USE_CASE_TYPE_PLAYBACK"
		);
	}
	jint TvInputService::PRIORITY_HINT_USE_CASE_TYPE_RECORD()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputService",
			"PRIORITY_HINT_USE_CASE_TYPE_RECORD"
		);
	}
	jint TvInputService::PRIORITY_HINT_USE_CASE_TYPE_SCAN()
	{
		return getStaticField<jint>(
			"android.media.tv.TvInputService",
			"PRIORITY_HINT_USE_CASE_TYPE_SCAN"
		);
	}
	JString TvInputService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	JString TvInputService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.media.tv.TvInputService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	TvInputService::TvInputService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	TvInputService::TvInputService()
		: android::app::Service(
			"android.media.tv.TvInputService",
			"()V"
		) {}
	
	// Methods
	JObject TvInputService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	android::media::tv::TvInputService_RecordingSession TvInputService::onCreateRecordingSession(JString arg0)
	{
		return callObjectMethod(
			"onCreateRecordingSession",
			"(Ljava/lang/String;)Landroid/media/tv/TvInputService$RecordingSession;",
			arg0.object<jstring>()
		);
	}
	android::media::tv::TvInputService_RecordingSession TvInputService::onCreateRecordingSession(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"onCreateRecordingSession",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/media/tv/TvInputService$RecordingSession;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	android::media::tv::TvInputService_Session TvInputService::onCreateSession(JString arg0)
	{
		return callObjectMethod(
			"onCreateSession",
			"(Ljava/lang/String;)Landroid/media/tv/TvInputService$Session;",
			arg0.object<jstring>()
		);
	}
	android::media::tv::TvInputService_Session TvInputService::onCreateSession(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"onCreateSession",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/media/tv/TvInputService$Session;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
} // namespace android::media::tv

