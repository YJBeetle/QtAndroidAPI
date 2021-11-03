#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::location::provider
{
	class ProviderProperties : public JObject
	{
	public:
		// Fields
		static jint ACCURACY_COARSE();
		static jint ACCURACY_FINE();
		static JObject CREATOR();
		static jint POWER_USAGE_HIGH();
		static jint POWER_USAGE_LOW();
		static jint POWER_USAGE_MEDIUM();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProviderProperties(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ProviderProperties(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getAccuracy();
		jint getPowerUsage();
		jboolean hasAltitudeSupport();
		jboolean hasBearingSupport();
		jboolean hasCellRequirement();
		jboolean hasMonetaryCost();
		jboolean hasNetworkRequirement();
		jboolean hasSatelliteRequirement();
		jboolean hasSpeedSupport();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location::provider

