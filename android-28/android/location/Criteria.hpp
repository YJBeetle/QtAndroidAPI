#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::location
{
	class Criteria : public JObject
	{
	public:
		// Fields
		static jint ACCURACY_COARSE();
		static jint ACCURACY_FINE();
		static jint ACCURACY_HIGH();
		static jint ACCURACY_LOW();
		static jint ACCURACY_MEDIUM();
		static JObject CREATOR();
		static jint NO_REQUIREMENT();
		static jint POWER_HIGH();
		static jint POWER_LOW();
		static jint POWER_MEDIUM();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Criteria(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Criteria(QAndroidJniObject obj);
		
		// Constructors
		Criteria();
		Criteria(android::location::Criteria &arg0);
		
		// Methods
		jint describeContents() const;
		jint getAccuracy() const;
		jint getBearingAccuracy() const;
		jint getHorizontalAccuracy() const;
		jint getPowerRequirement() const;
		jint getSpeedAccuracy() const;
		jint getVerticalAccuracy() const;
		jboolean isAltitudeRequired() const;
		jboolean isBearingRequired() const;
		jboolean isCostAllowed() const;
		jboolean isSpeedRequired() const;
		void setAccuracy(jint arg0) const;
		void setAltitudeRequired(jboolean arg0) const;
		void setBearingAccuracy(jint arg0) const;
		void setBearingRequired(jboolean arg0) const;
		void setCostAllowed(jboolean arg0) const;
		void setHorizontalAccuracy(jint arg0) const;
		void setPowerRequirement(jint arg0) const;
		void setSpeedAccuracy(jint arg0) const;
		void setSpeedRequired(jboolean arg0) const;
		void setVerticalAccuracy(jint arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::location

