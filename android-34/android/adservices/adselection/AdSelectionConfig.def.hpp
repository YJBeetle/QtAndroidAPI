#pragma once

#include "../../../JObject.hpp"

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
namespace android::os
{
	class Parcel;
}
class JObject;

namespace android::adservices::adselection
{
	class AdSelectionConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AdSelectionConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdSelectionConfig(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::adservices::common::AdSelectionSignals getAdSelectionSignals() const;
		JObject getCustomAudienceBuyers() const;
		android::net::Uri getDecisionLogicUri() const;
		JObject getPerBuyerSignals() const;
		android::adservices::common::AdTechIdentifier getSeller() const;
		android::adservices::common::AdSelectionSignals getSellerSignals() const;
		android::net::Uri getTrustedScoringSignalsUri() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::adservices::adselection

