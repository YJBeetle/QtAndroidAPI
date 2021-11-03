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
		
		// QJniObject forward
		template<typename ...Ts> explicit ScanFilter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScanFilter(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getDeviceAddress() const;
		JString getDeviceName() const;
		JByteArray getManufacturerData() const;
		JByteArray getManufacturerDataMask() const;
		jint getManufacturerId() const;
		JByteArray getServiceData() const;
		JByteArray getServiceDataMask() const;
		android::os::ParcelUuid getServiceDataUuid() const;
		android::os::ParcelUuid getServiceUuid() const;
		android::os::ParcelUuid getServiceUuidMask() const;
		jint hashCode() const;
		jboolean matches(android::bluetooth::le::ScanResult arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::bluetooth::le

