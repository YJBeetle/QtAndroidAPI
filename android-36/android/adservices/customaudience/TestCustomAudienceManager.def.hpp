#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::customaudience
{
	class AddCustomAudienceOverrideRequest;
}
namespace android::adservices::customaudience
{
	class RemoveCustomAudienceOverrideRequest;
}

namespace android::adservices::customaudience
{
	class TestCustomAudienceManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TestCustomAudienceManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TestCustomAudienceManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void overrideCustomAudienceRemoteInfo(android::adservices::customaudience::AddCustomAudienceOverrideRequest arg0, JObject arg1, JObject arg2) const;
		void removeCustomAudienceRemoteInfoOverride(android::adservices::customaudience::RemoveCustomAudienceOverrideRequest arg0, JObject arg1, JObject arg2) const;
		void resetAllCustomAudienceOverrides(JObject arg0, JObject arg1) const;
	};
} // namespace android::adservices::customaudience

