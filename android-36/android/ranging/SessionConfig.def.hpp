#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::ranging
{
	class DataNotificationConfig;
}
namespace android::ranging
{
	class SensorFusionParams;
}
class JObject;
class JString;

namespace android::ranging
{
	class SessionConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SessionConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SessionConfig(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::ranging::DataNotificationConfig getDataNotificationConfig() const;
		jint getRangingMeasurementsLimit() const;
		android::ranging::SensorFusionParams getSensorFusionParams() const;
		jint hashCode() const;
		jboolean isAngleOfArrivalNeeded() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::ranging

