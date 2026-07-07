#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
namespace java::time
{
	class Duration;
}

namespace android::ranging::uwb
{
	class UwbRangingCapabilities : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit UwbRangingCapabilities(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UwbRangingCapabilities(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		java::time::Duration getMinimumRangingInterval() const;
		JObject getSupportedChannels() const;
		JObject getSupportedConfigIds() const;
		JObject getSupportedNotificationConfigurations() const;
		JObject getSupportedPreambleIndexes() const;
		JObject getSupportedRangingUpdateRates() const;
		JObject getSupportedSlotDurations() const;
		jboolean isAzimuthalAngleSupported() const;
		jboolean isBackgroundRangingSupported() const;
		jboolean isDistanceMeasurementSupported() const;
		jboolean isElevationAngleSupported() const;
		jboolean isRangingIntervalReconfigurationSupported() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::ranging::uwb

