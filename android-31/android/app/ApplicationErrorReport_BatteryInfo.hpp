#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app
{
	class ApplicationErrorReport_BatteryInfo : public JObject
	{
	public:
		// Fields
		JString checkinDetails();
		jlong durationMicros();
		JString usageDetails();
		jint usagePercent();
		
		// QJniObject forward
		template<typename ...Ts> explicit ApplicationErrorReport_BatteryInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ApplicationErrorReport_BatteryInfo(QJniObject obj);
		
		// Constructors
		ApplicationErrorReport_BatteryInfo();
		ApplicationErrorReport_BatteryInfo(android::os::Parcel arg0);
		
		// Methods
		void dump(JObject arg0, JString arg1) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

