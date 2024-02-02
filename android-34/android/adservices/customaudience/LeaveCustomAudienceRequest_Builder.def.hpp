#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::common
{
	class AdTechIdentifier;
}
namespace android::adservices::customaudience
{
	class LeaveCustomAudienceRequest;
}
class JString;

namespace android::adservices::customaudience
{
	class LeaveCustomAudienceRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LeaveCustomAudienceRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LeaveCustomAudienceRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		LeaveCustomAudienceRequest_Builder();
		
		// Methods
		android::adservices::customaudience::LeaveCustomAudienceRequest build() const;
		android::adservices::customaudience::LeaveCustomAudienceRequest_Builder setBuyer(android::adservices::common::AdTechIdentifier arg0) const;
		android::adservices::customaudience::LeaveCustomAudienceRequest_Builder setName(JString arg0) const;
	};
} // namespace android::adservices::customaudience

