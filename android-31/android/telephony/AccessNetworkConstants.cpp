#include "./AccessNetworkConstants.hpp"

namespace android::telephony
{
	// Fields
	jint AccessNetworkConstants::TRANSPORT_TYPE_WLAN()
	{
		return getStaticField<jint>(
			"android.telephony.AccessNetworkConstants",
			"TRANSPORT_TYPE_WLAN"
		);
	}
	jint AccessNetworkConstants::TRANSPORT_TYPE_WWAN()
	{
		return getStaticField<jint>(
			"android.telephony.AccessNetworkConstants",
			"TRANSPORT_TYPE_WWAN"
		);
	}
	
	// QJniObject forward
	AccessNetworkConstants::AccessNetworkConstants(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::telephony

