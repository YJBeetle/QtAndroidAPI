#pragma once

#include "../../../JObject.hpp"

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
	class AdvertisingSet : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AdvertisingSet(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdvertisingSet(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void enableAdvertising(jboolean arg0, jint arg1, jint arg2) const;
		void setAdvertisingData(android::bluetooth::le::AdvertiseData arg0) const;
		void setAdvertisingParameters(android::bluetooth::le::AdvertisingSetParameters arg0) const;
		void setPeriodicAdvertisingData(android::bluetooth::le::AdvertiseData arg0) const;
		void setPeriodicAdvertisingEnabled(jboolean arg0) const;
		void setPeriodicAdvertisingParameters(android::bluetooth::le::PeriodicAdvertisingParameters arg0) const;
		void setScanResponseData(android::bluetooth::le::AdvertiseData arg0) const;
	};
} // namespace android::bluetooth::le

