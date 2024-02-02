#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::customaudience
{
	class TrustedBiddingData;
}
namespace android::net
{
	class Uri;
}

namespace android::adservices::customaudience
{
	class TrustedBiddingData_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TrustedBiddingData_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TrustedBiddingData_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TrustedBiddingData_Builder();
		
		// Methods
		android::adservices::customaudience::TrustedBiddingData build() const;
		android::adservices::customaudience::TrustedBiddingData_Builder setTrustedBiddingKeys(JObject arg0) const;
		android::adservices::customaudience::TrustedBiddingData_Builder setTrustedBiddingUri(android::net::Uri arg0) const;
	};
} // namespace android::adservices::customaudience

