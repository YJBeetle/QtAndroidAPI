#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::bluetooth::le
{
	class PeriodicAdvertisingParameters;
}

namespace android::bluetooth::le
{
	class PeriodicAdvertisingParameters_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PeriodicAdvertisingParameters_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PeriodicAdvertisingParameters_Builder(QAndroidJniObject obj);
		
		// Constructors
		PeriodicAdvertisingParameters_Builder();
		
		// Methods
		android::bluetooth::le::PeriodicAdvertisingParameters build();
		android::bluetooth::le::PeriodicAdvertisingParameters_Builder setIncludeTxPower(jboolean arg0);
		android::bluetooth::le::PeriodicAdvertisingParameters_Builder setInterval(jint arg0);
	};
} // namespace android::bluetooth::le

