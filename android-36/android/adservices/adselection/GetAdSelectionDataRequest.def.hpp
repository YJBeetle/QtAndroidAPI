#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::adselection
{
	class SellerConfiguration;
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
	class GetAdSelectionDataRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GetAdSelectionDataRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetAdSelectionDataRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::net::Uri getCoordinatorOriginUri() const;
		android::adservices::common::AdTechIdentifier getSeller() const;
		android::adservices::adselection::SellerConfiguration getSellerConfiguration() const;
	};
} // namespace android::adservices::adselection

