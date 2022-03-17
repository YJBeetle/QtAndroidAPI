#pragma once

#include "../../app/Service.def.hpp"

namespace android::content
{
	class Intent;
}
class JString;

namespace android::nfc::cardemulation
{
	class OffHostApduService : public android::app::Service
	{
	public:
		// Fields
		static JString SERVICE_INTERFACE();
		static JString SERVICE_META_DATA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OffHostApduService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		OffHostApduService(QAndroidJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		OffHostApduService();
		
		// Methods
		JObject onBind(android::content::Intent arg0) const;
	};
} // namespace android::nfc::cardemulation

