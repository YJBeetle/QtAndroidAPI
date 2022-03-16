#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::bluetooth::le
{
	class ScanSettings : public JObject
	{
	public:
		// Fields
		static jint CALLBACK_TYPE_ALL_MATCHES();
		static jint CALLBACK_TYPE_FIRST_MATCH();
		static jint CALLBACK_TYPE_MATCH_LOST();
		static JObject CREATOR();
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
		
		// QJniObject forward
		template<typename ...Ts> explicit ScanSettings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScanSettings(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getCallbackType() const;
		jboolean getLegacy() const;
		jint getPhy() const;
		jlong getReportDelayMillis() const;
		jint getScanMode() const;
		jint getScanResultType() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::bluetooth::le

