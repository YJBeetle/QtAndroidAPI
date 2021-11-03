#include "./RcsUceAdapter.hpp"
#include "../../../JString.hpp"
#include "./ImsRcsManager.hpp"

namespace android::telephony::ims
{
	// Fields
	JString ImsRcsManager::ACTION_SHOW_CAPABILITY_DISCOVERY_OPT_IN()
	{
		return getStaticObjectField(
			"android.telephony.ims.ImsRcsManager",
			"ACTION_SHOW_CAPABILITY_DISCOVERY_OPT_IN",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	ImsRcsManager::ImsRcsManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::telephony::ims::RcsUceAdapter ImsRcsManager::getUceAdapter()
	{
		return callObjectMethod(
			"getUceAdapter",
			"()Landroid/telephony/ims/RcsUceAdapter;"
		);
	}
} // namespace android::telephony::ims

