#pragma once

#include "../../app/Service.def.hpp"

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
		static JString SERVICE_INTERFACE();
		static JString SERVICE_META_DATA();
		
		// QJniObject forward
		template<typename ...Ts> explicit TvInputService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		TvInputService(QJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		TvInputService();
		
		// Methods
		JObject onBind(android::content::Intent arg0) const;
		android::media::tv::TvInputService_RecordingSession onCreateRecordingSession(JString arg0) const;
		android::media::tv::TvInputService_Session onCreateSession(JString arg0) const;
	};
} // namespace android::media::tv

