#pragma once

#include "../RangingConfig.def.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::ranging::oob
{
	class DeviceHandle;
}
class JString;

namespace android::ranging::oob
{
	class OobResponderRangingConfig : public android::ranging::RangingConfig
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit OobResponderRangingConfig(const char *className, const char *sig, Ts...agv) : android::ranging::RangingConfig(className, sig, std::forward<Ts>(agv)...) {}
		OobResponderRangingConfig(QJniObject obj) : android::ranging::RangingConfig(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::ranging::oob::DeviceHandle getDeviceHandle() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::ranging::oob

