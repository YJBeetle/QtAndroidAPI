#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::adselection
{
	class AdSelectionConfig;
}
namespace android::adservices::common
{
	class AdSelectionSignals;
}
namespace android::adservices::common
{
	class AdTechIdentifier;
}
namespace android::net
{
	class Uri;
}

namespace android::adservices::adselection
{
	class AdSelectionConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AdSelectionConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdSelectionConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AdSelectionConfig_Builder();
		
		// Methods
		android::adservices::adselection::AdSelectionConfig build() const;
		android::adservices::adselection::AdSelectionConfig_Builder setAdSelectionSignals(android::adservices::common::AdSelectionSignals arg0) const;
		android::adservices::adselection::AdSelectionConfig_Builder setCustomAudienceBuyers(JObject arg0) const;
		android::adservices::adselection::AdSelectionConfig_Builder setDecisionLogicUri(android::net::Uri arg0) const;
		android::adservices::adselection::AdSelectionConfig_Builder setPerBuyerSignals(JObject arg0) const;
		android::adservices::adselection::AdSelectionConfig_Builder setSeller(android::adservices::common::AdTechIdentifier arg0) const;
		android::adservices::adselection::AdSelectionConfig_Builder setSellerSignals(android::adservices::common::AdSelectionSignals arg0) const;
		android::adservices::adselection::AdSelectionConfig_Builder setTrustedScoringSignalsUri(android::net::Uri arg0) const;
	};
} // namespace android::adservices::adselection

