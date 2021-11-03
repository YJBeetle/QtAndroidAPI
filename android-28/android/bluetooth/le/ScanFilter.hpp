#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::bluetooth::le
{
	class ScanResult;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class ParcelUuid;
}
class JObject;
class JString;

namespace android::bluetooth::le
{
	class ScanFilter : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScanFilter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScanFilter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		JString getDeviceAddress();
		JString getDeviceName();
		JByteArray getManufacturerData();
		JByteArray getManufacturerDataMask();
		jint getManufacturerId();
		JByteArray getServiceData();
		JByteArray getServiceDataMask();
		android::os::ParcelUuid getServiceDataUuid();
		android::os::ParcelUuid getServiceUuid();
		android::os::ParcelUuid getServiceUuidMask();
		jint hashCode();
		jboolean matches(android::bluetooth::le::ScanResult arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth::le

