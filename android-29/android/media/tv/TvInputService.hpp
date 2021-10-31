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
		static jstring SERVICE_INTERFACE();
		static jstring SERVICE_META_DATA();
		
		// QJniObject forward
		template<typename ...Ts> explicit TvInputService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		TvInputService(QJniObject obj);
		
		// Constructors
		TvInputService();
		
		// Methods
		__JniBaseClass onBind(android::content::Intent arg0);
		android::media::tv::TvInputService_RecordingSession onCreateRecordingSession(jstring arg0);
		android::media::tv::TvInputService_Session onCreateSession(jstring arg0);
	};
} // namespace android::media::tv

