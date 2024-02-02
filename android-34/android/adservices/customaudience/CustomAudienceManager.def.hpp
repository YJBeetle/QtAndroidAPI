#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::customaudience
{
	class JoinCustomAudienceRequest;
}
namespace android::adservices::customaudience
{
	class LeaveCustomAudienceRequest;
}
namespace android::adservices::customaudience
{
	class TestCustomAudienceManager;
}
namespace android::content
{
	class Context;
}

namespace android::adservices::customaudience
{
	class CustomAudienceManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CustomAudienceManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CustomAudienceManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::adservices::customaudience::CustomAudienceManager get(android::content::Context arg0);
		android::adservices::customaudience::TestCustomAudienceManager getTestCustomAudienceManager() const;
		void joinCustomAudience(android::adservices::customaudience::JoinCustomAudienceRequest arg0, JObject arg1, JObject arg2) const;
		void leaveCustomAudience(android::adservices::customaudience::LeaveCustomAudienceRequest arg0, JObject arg1, JObject arg2) const;
	};
} // namespace android::adservices::customaudience

