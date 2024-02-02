#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::customaudience
{
	class CustomAudience;
}
namespace android::adservices::customaudience
{
	class JoinCustomAudienceRequest;
}

namespace android::adservices::customaudience
{
	class JoinCustomAudienceRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JoinCustomAudienceRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JoinCustomAudienceRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		JoinCustomAudienceRequest_Builder();
		
		// Methods
		android::adservices::customaudience::JoinCustomAudienceRequest build() const;
		android::adservices::customaudience::JoinCustomAudienceRequest_Builder setCustomAudience(android::adservices::customaudience::CustomAudience arg0) const;
	};
} // namespace android::adservices::customaudience

