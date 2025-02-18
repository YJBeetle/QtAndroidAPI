#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./GnssCapabilities.def.hpp"

namespace android::location
{
	// Fields
	inline jint GnssCapabilities::CAPABILITY_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.location.GnssCapabilities",
			"CAPABILITY_SUPPORTED"
		);
	}
	inline jint GnssCapabilities::CAPABILITY_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.location.GnssCapabilities",
			"CAPABILITY_UNKNOWN"
		);
	}
	inline jint GnssCapabilities::CAPABILITY_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.location.GnssCapabilities",
			"CAPABILITY_UNSUPPORTED"
		);
	}
	inline JObject GnssCapabilities::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssCapabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint GnssCapabilities::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean GnssCapabilities::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject GnssCapabilities::getGnssSignalTypes() const
	{
		return callObjectMethod(
			"getGnssSignalTypes",
			"()Ljava/util/List;"
		);
	}
	inline jint GnssCapabilities::hasAccumulatedDeltaRange() const
	{
		return callMethod<jint>(
			"hasAccumulatedDeltaRange",
			"()I"
		);
	}
	inline jboolean GnssCapabilities::hasAntennaInfo() const
	{
		return callMethod<jboolean>(
			"hasAntennaInfo",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasGeofencing() const
	{
		return callMethod<jboolean>(
			"hasGeofencing",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasGnssAntennaInfo() const
	{
		return callMethod<jboolean>(
			"hasGnssAntennaInfo",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasLowPowerMode() const
	{
		return callMethod<jboolean>(
			"hasLowPowerMode",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasMeasurementCorrections() const
	{
		return callMethod<jboolean>(
			"hasMeasurementCorrections",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasMeasurementCorrectionsExcessPathLength() const
	{
		return callMethod<jboolean>(
			"hasMeasurementCorrectionsExcessPathLength",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasMeasurementCorrectionsForDriving() const
	{
		return callMethod<jboolean>(
			"hasMeasurementCorrectionsForDriving",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasMeasurementCorrectionsLosSats() const
	{
		return callMethod<jboolean>(
			"hasMeasurementCorrectionsLosSats",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasMeasurementCorrectionsReflectingPlane() const
	{
		return callMethod<jboolean>(
			"hasMeasurementCorrectionsReflectingPlane",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasMeasurementCorrelationVectors() const
	{
		return callMethod<jboolean>(
			"hasMeasurementCorrelationVectors",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasMeasurements() const
	{
		return callMethod<jboolean>(
			"hasMeasurements",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasMsa() const
	{
		return callMethod<jboolean>(
			"hasMsa",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasMsb() const
	{
		return callMethod<jboolean>(
			"hasMsb",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasNavigationMessages() const
	{
		return callMethod<jboolean>(
			"hasNavigationMessages",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasOnDemandTime() const
	{
		return callMethod<jboolean>(
			"hasOnDemandTime",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasPowerMultibandAcquisition() const
	{
		return callMethod<jboolean>(
			"hasPowerMultibandAcquisition",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasPowerMultibandTracking() const
	{
		return callMethod<jboolean>(
			"hasPowerMultibandTracking",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasPowerOtherModes() const
	{
		return callMethod<jboolean>(
			"hasPowerOtherModes",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasPowerSinglebandAcquisition() const
	{
		return callMethod<jboolean>(
			"hasPowerSinglebandAcquisition",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasPowerSinglebandTracking() const
	{
		return callMethod<jboolean>(
			"hasPowerSinglebandTracking",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasPowerTotal() const
	{
		return callMethod<jboolean>(
			"hasPowerTotal",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasSatelliteBlocklist() const
	{
		return callMethod<jboolean>(
			"hasSatelliteBlocklist",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasSatellitePvt() const
	{
		return callMethod<jboolean>(
			"hasSatellitePvt",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasScheduling() const
	{
		return callMethod<jboolean>(
			"hasScheduling",
			"()Z"
		);
	}
	inline jboolean GnssCapabilities::hasSingleShotFix() const
	{
		return callMethod<jboolean>(
			"hasSingleShotFix",
			"()Z"
		);
	}
	inline jint GnssCapabilities::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString GnssCapabilities::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void GnssCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::location;
#endif
