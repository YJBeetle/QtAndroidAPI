#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::bluetooth::le
{
	class AdvertiseSettings;
}

namespace android::bluetooth::le
{
	class AdvertiseCallback : public __JniBaseClass
	{
	public:
		// Fields
		static jint ADVERTISE_FAILED_ALREADY_STARTED();
		static jint ADVERTISE_FAILED_DATA_TOO_LARGE();
		static jint ADVERTISE_FAILED_FEATURE_UNSUPPORTED();
		static jint ADVERTISE_FAILED_INTERNAL_ERROR();
		static jint ADVERTISE_FAILED_TOO_MANY_ADVERTISERS();
		
		AdvertiseCallback(QAndroidJniObject obj);
		// Constructors
		AdvertiseCallback();
		
		// Methods
		void onStartFailure(jint arg0);
		void onStartSuccess(android::bluetooth::le::AdvertiseSettings arg0);
	};
} // namespace android::bluetooth::le

