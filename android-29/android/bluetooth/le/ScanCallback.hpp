#pragma once

#include "./ScanResult.def.hpp"
#include "./ScanCallback.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	inline jint ScanCallback::SCAN_FAILED_ALREADY_STARTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanCallback",
			"SCAN_FAILED_ALREADY_STARTED"
		);
	}
	inline jint ScanCallback::SCAN_FAILED_APPLICATION_REGISTRATION_FAILED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanCallback",
			"SCAN_FAILED_APPLICATION_REGISTRATION_FAILED"
		);
	}
	inline jint ScanCallback::SCAN_FAILED_FEATURE_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanCallback",
			"SCAN_FAILED_FEATURE_UNSUPPORTED"
		);
	}
	inline jint ScanCallback::SCAN_FAILED_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanCallback",
			"SCAN_FAILED_INTERNAL_ERROR"
		);
	}
	
	// Constructors
	inline ScanCallback::ScanCallback()
		: JObject(
			"android.bluetooth.le.ScanCallback",
			"()V"
		) {}
	
	// Methods
	inline void ScanCallback::onBatchScanResults(JObject arg0) const
	{
		callMethod<void>(
			"onBatchScanResults",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void ScanCallback::onScanFailed(jint arg0) const
	{
		callMethod<void>(
			"onScanFailed",
			"(I)V",
			arg0
		);
	}
	inline void ScanCallback::onScanResult(jint arg0, android::bluetooth::le::ScanResult arg1) const
	{
		callMethod<void>(
			"onScanResult",
			"(ILandroid/bluetooth/le/ScanResult;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace android::bluetooth::le

// Base class headers

