#pragma once

#include "../../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OffHostApduService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		OffHostApduService(QAndroidJniObject obj);
		
		// Constructors
		OffHostApduService();
		
		// Methods
		JObject onBind(android::content::Intent arg0);
	};
} // namespace android::nfc::cardemulation

