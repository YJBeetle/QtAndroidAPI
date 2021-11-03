#include "../../../JByteArray.hpp"
#include "../../os/ParcelUuid.hpp"
#include "../../util/SparseArray.hpp"
#include "../../../JString.hpp"
#include "./ScanRecord.hpp"

namespace android::bluetooth::le
{
	// Fields
	
	// QJniObject forward
	ScanRecord::ScanRecord(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ScanRecord::getAdvertiseFlags() const
	{
		return callMethod<jint>(
			"getAdvertiseFlags",
			"()I"
		);
	}
	JByteArray ScanRecord::getBytes() const
	{
		return callObjectMethod(
			"getBytes",
			"()[B"
		);
	}
	JString ScanRecord::getDeviceName() const
	{
		return callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		);
	}
	JByteArray ScanRecord::getManufacturerSpecificData(jint arg0) const
	{
		return callObjectMethod(
			"getManufacturerSpecificData",
			"(I)[B",
			arg0
		);
	}
	android::util::SparseArray ScanRecord::getManufacturerSpecificData() const
	{
		return callObjectMethod(
			"getManufacturerSpecificData",
			"()Landroid/util/SparseArray;"
		);
	}
	JByteArray ScanRecord::getServiceData(android::os::ParcelUuid arg0) const
	{
		return callObjectMethod(
			"getServiceData",
			"(Landroid/os/ParcelUuid;)[B",
			arg0.object()
		);
	}
	JObject ScanRecord::getServiceData() const
	{
		return callObjectMethod(
			"getServiceData",
			"()Ljava/util/Map;"
		);
	}
	JObject ScanRecord::getServiceUuids() const
	{
		return callObjectMethod(
			"getServiceUuids",
			"()Ljava/util/List;"
		);
	}
	jint ScanRecord::getTxPowerLevel() const
	{
		return callMethod<jint>(
			"getTxPowerLevel",
			"()I"
		);
	}
	JString ScanRecord::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::bluetooth::le

