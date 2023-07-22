#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class ParcelUuid;
}
namespace android::util
{
	class SparseArray;
}
class JString;

namespace android::bluetooth::le
{
	class ScanRecord : public JObject
	{
	public:
		// Fields
		static jint DATA_TYPE_3D_INFORMATION_DATA();
		static jint DATA_TYPE_ADVERTISING_INTERVAL();
		static jint DATA_TYPE_ADVERTISING_INTERVAL_LONG();
		static jint DATA_TYPE_APPEARANCE();
		static jint DATA_TYPE_BIG_INFO();
		static jint DATA_TYPE_BROADCAST_CODE();
		static jint DATA_TYPE_CHANNEL_MAP_UPDATE_INDICATION();
		static jint DATA_TYPE_CLASS_OF_DEVICE();
		static jint DATA_TYPE_DEVICE_ID();
		static jint DATA_TYPE_FLAGS();
		static jint DATA_TYPE_INDOOR_POSITIONING();
		static jint DATA_TYPE_LE_BLUETOOTH_DEVICE_ADDRESS();
		static jint DATA_TYPE_LE_ROLE();
		static jint DATA_TYPE_LE_SECURE_CONNECTIONS_CONFIRMATION_VALUE();
		static jint DATA_TYPE_LE_SECURE_CONNECTIONS_RANDOM_VALUE();
		static jint DATA_TYPE_LE_SUPPORTED_FEATURES();
		static jint DATA_TYPE_LOCAL_NAME_COMPLETE();
		static jint DATA_TYPE_LOCAL_NAME_SHORT();
		static jint DATA_TYPE_MANUFACTURER_SPECIFIC_DATA();
		static jint DATA_TYPE_MESH_BEACON();
		static jint DATA_TYPE_MESH_MESSAGE();
		static jint DATA_TYPE_NONE();
		static jint DATA_TYPE_PB_ADV();
		static jint DATA_TYPE_PUBLIC_TARGET_ADDRESS();
		static jint DATA_TYPE_RANDOM_TARGET_ADDRESS();
		static jint DATA_TYPE_RESOLVABLE_SET_IDENTIFIER();
		static jint DATA_TYPE_SECURITY_MANAGER_OUT_OF_BAND_FLAGS();
		static jint DATA_TYPE_SERVICE_DATA_128_BIT();
		static jint DATA_TYPE_SERVICE_DATA_16_BIT();
		static jint DATA_TYPE_SERVICE_DATA_32_BIT();
		static jint DATA_TYPE_SERVICE_SOLICITATION_UUIDS_128_BIT();
		static jint DATA_TYPE_SERVICE_SOLICITATION_UUIDS_16_BIT();
		static jint DATA_TYPE_SERVICE_SOLICITATION_UUIDS_32_BIT();
		static jint DATA_TYPE_SERVICE_UUIDS_128_BIT_COMPLETE();
		static jint DATA_TYPE_SERVICE_UUIDS_128_BIT_PARTIAL();
		static jint DATA_TYPE_SERVICE_UUIDS_16_BIT_COMPLETE();
		static jint DATA_TYPE_SERVICE_UUIDS_16_BIT_PARTIAL();
		static jint DATA_TYPE_SERVICE_UUIDS_32_BIT_COMPLETE();
		static jint DATA_TYPE_SERVICE_UUIDS_32_BIT_PARTIAL();
		static jint DATA_TYPE_SIMPLE_PAIRING_HASH_C();
		static jint DATA_TYPE_SIMPLE_PAIRING_HASH_C_256();
		static jint DATA_TYPE_SIMPLE_PAIRING_RANDOMIZER_R();
		static jint DATA_TYPE_SIMPLE_PAIRING_RANDOMIZER_R_256();
		static jint DATA_TYPE_SLAVE_CONNECTION_INTERVAL_RANGE();
		static jint DATA_TYPE_TRANSPORT_DISCOVERY_DATA();
		static jint DATA_TYPE_TX_POWER_LEVEL();
		static jint DATA_TYPE_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScanRecord(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ScanRecord(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getAdvertiseFlags() const;
		JObject getAdvertisingDataMap() const;
		JByteArray getBytes() const;
		JString getDeviceName() const;
		JByteArray getManufacturerSpecificData(jint arg0) const;
		android::util::SparseArray getManufacturerSpecificData() const;
		JByteArray getServiceData(android::os::ParcelUuid arg0) const;
		JObject getServiceData() const;
		JObject getServiceSolicitationUuids() const;
		JObject getServiceUuids() const;
		jint getTxPowerLevel() const;
		JString toString() const;
	};
} // namespace android::bluetooth::le

