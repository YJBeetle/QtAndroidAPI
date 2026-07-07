#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::adselection
{
	class AdSelectionFromOutcomesConfig;
}

namespace android::adservices::adselection
{
	class RemoveAdSelectionFromOutcomesOverrideRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoveAdSelectionFromOutcomesOverrideRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoveAdSelectionFromOutcomesOverrideRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RemoveAdSelectionFromOutcomesOverrideRequest(android::adservices::adselection::AdSelectionFromOutcomesConfig arg0);
		
		// Methods
		android::adservices::adselection::AdSelectionFromOutcomesConfig getAdSelectionFromOutcomesConfig() const;
	};
} // namespace android::adservices::adselection

