#include "../../../JByteArray.hpp"
#include "../../os/ParcelUuid.hpp"
#include "../../util/SparseArray.hpp"
#include "../../../JString.hpp"
#include "./ScanRecord.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// QAndroidJniObject forward
	ScanRecord::ScanRecord(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ScanRecord::getAdvertiseFlags()
	{
		return callMethod<jint>(
			"getAdvertiseFlags",
			"()I"
		);
	}
	JByteArray ScanRecord::getBytes()
	{
		return callObjectMethod(
			"getBytes",
			"()[B"
		);
	}
	JString ScanRecord::getDeviceName()
	{
		return callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		);
	}
	JByteArray ScanRecord::getManufacturerSpecificData(jint arg0)
	{
		return callObjectMethod(
			"getManufacturerSpecificData",
			"(I)[B",
			arg0
		);
	}
	android::util::SparseArray ScanRecord::getManufacturerSpecificData()
	{
		return callObjectMethod(
			"getManufacturerSpecificData",
			"()Landroid/util/SparseArray;"
		);
	}
	JByteArray ScanRecord::getServiceData(android::os::ParcelUuid arg0)
	{
		return callObjectMethod(
			"getServiceData",
			"(Landroid/os/ParcelUuid;)[B",
			arg0.object()
		);
	}
	JObject ScanRecord::getServiceData()
	{
		return callObjectMethod(
			"getServiceData",
			"()Ljava/util/Map;"
		);
	}
	JObject ScanRecord::getServiceSolicitationUuids()
	{
		return callObjectMethod(
			"getServiceSolicitationUuids",
			"()Ljava/util/List;"
		);
	}
	JObject ScanRecord::getServiceUuids()
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
	JString ScanRecord::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::bluetooth::le

