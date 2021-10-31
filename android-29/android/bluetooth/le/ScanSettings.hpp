#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::bluetooth::le
{
	class ScanSettings : public __JniBaseClass
	{
	public:
		// Fields
		static jint CALLBACK_TYPE_ALL_MATCHES();
		static jint CALLBACK_TYPE_FIRST_MATCH();
		static jint CALLBACK_TYPE_MATCH_LOST();
		static QAndroidJniObject CREATOR();
		static jint MATCH_MODE_AGGRESSIVE();
		static jint MATCH_MODE_STICKY();
		static jint MATCH_NUM_FEW_ADVERTISEMENT();
		static jint MATCH_NUM_MAX_ADVERTISEMENT();
		static jint MATCH_NUM_ONE_ADVERTISEMENT();
		static jint PHY_LE_ALL_SUPPORTED();
		static jint SCAN_MODE_BALANCED();
		static jint SCAN_MODE_LOW_LATENCY();
		static jint SCAN_MODE_LOW_POWER();
		static jint SCAN_MODE_OPPORTUNISTIC();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScanSettings(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ScanSettings(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jint getCallbackType();
		jboolean getLegacy();
		jint getPhy();
		jlong getReportDelayMillis();
		jint getScanMode();
		jint getScanResultType();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth::le

