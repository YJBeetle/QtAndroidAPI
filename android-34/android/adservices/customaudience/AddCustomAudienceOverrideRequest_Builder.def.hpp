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
namespace android::adservices::customaudience
{
	class AddCustomAudienceOverrideRequest;
}
class JString;

namespace android::adservices::customaudience
{
	class AddCustomAudienceOverrideRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AddCustomAudienceOverrideRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AddCustomAudienceOverrideRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AddCustomAudienceOverrideRequest_Builder();
		
		// Methods
		android::adservices::customaudience::AddCustomAudienceOverrideRequest build() const;
		android::adservices::customaudience::AddCustomAudienceOverrideRequest_Builder setBiddingLogicJs(JString arg0) const;
		android::adservices::customaudience::AddCustomAudienceOverrideRequest_Builder setBuyer(android::adservices::common::AdTechIdentifier arg0) const;
		android::adservices::customaudience::AddCustomAudienceOverrideRequest_Builder setName(JString arg0) const;
		android::adservices::customaudience::AddCustomAudienceOverrideRequest_Builder setTrustedBiddingSignals(android::adservices::common::AdSelectionSignals arg0) const;
	};
} // namespace android::adservices::customaudience

