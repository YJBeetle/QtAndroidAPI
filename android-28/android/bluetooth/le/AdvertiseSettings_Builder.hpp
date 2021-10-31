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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AdvertiseSettings_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AdvertiseSettings_Builder(QAndroidJniObject obj);
		
		// Constructors
		AdvertiseSettings_Builder();
		
		// Methods
		android::bluetooth::le::AdvertiseSettings build();
		android::bluetooth::le::AdvertiseSettings_Builder setAdvertiseMode(jint arg0);
		android::bluetooth::le::AdvertiseSettings_Builder setConnectable(jboolean arg0);
		android::bluetooth::le::AdvertiseSettings_Builder setTimeout(jint arg0);
		android::bluetooth::le::AdvertiseSettings_Builder setTxPowerLevel(jint arg0);
	};
} // namespace android::bluetooth::le

