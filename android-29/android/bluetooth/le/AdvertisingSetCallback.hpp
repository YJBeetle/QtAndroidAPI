#pragma once

#include "../../../JObject.hpp"

namespace android::bluetooth::le
{
	class AdvertisingSet;
}

namespace android::bluetooth::le
{
	class AdvertisingSetCallback : public JObject
	{
	public:
		// Fields
		static jint ADVERTISE_FAILED_ALREADY_STARTED();
		static jint ADVERTISE_FAILED_DATA_TOO_LARGE();
		static jint ADVERTISE_FAILED_FEATURE_UNSUPPORTED();
		static jint ADVERTISE_FAILED_INTERNAL_ERROR();
		static jint ADVERTISE_FAILED_TOO_MANY_ADVERTISERS();
		static jint ADVERTISE_SUCCESS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AdvertisingSetCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdvertisingSetCallback(QAndroidJniObject obj);
		
		// Constructors
		AdvertisingSetCallback();
		
		// Methods
		void onAdvertisingDataSet(android::bluetooth::le::AdvertisingSet arg0, jint arg1) const;
		void onAdvertisingEnabled(android::bluetooth::le::AdvertisingSet arg0, jboolean arg1, jint arg2) const;
		void onAdvertisingParametersUpdated(android::bluetooth::le::AdvertisingSet arg0, jint arg1, jint arg2) const;
		void onAdvertisingSetStarted(android::bluetooth::le::AdvertisingSet arg0, jint arg1, jint arg2) const;
		void onAdvertisingSetStopped(android::bluetooth::le::AdvertisingSet arg0) const;
		void onPeriodicAdvertisingDataSet(android::bluetooth::le::AdvertisingSet arg0, jint arg1) const;
		void onPeriodicAdvertisingEnabled(android::bluetooth::le::AdvertisingSet arg0, jboolean arg1, jint arg2) const;
		void onPeriodicAdvertisingParametersUpdated(android::bluetooth::le::AdvertisingSet arg0, jint arg1) const;
		void onScanResponseDataSet(android::bluetooth::le::AdvertisingSet arg0, jint arg1) const;
	};
} // namespace android::bluetooth::le

