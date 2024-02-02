#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::customaudience
{
	class CustomAudience;
}
class JObject;

namespace android::adservices::customaudience
{
	class JoinCustomAudienceRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JoinCustomAudienceRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JoinCustomAudienceRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::adservices::customaudience::CustomAudience getCustomAudience() const;
		jint hashCode() const;
	};
} // namespace android::adservices::customaudience

