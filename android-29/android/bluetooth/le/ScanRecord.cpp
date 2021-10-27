#include "../../os/ParcelUuid.hpp"
#include "../../util/SparseArray.hpp"
#include "./ScanRecord.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	ScanRecord::ScanRecord(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint ScanRecord::getAdvertiseFlags()
	{
		return __thiz.callMethod<jint>(
			"getAdvertiseFlags",
			"()I"
		);
	}
	jbyteArray ScanRecord::getBytes()
	{
		return __thiz.callObjectMethod(
			"getBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jstring ScanRecord::getDeviceName()
	{
		return __thiz.callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray ScanRecord::getManufacturerSpecificData(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getManufacturerSpecificData",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	QAndroidJniObject ScanRecord::getManufacturerSpecificData()
	{
		return __thiz.callObjectMethod(
			"getManufacturerSpecificData",
			"()Landroid/util/SparseArray;"
		);
	}
	jbyteArray ScanRecord::getServiceData(android::os::ParcelUuid arg0)
	{
		return __thiz.callObjectMethod(
			"getServiceData",
			"(Landroid/os/ParcelUuid;)[B",
			arg0.__jniObject().object()
		).object<jbyteArray>();
	}
	QAndroidJniObject ScanRecord::getServiceData()
	{
		return __thiz.callObjectMethod(
			"getServiceData",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject ScanRecord::getServiceSolicitationUuids()
	{
		return __thiz.callObjectMethod(
			"getServiceSolicitationUuids",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject ScanRecord::getServiceUuids()
	{
		return __thiz.callObjectMethod(
			"getServiceUuids",
			"()Ljava/util/List;"
		);
	}
	jint ScanRecord::getTxPowerLevel()
	{
		return __thiz.callMethod<jint>(
			"getTxPowerLevel",
			"()I"
		);
	}
	jstring ScanRecord::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::bluetooth::le

