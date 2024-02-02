#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::adselection
{
	class AdSelectionConfig;
}

namespace android::adservices::adselection
{
	class RemoveAdSelectionOverrideRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoveAdSelectionOverrideRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoveAdSelectionOverrideRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RemoveAdSelectionOverrideRequest(android::adservices::adselection::AdSelectionConfig arg0);
		
		// Methods
		android::adservices::adselection::AdSelectionConfig getAdSelectionConfig() const;
	};
} // namespace android::adservices::adselection

