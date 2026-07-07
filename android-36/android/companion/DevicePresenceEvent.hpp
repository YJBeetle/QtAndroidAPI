#pragma once

#include "../os/Parcel.def.hpp"
#include "../os/ParcelUuid.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DevicePresenceEvent.def.hpp"

namespace android::companion
{
	// Fields
	inline JObject DevicePresenceEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.companion.DevicePresenceEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint DevicePresenceEvent::EVENT_BLE_APPEARED()
	{
		return getStaticField<jint>(
			"android.companion.DevicePresenceEvent",
			"EVENT_BLE_APPEARED"
		);
	}
	inline jint DevicePresenceEvent::EVENT_BLE_DISAPPEARED()
	{
		return getStaticField<jint>(
			"android.companion.DevicePresenceEvent",
			"EVENT_BLE_DISAPPEARED"
		);
	}
	inline jint DevicePresenceEvent::EVENT_BT_CONNECTED()
	{
		return getStaticField<jint>(
			"android.companion.DevicePresenceEvent",
			"EVENT_BT_CONNECTED"
		);
	}
	inline jint DevicePresenceEvent::EVENT_BT_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.companion.DevicePresenceEvent",
			"EVENT_BT_DISCONNECTED"
		);
	}
	inline jint DevicePresenceEvent::EVENT_SELF_MANAGED_APPEARED()
	{
		return getStaticField<jint>(
			"android.companion.DevicePresenceEvent",
			"EVENT_SELF_MANAGED_APPEARED"
		);
	}
	inline jint DevicePresenceEvent::EVENT_SELF_MANAGED_DISAPPEARED()
	{
		return getStaticField<jint>(
			"android.companion.DevicePresenceEvent",
			"EVENT_SELF_MANAGED_DISAPPEARED"
		);
	}
	inline jint DevicePresenceEvent::NO_ASSOCIATION()
	{
		return getStaticField<jint>(
			"android.companion.DevicePresenceEvent",
			"NO_ASSOCIATION"
		);
	}
	
	// Constructors
	inline DevicePresenceEvent::DevicePresenceEvent(jint arg0, jint arg1, android::os::ParcelUuid arg2)
		: JObject(
			"android.companion.DevicePresenceEvent",
			"(IILandroid/os/ParcelUuid;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	inline jint DevicePresenceEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean DevicePresenceEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint DevicePresenceEvent::getAssociationId() const
	{
		return callMethod<jint>(
			"getAssociationId",
			"()I"
		);
	}
	inline jint DevicePresenceEvent::getEvent() const
	{
		return callMethod<jint>(
			"getEvent",
			"()I"
		);
	}
	inline android::os::ParcelUuid DevicePresenceEvent::getUuid() const
	{
		return callObjectMethod(
			"getUuid",
			"()Landroid/os/ParcelUuid;"
		);
	}
	inline jint DevicePresenceEvent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString DevicePresenceEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void DevicePresenceEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::companion

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::companion;
#endif
