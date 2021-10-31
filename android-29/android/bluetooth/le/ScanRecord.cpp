#include "../../os/ParcelUuid.hpp"
#include "../../util/SparseArray.hpp"
#include "./ScanRecord.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// QAndroidJniObject forward
	ScanRecord::ScanRecord(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint ScanRecord::getAdvertiseFlags()
	{
		return callMethod<jint>(
			"getAdvertiseFlags",
			"()I"
		);
	}
	jbyteArray ScanRecord::getBytes()
	{
		return callObjectMethod(
			"getBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jstring ScanRecord::getDeviceName()
	{
		return callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray ScanRecord::getManufacturerSpecificData(jint arg0)
	{
		return callObjectMethod(
			"getManufacturerSpecificData",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	QAndroidJniObject ScanRecord::getManufacturerSpecificData()
	{
		return callObjectMethod(
			"getManufacturerSpecificData",
			"()Landroid/util/SparseArray;"
		);
	}
	jbyteArray ScanRecord::getServiceData(android::os::ParcelUuid arg0)
	{
		return callObjectMethod(
			"getServiceData",
			"(Landroid/os/ParcelUuid;)[B",
			arg0.object()
		).object<jbyteArray>();
	}
	QAndroidJniObject ScanRecord::getServiceData()
	{
		return callObjectMethod(
			"getServiceData",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject ScanRecord::getServiceSolicitationUuids()
	{
		return callObjectMethod(
			"getServiceSolicitationUuids",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject ScanRecord::getServiceUuids()
	{
		return callObjectMethod(
			"getServiceUuids",
			"()Ljava/util/List;"
		);
	}
	jint ScanRecord::getTxPowerLevel()
	{
		return callMethod<jint>(
			"getTxPowerLevel",
			"()I"
		);
	}
	jstring ScanRecord::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::bluetooth::le
