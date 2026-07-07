#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../util/Range.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/time/Duration.def.hpp"
#include "./OobInitiatorRangingConfig.def.hpp"

namespace android::ranging::oob
{
	// Fields
	inline JObject OobInitiatorRangingConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.oob.OobInitiatorRangingConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint OobInitiatorRangingConfig::RANGING_MODE_AUTO()
	{
		return getStaticField<jint>(
			"android.ranging.oob.OobInitiatorRangingConfig",
			"RANGING_MODE_AUTO"
		);
	}
	inline jint OobInitiatorRangingConfig::RANGING_MODE_FUSED()
	{
		return getStaticField<jint>(
			"android.ranging.oob.OobInitiatorRangingConfig",
			"RANGING_MODE_FUSED"
		);
	}
	inline jint OobInitiatorRangingConfig::RANGING_MODE_HIGH_ACCURACY()
	{
		return getStaticField<jint>(
			"android.ranging.oob.OobInitiatorRangingConfig",
			"RANGING_MODE_HIGH_ACCURACY"
		);
	}
	inline jint OobInitiatorRangingConfig::RANGING_MODE_HIGH_ACCURACY_PREFERRED()
	{
		return getStaticField<jint>(
			"android.ranging.oob.OobInitiatorRangingConfig",
			"RANGING_MODE_HIGH_ACCURACY_PREFERRED"
		);
	}
	inline jint OobInitiatorRangingConfig::SECURITY_LEVEL_BASIC()
	{
		return getStaticField<jint>(
			"android.ranging.oob.OobInitiatorRangingConfig",
			"SECURITY_LEVEL_BASIC"
		);
	}
	inline jint OobInitiatorRangingConfig::SECURITY_LEVEL_SECURE()
	{
		return getStaticField<jint>(
			"android.ranging.oob.OobInitiatorRangingConfig",
			"SECURITY_LEVEL_SECURE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint OobInitiatorRangingConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject OobInitiatorRangingConfig::getDeviceHandles() const
	{
		return callObjectMethod(
			"getDeviceHandles",
			"()Ljava/util/List;"
		);
	}
	inline java::time::Duration OobInitiatorRangingConfig::getFastestRangingInterval() const
	{
		return callObjectMethod(
			"getFastestRangingInterval",
			"()Ljava/time/Duration;"
		);
	}
	inline android::util::Range OobInitiatorRangingConfig::getRangingIntervalRange() const
	{
		return callObjectMethod(
			"getRangingIntervalRange",
			"()Landroid/util/Range;"
		);
	}
	inline jint OobInitiatorRangingConfig::getRangingMode() const
	{
		return callMethod<jint>(
			"getRangingMode",
			"()I"
		);
	}
	inline jint OobInitiatorRangingConfig::getSecurityLevel() const
	{
		return callMethod<jint>(
			"getSecurityLevel",
			"()I"
		);
	}
	inline java::time::Duration OobInitiatorRangingConfig::getSlowestRangingInterval() const
	{
		return callObjectMethod(
			"getSlowestRangingInterval",
			"()Ljava/time/Duration;"
		);
	}
	inline JString OobInitiatorRangingConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void OobInitiatorRangingConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::ranging::oob

// Base class headers
#include "../RangingConfig.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::oob;
#endif
