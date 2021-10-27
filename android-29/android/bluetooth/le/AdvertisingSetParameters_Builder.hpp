#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::bluetooth::le
{
	class AdvertisingSetParameters;
}

namespace android::bluetooth::le
{
	class AdvertisingSetParameters_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		AdvertisingSetParameters_Builder(QAndroidJniObject obj);
		// Constructors
		AdvertisingSetParameters_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAnonymous(jboolean arg0);
		QAndroidJniObject setConnectable(jboolean arg0);
		QAndroidJniObject setIncludeTxPower(jboolean arg0);
		QAndroidJniObject setInterval(jint arg0);
		QAndroidJniObject setLegacyMode(jboolean arg0);
		QAndroidJniObject setPrimaryPhy(jint arg0);
		QAndroidJniObject setScannable(jboolean arg0);
		QAndroidJniObject setSecondaryPhy(jint arg0);
		QAndroidJniObject setTxPowerLevel(jint arg0);
	};
} // namespace android::bluetooth::le

