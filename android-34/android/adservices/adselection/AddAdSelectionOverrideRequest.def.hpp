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
class JString;

namespace android::adservices::adselection
{
	class AddAdSelectionOverrideRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AddAdSelectionOverrideRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AddAdSelectionOverrideRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AddAdSelectionOverrideRequest(android::adservices::adselection::AdSelectionConfig arg0, JString arg1, android::adservices::common::AdSelectionSignals arg2);
		
		// Methods
		android::adservices::adselection::AdSelectionConfig getAdSelectionConfig() const;
		JString getDecisionLogicJs() const;
		android::adservices::common::AdSelectionSignals getTrustedScoringSignals() const;
	};
} // namespace android::adservices::adselection

