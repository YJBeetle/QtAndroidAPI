#pragma once

#include "../../../JObject.hpp"

namespace android::bluetooth::le
{
	class AdvertiseSettings;
}

namespace android::bluetooth::le
{
	class AdvertiseSettings_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AdvertiseSettings_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdvertiseSettings_Builder(QJniObject obj);
		
		// Constructors
		AdvertiseSettings_Builder();
		
		// Methods
		android::bluetooth::le::AdvertiseSettings build() const;
		android::bluetooth::le::AdvertiseSettings_Builder setAdvertiseMode(jint arg0) const;
		android::bluetooth::le::AdvertiseSettings_Builder setConnectable(jboolean arg0) const;
		android::bluetooth::le::AdvertiseSettings_Builder setTimeout(jint arg0) const;
		android::bluetooth::le::AdvertiseSettings_Builder setTxPowerLevel(jint arg0) const;
	};
} // namespace android::bluetooth::le

