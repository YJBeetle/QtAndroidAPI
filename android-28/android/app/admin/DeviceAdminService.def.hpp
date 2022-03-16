#pragma once

#include "../Service.def.hpp"

namespace android::content
{
	class Intent;
}

namespace android::app::admin
{
	class DeviceAdminService : public android::app::Service
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DeviceAdminService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		DeviceAdminService(QJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		DeviceAdminService();
		
		// Methods
		JObject onBind(android::content::Intent arg0) const;
	};
} // namespace android::app::admin

