#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::common
{
	class AdTechIdentifier;
}
namespace android::adservices::customaudience
{
	class RemoveCustomAudienceOverrideRequest;
}
class JString;

namespace android::adservices::customaudience
{
	class RemoveCustomAudienceOverrideRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoveCustomAudienceOverrideRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoveCustomAudienceOverrideRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RemoveCustomAudienceOverrideRequest_Builder();
		
		// Methods
		android::adservices::customaudience::RemoveCustomAudienceOverrideRequest build() const;
		android::adservices::customaudience::RemoveCustomAudienceOverrideRequest_Builder setBuyer(android::adservices::common::AdTechIdentifier arg0) const;
		android::adservices::customaudience::RemoveCustomAudienceOverrideRequest_Builder setName(JString arg0) const;
	};
} // namespace android::adservices::customaudience

