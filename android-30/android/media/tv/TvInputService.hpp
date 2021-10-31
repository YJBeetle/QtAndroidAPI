#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::media::tv
{
	class TvInputService_RecordingSession;
}
namespace android::media::tv
{
	class TvInputService_Session;
}

namespace android::media::tv
{
	class TvInputService : public android::app::Service
	{
	public:
		// Fields
		static jint PRIORITY_HINT_USE_CASE_TYPE_BACKGROUND();
		static jint PRIORITY_HINT_USE_CASE_TYPE_LIVE();
		static jint PRIORITY_HINT_USE_CASE_TYPE_PLAYBACK();
		static jint PRIORITY_HINT_USE_CASE_TYPE_RECORD();
		static jint PRIORITY_HINT_USE_CASE_TYPE_SCAN();
		static jstring SERVICE_INTERFACE();
		static jstring SERVICE_META_DATA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvInputService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		TvInputService(QAndroidJniObject obj);
		
		// Constructors
		TvInputService();
		
		// Methods
		__JniBaseClass onBind(android::content::Intent arg0);
		android::media::tv::TvInputService_RecordingSession onCreateRecordingSession(jstring arg0);
		android::media::tv::TvInputService_RecordingSession onCreateRecordingSession(jstring arg0, jstring arg1);
		android::media::tv::TvInputService_Session onCreateSession(jstring arg0);
		android::media::tv::TvInputService_Session onCreateSession(jstring arg0, jstring arg1);
	};
} // namespace android::media::tv

