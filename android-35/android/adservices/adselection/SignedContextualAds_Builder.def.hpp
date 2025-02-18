#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::adservices::adselection
{
	class SignedContextualAds;
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
	class SignedContextualAds_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SignedContextualAds_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SignedContextualAds_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SignedContextualAds_Builder();
		SignedContextualAds_Builder(android::adservices::adselection::SignedContextualAds arg0);
		
		// Methods
		android::adservices::adselection::SignedContextualAds build() const;
		android::adservices::adselection::SignedContextualAds_Builder setAdsWithBid(JObject arg0) const;
		android::adservices::adselection::SignedContextualAds_Builder setBuyer(android::adservices::common::AdTechIdentifier arg0) const;
		android::adservices::adselection::SignedContextualAds_Builder setDecisionLogicUri(android::net::Uri arg0) const;
		android::adservices::adselection::SignedContextualAds_Builder setSignature(JByteArray arg0) const;
	};
} // namespace android::adservices::adselection

