#pragma once

#include "../RangingConfig.def.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::util
{
	class Range;
}
class JString;
namespace java::time
{
	class Duration;
}

namespace android::ranging::oob
{
	class OobInitiatorRangingConfig : public android::ranging::RangingConfig
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint RANGING_MODE_AUTO();
		static jint RANGING_MODE_FUSED();
		static jint RANGING_MODE_HIGH_ACCURACY();
		static jint RANGING_MODE_HIGH_ACCURACY_PREFERRED();
		static jint SECURITY_LEVEL_BASIC();
		static jint SECURITY_LEVEL_SECURE();
		
		// QJniObject forward
		template<typename ...Ts> explicit OobInitiatorRangingConfig(const char *className, const char *sig, Ts...agv) : android::ranging::RangingConfig(className, sig, std::forward<Ts>(agv)...) {}
		OobInitiatorRangingConfig(QJniObject obj) : android::ranging::RangingConfig(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JObject getDeviceHandles() const;
		java::time::Duration getFastestRangingInterval() const;
		android::util::Range getRangingIntervalRange() const;
		jint getRangingMode() const;
		jint getSecurityLevel() const;
		java::time::Duration getSlowestRangingInterval() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::ranging::oob

