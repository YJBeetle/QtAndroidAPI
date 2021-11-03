#include "./NetworkScan.hpp"

namespace android::telephony
{
	// Fields
	jint NetworkScan::ERROR_INTERRUPTED()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_INTERRUPTED"
		);
	}
	jint NetworkScan::ERROR_INVALID_SCAN()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_INVALID_SCAN"
		);
	}
	jint NetworkScan::ERROR_INVALID_SCANID()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_INVALID_SCANID"
		);
	}
	jint NetworkScan::ERROR_MODEM_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_MODEM_ERROR"
		);
	}
	jint NetworkScan::ERROR_MODEM_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_MODEM_UNAVAILABLE"
		);
	}
	jint NetworkScan::ERROR_RADIO_INTERFACE_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_RADIO_INTERFACE_ERROR"
		);
	}
	jint NetworkScan::ERROR_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_UNSUPPORTED"
		);
	}
	jint NetworkScan::SUCCESS()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkScan",
			"SUCCESS"
		);
	}
	
	// QJniObject forward
	NetworkScan::NetworkScan(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void NetworkScan::stopScan()
	{
		callMethod<void>(
			"stopScan",
			"()V"
		);
	}
} // namespace android::telephony

