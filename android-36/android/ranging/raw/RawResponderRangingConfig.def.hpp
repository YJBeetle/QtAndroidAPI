#pragma once

#include "../RangingConfig.def.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::ranging::raw
{
	class RawRangingDevice;
}
class JString;

namespace android::ranging::raw
{
	class RawResponderRangingConfig : public android::ranging::RangingConfig
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit RawResponderRangingConfig(const char *className, const char *sig, Ts...agv) : android::ranging::RangingConfig(className, sig, std::forward<Ts>(agv)...) {}
		RawResponderRangingConfig(QJniObject obj) : android::ranging::RangingConfig(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::ranging::raw::RawRangingDevice getRawRangingDevice() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::ranging::raw

