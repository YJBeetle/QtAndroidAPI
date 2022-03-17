#pragma once

#include "../../../JObject.hpp"

namespace android::bluetooth::le
{
	class ScanResult;
}

namespace android::bluetooth::le
{
	class ScanCallback : public JObject
	{
	public:
		// Fields
		static jint SCAN_FAILED_ALREADY_STARTED();
		static jint SCAN_FAILED_APPLICATION_REGISTRATION_FAILED();
		static jint SCAN_FAILED_FEATURE_UNSUPPORTED();
		static jint SCAN_FAILED_INTERNAL_ERROR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScanCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScanCallback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ScanCallback();
		
		// Methods
		void onBatchScanResults(JObject arg0) const;
		void onScanFailed(jint arg0) const;
		void onScanResult(jint arg0, android::bluetooth::le::ScanResult arg1) const;
	};
} // namespace android::bluetooth::le

