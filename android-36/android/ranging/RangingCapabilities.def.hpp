#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::ranging::ble::cs
{
	class BleCsRangingCapabilities;
}
namespace android::ranging::uwb
{
	class UwbRangingCapabilities;
}
namespace android::ranging::wifi::rtt
{
	class RttRangingCapabilities;
}
class JString;

namespace android::ranging
{
	class RangingCapabilities : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint DISABLED_REGULATORY();
		static jint DISABLED_USER();
		static jint DISABLED_USER_RESTRICTIONS();
		static jint ENABLED();
		static jint NOT_SUPPORTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit RangingCapabilities(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RangingCapabilities(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::ranging::ble::cs::BleCsRangingCapabilities getCsCapabilities() const;
		android::ranging::wifi::rtt::RttRangingCapabilities getRttRangingCapabilities() const;
		JObject getTechnologyAvailability() const;
		android::ranging::uwb::UwbRangingCapabilities getUwbCapabilities() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::ranging

