#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

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
		ProviderProperties(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getAccuracy() const;
		jint getPowerUsage() const;
		jboolean hasAltitudeSupport() const;
		jboolean hasBearingSupport() const;
		jboolean hasCellRequirement() const;
		jboolean hasMonetaryCost() const;
		jboolean hasNetworkRequirement() const;
		jboolean hasSatelliteRequirement() const;
		jboolean hasSpeedSupport() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::location::provider

