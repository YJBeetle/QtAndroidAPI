#pragma once

#include "../../../JObject.hpp"

namespace android::bluetooth::le
{
	class PeriodicAdvertisingParameters;
}

namespace android::bluetooth::le
{
	class PeriodicAdvertisingParameters_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PeriodicAdvertisingParameters_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PeriodicAdvertisingParameters_Builder(QAndroidJniObject obj);
		
		// Constructors
		PeriodicAdvertisingParameters_Builder();
		
		// Methods
		android::bluetooth::le::PeriodicAdvertisingParameters build();
		android::bluetooth::le::PeriodicAdvertisingParameters_Builder setIncludeTxPower(jboolean arg0);
		android::bluetooth::le::PeriodicAdvertisingParameters_Builder setInterval(jint arg0);
	};
} // namespace android::bluetooth::le

