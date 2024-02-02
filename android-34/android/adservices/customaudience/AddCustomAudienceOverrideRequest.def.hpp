#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::common
{
	class AdSelectionSignals;
}
namespace android::adservices::common
{
	class AdTechIdentifier;
}
class JString;

namespace android::adservices::customaudience
{
	class AddCustomAudienceOverrideRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AddCustomAudienceOverrideRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AddCustomAudienceOverrideRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AddCustomAudienceOverrideRequest(android::adservices::common::AdTechIdentifier arg0, JString arg1, JString arg2, android::adservices::common::AdSelectionSignals arg3);
		
		// Methods
		JString getBiddingLogicJs() const;
		android::adservices::common::AdTechIdentifier getBuyer() const;
		JString getName() const;
		android::adservices::common::AdSelectionSignals getTrustedBiddingSignals() const;
	};
} // namespace android::adservices::customaudience

