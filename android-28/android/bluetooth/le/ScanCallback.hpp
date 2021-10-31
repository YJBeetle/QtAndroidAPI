#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::bluetooth::le
{
	class ScanResult;
}

namespace android::bluetooth::le
{
	class ScanCallback : public __JniBaseClass
	{
	public:
		// Fields
		static jint SCAN_FAILED_ALREADY_STARTED();
		static jint SCAN_FAILED_APPLICATION_REGISTRATION_FAILED();
		static jint SCAN_FAILED_FEATURE_UNSUPPORTED();
		static jint SCAN_FAILED_INTERNAL_ERROR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScanCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ScanCallback(QAndroidJniObject obj);
		
		// Constructors
		ScanCallback();
		
		// Methods
		void onBatchScanResults(__JniBaseClass arg0);
		void onScanFailed(jint arg0);
		void onScanResult(jint arg0, android::bluetooth::le::ScanResult arg1);
	};
} // namespace android::bluetooth::le

