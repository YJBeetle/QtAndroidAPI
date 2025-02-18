#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::common
{
	class AppInstallFilters;
}

namespace android::adservices::common
{
	class AppInstallFilters_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppInstallFilters_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppInstallFilters_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AppInstallFilters_Builder();
		
		// Methods
		android::adservices::common::AppInstallFilters build() const;
		android::adservices::common::AppInstallFilters_Builder setPackageNames(JObject arg0) const;
	};
} // namespace android::adservices::common

