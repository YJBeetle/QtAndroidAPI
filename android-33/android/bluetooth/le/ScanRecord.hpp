#pragma once

#include "../../../JByteArray.hpp"
#include "../../os/ParcelUuid.def.hpp"
#include "../../util/SparseArray.def.hpp"
#include "../../../JString.hpp"
#include "./ScanRecord.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	inline jint ScanRecord::DATA_TYPE_3D_INFORMATION_DATA()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_3D_INFORMATION_DATA"
		);
	}
	inline jint ScanRecord::DATA_TYPE_ADVERTISING_INTERVAL()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_ADVERTISING_INTERVAL"
		);
	}
	inline jint ScanRecord::DATA_TYPE_ADVERTISING_INTERVAL_LONG()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_ADVERTISING_INTERVAL_LONG"
		);
	}
	inline jint ScanRecord::DATA_TYPE_APPEARANCE()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_APPEARANCE"
		);
	}
	inline jint ScanRecord::DATA_TYPE_BIG_INFO()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_BIG_INFO"
		);
	}
	inline jint ScanRecord::DATA_TYPE_BROADCAST_CODE()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_BROADCAST_CODE"
		);
	}
	inline jint ScanRecord::DATA_TYPE_CHANNEL_MAP_UPDATE_INDICATION()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_CHANNEL_MAP_UPDATE_INDICATION"
		);
	}
	inline jint ScanRecord::DATA_TYPE_CLASS_OF_DEVICE()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_CLASS_OF_DEVICE"
		);
	}
	inline jint ScanRecord::DATA_TYPE_DEVICE_ID()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_DEVICE_ID"
		);
	}
	inline jint ScanRecord::DATA_TYPE_FLAGS()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_FLAGS"
		);
	}
	inline jint ScanRecord::DATA_TYPE_INDOOR_POSITIONING()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_INDOOR_POSITIONING"
		);
	}
	inline jint ScanRecord::DATA_TYPE_LE_BLUETOOTH_DEVICE_ADDRESS()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_LE_BLUETOOTH_DEVICE_ADDRESS"
		);
	}
	inline jint ScanRecord::DATA_TYPE_LE_ROLE()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_LE_ROLE"
		);
	}
	inline jint ScanRecord::DATA_TYPE_LE_SECURE_CONNECTIONS_CONFIRMATION_VALUE()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_LE_SECURE_CONNECTIONS_CONFIRMATION_VALUE"
		);
	}
	inline jint ScanRecord::DATA_TYPE_LE_SECURE_CONNECTIONS_RANDOM_VALUE()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_LE_SECURE_CONNECTIONS_RANDOM_VALUE"
		);
	}
	inline jint ScanRecord::DATA_TYPE_LE_SUPPORTED_FEATURES()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_LE_SUPPORTED_FEATURES"
		);
	}
	inline jint ScanRecord::DATA_TYPE_LOCAL_NAME_COMPLETE()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_LOCAL_NAME_COMPLETE"
		);
	}
	inline jint ScanRecord::DATA_TYPE_LOCAL_NAME_SHORT()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_LOCAL_NAME_SHORT"
		);
	}
	inline jint ScanRecord::DATA_TYPE_MANUFACTURER_SPECIFIC_DATA()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_MANUFACTURER_SPECIFIC_DATA"
		);
	}
	inline jint ScanRecord::DATA_TYPE_MESH_BEACON()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_MESH_BEACON"
		);
	}
	inline jint ScanRecord::DATA_TYPE_MESH_MESSAGE()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_MESH_MESSAGE"
		);
	}
	inline jint ScanRecord::DATA_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_NONE"
		);
	}
	inline jint ScanRecord::DATA_TYPE_PB_ADV()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_PB_ADV"
		);
	}
	inline jint ScanRecord::DATA_TYPE_PUBLIC_TARGET_ADDRESS()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_PUBLIC_TARGET_ADDRESS"
		);
	}
	inline jint ScanRecord::DATA_TYPE_RANDOM_TARGET_ADDRESS()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_RANDOM_TARGET_ADDRESS"
		);
	}
	inline jint ScanRecord::DATA_TYPE_RESOLVABLE_SET_IDENTIFIER()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_RESOLVABLE_SET_IDENTIFIER"
		);
	}
	inline jint ScanRecord::DATA_TYPE_SECURITY_MANAGER_OUT_OF_BAND_FLAGS()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_SECURITY_MANAGER_OUT_OF_BAND_FLAGS"
		);
	}
	inline jint ScanRecord::DATA_TYPE_SERVICE_DATA_128_BIT()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_SERVICE_DATA_128_BIT"
		);
	}
	inline jint ScanRecord::DATA_TYPE_SERVICE_DATA_16_BIT()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_SERVICE_DATA_16_BIT"
		);
	}
	inline jint ScanRecord::DATA_TYPE_SERVICE_DATA_32_BIT()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_SERVICE_DATA_32_BIT"
		);
	}
	inline jint ScanRecord::DATA_TYPE_SERVICE_SOLICITATION_UUIDS_128_BIT()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_SERVICE_SOLICITATION_UUIDS_128_BIT"
		);
	}
	inline jint ScanRecord::DATA_TYPE_SERVICE_SOLICITATION_UUIDS_16_BIT()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_SERVICE_SOLICITATION_UUIDS_16_BIT"
		);
	}
	inline jint ScanRecord::DATA_TYPE_SERVICE_SOLICITATION_UUIDS_32_BIT()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_SERVICE_SOLICITATION_UUIDS_32_BIT"
		);
	}
	inline jint ScanRecord::DATA_TYPE_SERVICE_UUIDS_128_BIT_COMPLETE()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_SERVICE_UUIDS_128_BIT_COMPLETE"
		);
	}
	inline jint ScanRecord::DATA_TYPE_SERVICE_UUIDS_128_BIT_PARTIAL()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_SERVICE_UUIDS_128_BIT_PARTIAL"
		);
	}
	inline jint ScanRecord::DATA_TYPE_SERVICE_UUIDS_16_BIT_COMPLETE()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_SERVICE_UUIDS_16_BIT_COMPLETE"
		);
	}
	inline jint ScanRecord::DATA_TYPE_SERVICE_UUIDS_16_BIT_PARTIAL()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_SERVICE_UUIDS_16_BIT_PARTIAL"
		);
	}
	inline jint ScanRecord::DATA_TYPE_SERVICE_UUIDS_32_BIT_COMPLETE()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_SERVICE_UUIDS_32_BIT_COMPLETE"
		);
	}
	inline jint ScanRecord::DATA_TYPE_SERVICE_UUIDS_32_BIT_PARTIAL()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_SERVICE_UUIDS_32_BIT_PARTIAL"
		);
	}
	inline jint ScanRecord::DATA_TYPE_SIMPLE_PAIRING_HASH_C()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_SIMPLE_PAIRING_HASH_C"
		);
	}
	inline jint ScanRecord::DATA_TYPE_SIMPLE_PAIRING_HASH_C_256()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_SIMPLE_PAIRING_HASH_C_256"
		);
	}
	inline jint ScanRecord::DATA_TYPE_SIMPLE_PAIRING_RANDOMIZER_R()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_SIMPLE_PAIRING_RANDOMIZER_R"
		);
	}
	inline jint ScanRecord::DATA_TYPE_SIMPLE_PAIRING_RANDOMIZER_R_256()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_SIMPLE_PAIRING_RANDOMIZER_R_256"
		);
	}
	inline jint ScanRecord::DATA_TYPE_SLAVE_CONNECTION_INTERVAL_RANGE()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_SLAVE_CONNECTION_INTERVAL_RANGE"
		);
	}
	inline jint ScanRecord::DATA_TYPE_TRANSPORT_DISCOVERY_DATA()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_TRANSPORT_DISCOVERY_DATA"
		);
	}
	inline jint ScanRecord::DATA_TYPE_TX_POWER_LEVEL()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_TX_POWER_LEVEL"
		);
	}
	inline jint ScanRecord::DATA_TYPE_URI()
	{
		return getStaticField<jint>(
			"android.bluetooth.le.ScanRecord",
			"DATA_TYPE_URI"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ScanRecord::getAdvertiseFlags() const
	{
		return callMethod<jint>(
			"getAdvertiseFlags",
			"()I"
		);
	}
	inline JObject ScanRecord::getAdvertisingDataMap() const
	{
		return callObjectMethod(
			"getAdvertisingDataMap",
			"()Ljava/util/Map;"
		);
	}
	inline JByteArray ScanRecord::getBytes() const
	{
		return callObjectMethod(
			"getBytes",
			"()[B"
		);
	}
	inline JString ScanRecord::getDeviceName() const
	{
		return callObjectMethod(
			"getDeviceName",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray ScanRecord::getManufacturerSpecificData(jint arg0) const
	{
		return callObjectMethod(
			"getManufacturerSpecificData",
			"(I)[B",
			arg0
		);
	}
	inline android::util::SparseArray ScanRecord::getManufacturerSpecificData() const
	{
		return callObjectMethod(
			"getManufacturerSpecificData",
			"()Landroid/util/SparseArray;"
		);
	}
	inline JByteArray ScanRecord::getServiceData(android::os::ParcelUuid arg0) const
	{
		return callObjectMethod(
			"getServiceData",
			"(Landroid/os/ParcelUuid;)[B",
			arg0.object()
		);
	}
	inline JObject ScanRecord::getServiceData() const
	{
		return callObjectMethod(
			"getServiceData",
			"()Ljava/util/Map;"
		);
	}
	inline JObject ScanRecord::getServiceSolicitationUuids() const
	{
		return callObjectMethod(
			"getServiceSolicitationUuids",
			"()Ljava/util/List;"
		);
	}
	inline JObject ScanRecord::getServiceUuids() const
	{
		return callObjectMethod(
			"getServiceUuids",
			"()Ljava/util/List;"
		);
	}
	inline jint ScanRecord::getTxPowerLevel() const
	{
		return callMethod<jint>(
			"getTxPowerLevel",
			"()I"
		);
	}
	inline JString ScanRecord::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::bluetooth::le

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth::le;
#endif
