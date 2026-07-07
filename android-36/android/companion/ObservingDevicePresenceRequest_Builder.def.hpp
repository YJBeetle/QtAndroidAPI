#pragma once

#include "../../JObject.hpp"

namespace android::companion
{
	class ObservingDevicePresenceRequest;
}
namespace android::os
{
	class ParcelUuid;
}

namespace android::companion
{
	class ObservingDevicePresenceRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ObservingDevicePresenceRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ObservingDevicePresenceRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ObservingDevicePresenceRequest_Builder();
		
		// Methods
		android::companion::ObservingDevicePresenceRequest build() const;
		android::companion::ObservingDevicePresenceRequest_Builder setAssociationId(jint arg0) const;
		android::companion::ObservingDevicePresenceRequest_Builder setUuid(android::os::ParcelUuid arg0) const;
	};
} // namespace android::companion

