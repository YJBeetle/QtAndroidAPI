#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class TetheringManager_TetheringRequest;
}
namespace android::net::wifi
{
	class SoftApConfiguration;
}

namespace android::net
{
	class TetheringManager_TetheringRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TetheringManager_TetheringRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TetheringManager_TetheringRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TetheringManager_TetheringRequest_Builder(jint arg0);
		
		// Methods
		android::net::TetheringManager_TetheringRequest build() const;
		android::net::TetheringManager_TetheringRequest_Builder setSoftApConfiguration(android::net::wifi::SoftApConfiguration arg0) const;
	};
} // namespace android::net

