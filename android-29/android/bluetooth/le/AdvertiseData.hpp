#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::util
{
	class SparseArray;
}

namespace android::bluetooth::le
{
	class AdvertiseData : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AdvertiseData(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AdvertiseData(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jboolean getIncludeDeviceName();
		jboolean getIncludeTxPowerLevel();
		android::util::SparseArray getManufacturerSpecificData();
		__JniBaseClass getServiceData();
		__JniBaseClass getServiceUuids();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth::le

