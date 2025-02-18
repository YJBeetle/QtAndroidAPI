#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::adselection
{
	class AdSelectionFromOutcomesConfig;
}
namespace android::adservices::common
{
	class AdSelectionSignals;
}
class JString;

namespace android::adservices::adselection
{
	class AddAdSelectionFromOutcomesOverrideRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AddAdSelectionFromOutcomesOverrideRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AddAdSelectionFromOutcomesOverrideRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AddAdSelectionFromOutcomesOverrideRequest(android::adservices::adselection::AdSelectionFromOutcomesConfig arg0, JString arg1, android::adservices::common::AdSelectionSignals arg2);
		
		// Methods
		android::adservices::adselection::AdSelectionFromOutcomesConfig getAdSelectionFromOutcomesConfig() const;
		JString getOutcomeSelectionLogicJs() const;
		android::adservices::common::AdSelectionSignals getOutcomeSelectionTrustedSignals() const;
	};
} // namespace android::adservices::adselection

