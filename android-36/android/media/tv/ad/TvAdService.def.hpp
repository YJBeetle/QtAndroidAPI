#pragma once

#include "../../../app/Service.def.hpp"

namespace android::content
{
	class Intent;
}
namespace android::media::tv::ad
{
	class TvAdService_Session;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::media::tv::ad
{
	class TvAdService : public android::app::Service
	{
	public:
		// Fields
		static JString SERVICE_INTERFACE();
		static JString SERVICE_META_DATA();
		
		// QJniObject forward
		template<typename ...Ts> explicit TvAdService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		TvAdService(QJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		TvAdService();
		
		// Methods
		void onAppLinkCommand(android::os::Bundle arg0) const;
		JObject onBind(android::content::Intent arg0) const;
		android::media::tv::ad::TvAdService_Session onCreateSession(JString arg0, JString arg1) const;
	};
} // namespace android::media::tv::ad

