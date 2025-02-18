#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::os
{
	class PowerMonitor : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint POWER_MONITOR_TYPE_CONSUMER();
		static jint POWER_MONITOR_TYPE_MEASUREMENT();
		
		// QJniObject forward
		template<typename ...Ts> explicit PowerMonitor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PowerMonitor(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JString getName() const;
		jint getType() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::os

