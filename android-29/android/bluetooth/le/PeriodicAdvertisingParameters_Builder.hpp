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
		
		PeriodicAdvertisingParameters_Builder(QAndroidJniObject obj);
		// Constructors
		PeriodicAdvertisingParameters_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setIncludeTxPower(jboolean arg0);
		QAndroidJniObject setInterval(jint arg0);
	};
} // namespace android::bluetooth::le

