#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace android::content
{
	class Intent;
}

namespace android::nfc::cardemulation
{
	class OffHostApduService : public android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		static jstring SERVICE_META_DATA();
		
		OffHostApduService(QAndroidJniObject obj);
		// Constructors
		OffHostApduService();
		
		// Methods
		QAndroidJniObject onBind(android::content::Intent arg0);
	};
} // namespace android::nfc::cardemulation

