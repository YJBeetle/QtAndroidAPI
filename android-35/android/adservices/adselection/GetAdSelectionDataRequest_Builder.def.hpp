#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::adselection
{
	class GetAdSelectionDataRequest;
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
	class GetAdSelectionDataRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GetAdSelectionDataRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetAdSelectionDataRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		GetAdSelectionDataRequest_Builder();
		
		// Methods
		android::adservices::adselection::GetAdSelectionDataRequest build() const;
		android::adservices::adselection::GetAdSelectionDataRequest_Builder setCoordinatorOriginUri(android::net::Uri arg0) const;
		android::adservices::adselection::GetAdSelectionDataRequest_Builder setSeller(android::adservices::common::AdTechIdentifier arg0) const;
	};
} // namespace android::adservices::adselection

