#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::common
{
	class AdSelectionSignals;
}
namespace android::adservices::customaudience
{
	class PartialCustomAudience;
}
class JString;
namespace java::time
{
	class Instant;
}

namespace android::adservices::customaudience
{
	class PartialCustomAudience_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PartialCustomAudience_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PartialCustomAudience_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PartialCustomAudience_Builder(JString arg0);
		
		// Methods
		android::adservices::customaudience::PartialCustomAudience build() const;
		android::adservices::customaudience::PartialCustomAudience_Builder setActivationTime(java::time::Instant arg0) const;
		android::adservices::customaudience::PartialCustomAudience_Builder setExpirationTime(java::time::Instant arg0) const;
		android::adservices::customaudience::PartialCustomAudience_Builder setUserBiddingSignals(android::adservices::common::AdSelectionSignals arg0) const;
	};
} // namespace android::adservices::customaudience

