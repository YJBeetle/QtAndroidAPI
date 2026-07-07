#pragma once

#include "../os/Parcel.def.hpp"
#include "./ble/cs/BleCsRangingCapabilities.def.hpp"
#include "./uwb/UwbRangingCapabilities.def.hpp"
#include "./wifi/rtt/RttRangingCapabilities.def.hpp"
#include "../../JString.hpp"
#include "./RangingCapabilities.def.hpp"

namespace android::ranging
{
	// Fields
	inline JObject RangingCapabilities::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.RangingCapabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint RangingCapabilities::DISABLED_REGULATORY()
	{
		return getStaticField<jint>(
			"android.ranging.RangingCapabilities",
			"DISABLED_REGULATORY"
		);
	}
	inline jint RangingCapabilities::DISABLED_USER()
	{
		return getStaticField<jint>(
			"android.ranging.RangingCapabilities",
			"DISABLED_USER"
		);
	}
	inline jint RangingCapabilities::DISABLED_USER_RESTRICTIONS()
	{
		return getStaticField<jint>(
			"android.ranging.RangingCapabilities",
			"DISABLED_USER_RESTRICTIONS"
		);
	}
	inline jint RangingCapabilities::ENABLED()
	{
		return getStaticField<jint>(
			"android.ranging.RangingCapabilities",
			"ENABLED"
		);
	}
	inline jint RangingCapabilities::NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.ranging.RangingCapabilities",
			"NOT_SUPPORTED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RangingCapabilities::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::ranging::ble::cs::BleCsRangingCapabilities RangingCapabilities::getCsCapabilities() const
	{
		return callObjectMethod(
			"getCsCapabilities",
			"()Landroid/ranging/ble/cs/BleCsRangingCapabilities;"
		);
	}
	inline android::ranging::wifi::rtt::RttRangingCapabilities RangingCapabilities::getRttRangingCapabilities() const
	{
		return callObjectMethod(
			"getRttRangingCapabilities",
			"()Landroid/ranging/wifi/rtt/RttRangingCapabilities;"
		);
	}
	inline JObject RangingCapabilities::getTechnologyAvailability() const
	{
		return callObjectMethod(
			"getTechnologyAvailability",
			"()Ljava/util/Map;"
		);
	}
	inline android::ranging::uwb::UwbRangingCapabilities RangingCapabilities::getUwbCapabilities() const
	{
		return callObjectMethod(
			"getUwbCapabilities",
			"()Landroid/ranging/uwb/UwbRangingCapabilities;"
		);
	}
	inline JString RangingCapabilities::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RangingCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::ranging

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging;
#endif
