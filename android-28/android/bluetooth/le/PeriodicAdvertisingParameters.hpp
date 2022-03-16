#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::bluetooth::le
{
	class PeriodicAdvertisingParameters : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PeriodicAdvertisingParameters(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PeriodicAdvertisingParameters(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean getIncludeTxPower() const;
		jint getInterval() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::bluetooth::le

