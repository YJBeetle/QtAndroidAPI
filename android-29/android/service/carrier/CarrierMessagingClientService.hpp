#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace android::content
{
	class Intent;
}

namespace android::service::carrier
{
	class CarrierMessagingClientService : public android::app::Service
	{
	public:
		// Fields
		
		CarrierMessagingClientService(QAndroidJniObject obj);
		// Constructors
		CarrierMessagingClientService();
		
		// Methods
		QAndroidJniObject onBind(android::content::Intent arg0);
	};
} // namespace android::service::carrier

