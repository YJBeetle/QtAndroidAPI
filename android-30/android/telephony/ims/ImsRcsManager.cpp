#include "./RcsUceAdapter.hpp"
#include "./ImsRcsManager.hpp"

namespace android::telephony::ims
{
	// Fields
	jstring ImsRcsManager::ACTION_SHOW_CAPABILITY_DISCOVERY_OPT_IN()
	{
		return getStaticObjectField(
			"android.telephony.ims.ImsRcsManager",
			"ACTION_SHOW_CAPABILITY_DISCOVERY_OPT_IN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	ImsRcsManager::ImsRcsManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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

