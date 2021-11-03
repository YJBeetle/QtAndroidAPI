#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::util
{
	class SparseArray;
}
class JObject;
class JString;

namespace android::bluetooth::le
{
	class AdvertiseData : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AdvertiseData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdvertiseData(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jboolean getIncludeDeviceName();
		jboolean getIncludeTxPowerLevel();
		android::util::SparseArray getManufacturerSpecificData();
		JObject getServiceData();
		JObject getServiceSolicitationUuids();
		JObject getServiceUuids();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth::le

