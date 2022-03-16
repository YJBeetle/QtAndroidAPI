#pragma once

#include "./NetworkScan.def.hpp"

namespace android::telephony
{
	// Fields
	inline jint NetworkScan::ERROR_INTERRUPTED()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_INTERRUPTED"
		);
	}
	inline jint NetworkScan::ERROR_INVALID_SCAN()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_INVALID_SCAN"
		);
	}
	inline jint NetworkScan::ERROR_INVALID_SCANID()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_INVALID_SCANID"
		);
	}
	inline jint NetworkScan::ERROR_MODEM_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_MODEM_ERROR"
		);
	}
	inline jint NetworkScan::ERROR_MODEM_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_MODEM_UNAVAILABLE"
		);
	}
	inline jint NetworkScan::ERROR_RADIO_INTERFACE_ERROR()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_RADIO_INTERFACE_ERROR"
		);
	}
	inline jint NetworkScan::ERROR_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkScan",
			"ERROR_UNSUPPORTED"
		);
	}
	inline jint NetworkScan::SUCCESS()
	{
		return getStaticField<jint>(
			"android.telephony.NetworkScan",
			"SUCCESS"
		);
	}
	
	// Constructors
	
	// Methods
	inline void NetworkScan::stopScan() const
	{
		callMethod<void>(
			"stopScan",
			"()V"
		);
	}
} // namespace android::telephony

// Base class headers

