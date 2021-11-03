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
		
		// QJniObject forward
		template<typename ...Ts> explicit AdvertisingSetCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdvertisingSetCallback(QJniObject obj);
		
		// Constructors
		AdvertisingSetCallback();
		
		// Methods
		void onAdvertisingDataSet(android::bluetooth::le::AdvertisingSet arg0, jint arg1);
		void onAdvertisingEnabled(android::bluetooth::le::AdvertisingSet arg0, jboolean arg1, jint arg2);
		void onAdvertisingParametersUpdated(android::bluetooth::le::AdvertisingSet arg0, jint arg1, jint arg2);
		void onAdvertisingSetStarted(android::bluetooth::le::AdvertisingSet arg0, jint arg1, jint arg2);
		void onAdvertisingSetStopped(android::bluetooth::le::AdvertisingSet arg0);
		void onPeriodicAdvertisingDataSet(android::bluetooth::le::AdvertisingSet arg0, jint arg1);
		void onPeriodicAdvertisingEnabled(android::bluetooth::le::AdvertisingSet arg0, jboolean arg1, jint arg2);
		void onPeriodicAdvertisingParametersUpdated(android::bluetooth::le::AdvertisingSet arg0, jint arg1);
		void onScanResponseDataSet(android::bluetooth::le::AdvertisingSet arg0, jint arg1);
	};
} // namespace android::bluetooth::le

