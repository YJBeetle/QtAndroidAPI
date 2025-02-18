#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::common
{
	class AdTechIdentifier;
}
class JObject;
class JString;

namespace android::adservices::customaudience
{
	class LeaveCustomAudienceRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LeaveCustomAudienceRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LeaveCustomAudienceRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::adservices::common::AdTechIdentifier getBuyer() const;
		JString getName() const;
		jint hashCode() const;
	};
} // namespace android::adservices::customaudience

