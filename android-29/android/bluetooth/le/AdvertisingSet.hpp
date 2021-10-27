#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::bluetooth::le
{
	class AdvertiseData;
}
namespace android::bluetooth::le
{
	class AdvertisingSetParameters;
}
namespace android::bluetooth::le
{
	class PeriodicAdvertisingParameters;
}

namespace android::bluetooth::le
{
	class AdvertisingSet : public __JniBaseClass
	{
	public:
		// Fields
		
		AdvertisingSet(QAndroidJniObject obj);
		// Constructors
		AdvertisingSet() = default;
		
		// Methods
		void enableAdvertising(jboolean arg0, jint arg1, jint arg2);
		void setAdvertisingData(android::bluetooth::le::AdvertiseData arg0);
		void setAdvertisingParameters(android::bluetooth::le::AdvertisingSetParameters arg0);
		void setPeriodicAdvertisingData(android::bluetooth::le::AdvertiseData arg0);
		void setPeriodicAdvertisingEnabled(jboolean arg0);
		void setPeriodicAdvertisingParameters(android::bluetooth::le::PeriodicAdvertisingParameters arg0);
		void setScanResponseData(android::bluetooth::le::AdvertiseData arg0);
	};
} // namespace android::bluetooth::le

