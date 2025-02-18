#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::common
{
	class AdFilters;
}
namespace android::adservices::common
{
	class AppInstallFilters;
}
namespace android::adservices::common
{
	class FrequencyCapFilters;
}

namespace android::adservices::common
{
	class AdFilters_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AdFilters_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdFilters_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AdFilters_Builder();
		
		// Methods
		android::adservices::common::AdFilters build() const;
		android::adservices::common::AdFilters_Builder setAppInstallFilters(android::adservices::common::AppInstallFilters arg0) const;
		android::adservices::common::AdFilters_Builder setFrequencyCapFilters(android::adservices::common::FrequencyCapFilters arg0) const;
	};
} // namespace android::adservices::common

