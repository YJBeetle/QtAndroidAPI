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
	class AdSelectionFromOutcomesConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AdSelectionFromOutcomesConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdSelectionFromOutcomesConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AdSelectionFromOutcomesConfig_Builder();
		
		// Methods
		android::adservices::adselection::AdSelectionFromOutcomesConfig build() const;
		android::adservices::adselection::AdSelectionFromOutcomesConfig_Builder setAdSelectionIds(JObject arg0) const;
		android::adservices::adselection::AdSelectionFromOutcomesConfig_Builder setSelectionLogicUri(android::net::Uri arg0) const;
		android::adservices::adselection::AdSelectionFromOutcomesConfig_Builder setSelectionSignals(android::adservices::common::AdSelectionSignals arg0) const;
		android::adservices::adselection::AdSelectionFromOutcomesConfig_Builder setSeller(android::adservices::common::AdTechIdentifier arg0) const;
	};
} // namespace android::adservices::adselection

