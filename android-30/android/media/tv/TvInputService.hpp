#pragma once

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
class JString;

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
		static JString SERVICE_INTERFACE();
		static JString SERVICE_META_DATA();
		
		// QJniObject forward
		template<typename ...Ts> explicit TvInputService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		TvInputService(QJniObject obj);
		
		// Constructors
		TvInputService();
		
		// Methods
		JObject onBind(android::content::Intent arg0);
		android::media::tv::TvInputService_RecordingSession onCreateRecordingSession(JString arg0);
		android::media::tv::TvInputService_RecordingSession onCreateRecordingSession(JString arg0, JString arg1);
		android::media::tv::TvInputService_Session onCreateSession(JString arg0);
		android::media::tv::TvInputService_Session onCreateSession(JString arg0, JString arg1);
	};
} // namespace android::media::tv

