#pragma once

#include "../RangingConfig.def.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::ranging::raw
{
	class RawInitiatorRangingConfig : public android::ranging::RangingConfig
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit RawInitiatorRangingConfig(const char *className, const char *sig, Ts...agv) : android::ranging::RangingConfig(className, sig, std::forward<Ts>(agv)...) {}
		RawInitiatorRangingConfig(QJniObject obj) : android::ranging::RangingConfig(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JObject getRawRangingDevices() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::ranging::raw

