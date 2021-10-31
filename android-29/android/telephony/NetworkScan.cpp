#include "./NetworkScan.hpp"

namespace android::telephony
{
	// Fields
	jint NetworkScan::ERROR_INTERRUPTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_INTERRUPTED"
		);
	}
	jint NetworkScan::ERROR_INVALID_SCAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_INVALID_SCAN"
		);
	}
	jint NetworkScan::ERROR_INVALID_SCANID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_INVALID_SCANID"
		);
	}
	jint NetworkScan::ERROR_MODEM_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_MODEM_ERROR"
		);
	}
	jint NetworkScan::ERROR_MODEM_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_MODEM_UNAVAILABLE"
		);
	}
	jint NetworkScan::ERROR_RADIO_INTERFACE_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_RADIO_INTERFACE_ERROR"
		);
	}
	jint NetworkScan::ERROR_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_UNSUPPORTED"
		);
	}
	jint NetworkScan::SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.NetworkScan",
			"SUCCESS"
		);
	}
	
	// QAndroidJniObject forward
	NetworkScan::NetworkScan(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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

