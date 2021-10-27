#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::bluetooth::le
{
	class AdvertiseSettings;
}

namespace android::bluetooth::le
{
	class AdvertiseSettings_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		AdvertiseSettings_Builder(QAndroidJniObject obj);
		// Constructors
		AdvertiseSettings_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAdvertiseMode(jint arg0);
		QAndroidJniObject setConnectable(jboolean arg0);
		QAndroidJniObject setTimeout(jint arg0);
		QAndroidJniObject setTxPowerLevel(jint arg0);
	};
} // namespace android::bluetooth::le

