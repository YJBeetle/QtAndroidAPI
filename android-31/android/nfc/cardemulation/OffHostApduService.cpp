#include "../../content/Intent.hpp"
#include "../../../JString.hpp"
#include "./OffHostApduService.hpp"

namespace android::nfc::cardemulation
{
	// Fields
	JString OffHostApduService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.OffHostApduService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	JString OffHostApduService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.nfc.cardemulation.OffHostApduService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	OffHostApduService::OffHostApduService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	OffHostApduService::OffHostApduService()
		: android::app::Service(
			"android.nfc.cardemulation.OffHostApduService",
			"()V"
		) {}
	
	// Methods
	JObject OffHostApduService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
} // namespace android::nfc::cardemulation

