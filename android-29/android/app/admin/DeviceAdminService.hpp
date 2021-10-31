#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../Service.hpp"

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
		DeviceAdminService(QJniObject obj);
		
		// Constructors
		DeviceAdminService();
		
		// Methods
		__JniBaseClass onBind(android::content::Intent arg0);
	};
} // namespace android::app::admin

