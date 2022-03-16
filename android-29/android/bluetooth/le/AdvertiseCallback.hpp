#pragma once

#include "../../../JObject.hpp"

namespace android::bluetooth::le
{
	class AdvertiseSettings;
}

namespace android::bluetooth::le
{
	class AdvertiseCallback : public JObject
	{
	public:
		// Fields
		static jint ADVERTISE_FAILED_ALREADY_STARTED();
		static jint ADVERTISE_FAILED_DATA_TOO_LARGE();
		static jint ADVERTISE_FAILED_FEATURE_UNSUPPORTED();
		static jint ADVERTISE_FAILED_INTERNAL_ERROR();
		static jint ADVERTISE_FAILED_TOO_MANY_ADVERTISERS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AdvertiseCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdvertiseCallback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		AdvertiseCallback();
		
		// Methods
		void onStartFailure(jint arg0) const;
		void onStartSuccess(android::bluetooth::le::AdvertiseSettings arg0) const;
	};
} // namespace android::bluetooth::le

