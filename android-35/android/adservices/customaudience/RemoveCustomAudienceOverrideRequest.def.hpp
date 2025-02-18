#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::common
{
	class AdTechIdentifier;
}
class JString;

namespace android::adservices::customaudience
{
	class RemoveCustomAudienceOverrideRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoveCustomAudienceOverrideRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoveCustomAudienceOverrideRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RemoveCustomAudienceOverrideRequest(android::adservices::common::AdTechIdentifier arg0, JString arg1);
		
		// Methods
		android::adservices::common::AdTechIdentifier getBuyer() const;
		JString getName() const;
	};
} // namespace android::adservices::customaudience

