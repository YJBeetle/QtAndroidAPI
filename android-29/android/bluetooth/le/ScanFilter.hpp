#pragma once

#include "../../../__JniBaseClass.hpp"

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

namespace android::bluetooth::le
{
	class ScanFilter : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		ScanFilter(QAndroidJniObject obj);
		// Constructors
		ScanFilter() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getDeviceAddress();
		jstring getDeviceName();
		jbyteArray getManufacturerData();
		jbyteArray getManufacturerDataMask();
		jint getManufacturerId();
		jbyteArray getServiceData();
		jbyteArray getServiceDataMask();
		QAndroidJniObject getServiceDataUuid();
		QAndroidJniObject getServiceSolicitationUuid();
		QAndroidJniObject getServiceSolicitationUuidMask();
		QAndroidJniObject getServiceUuid();
		QAndroidJniObject getServiceUuidMask();
		jint hashCode();
		jboolean matches(android::bluetooth::le::ScanResult arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::bluetooth::le

