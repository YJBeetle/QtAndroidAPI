#pragma once

#include "../../../location/Address.def.hpp"
#include "../../../location/Location.def.hpp"
#include "../../Uri.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../util/SparseArray.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./ResponderLocation.def.hpp"

namespace android::net::wifi::rtt
{
	// Fields
	inline jint ResponderLocation::ALTITUDE_FLOORS()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"ALTITUDE_FLOORS"
		);
	}
	inline jint ResponderLocation::ALTITUDE_METERS()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"ALTITUDE_METERS"
		);
	}
	inline jint ResponderLocation::ALTITUDE_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"ALTITUDE_UNDEFINED"
		);
	}
	inline JObject ResponderLocation::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.rtt.ResponderLocation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ResponderLocation::DATUM_NAD83_MLLW()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"DATUM_NAD83_MLLW"
		);
	}
	inline jint ResponderLocation::DATUM_NAD83_NAV88()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"DATUM_NAD83_NAV88"
		);
	}
	inline jint ResponderLocation::DATUM_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"DATUM_UNDEFINED"
		);
	}
	inline jint ResponderLocation::DATUM_WGS84()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"DATUM_WGS84"
		);
	}
	inline jint ResponderLocation::LCI_VERSION_1()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"LCI_VERSION_1"
		);
	}
	inline jint ResponderLocation::LOCATION_FIXED()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"LOCATION_FIXED"
		);
	}
	inline jint ResponderLocation::LOCATION_MOVEMENT_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"LOCATION_MOVEMENT_UNKNOWN"
		);
	}
	inline jint ResponderLocation::LOCATION_RESERVED()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"LOCATION_RESERVED"
		);
	}
	inline jint ResponderLocation::LOCATION_VARIABLE()
	{
		return getStaticField<jint>(
			"android.net.wifi.rtt.ResponderLocation",
			"LOCATION_VARIABLE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ResponderLocation::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ResponderLocation::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jdouble ResponderLocation::getAltitude() const
	{
		return callMethod<jdouble>(
			"getAltitude",
			"()D"
		);
	}
	inline jint ResponderLocation::getAltitudeType() const
	{
		return callMethod<jint>(
			"getAltitudeType",
			"()I"
		);
	}
	inline jdouble ResponderLocation::getAltitudeUncertainty() const
	{
		return callMethod<jdouble>(
			"getAltitudeUncertainty",
			"()D"
		);
	}
	inline JObject ResponderLocation::getColocatedBssids() const
	{
		return callObjectMethod(
			"getColocatedBssids",
			"()Ljava/util/List;"
		);
	}
	inline jint ResponderLocation::getDatum() const
	{
		return callMethod<jint>(
			"getDatum",
			"()I"
		);
	}
	inline jint ResponderLocation::getExpectedToMove() const
	{
		return callMethod<jint>(
			"getExpectedToMove",
			"()I"
		);
	}
	inline jdouble ResponderLocation::getFloorNumber() const
	{
		return callMethod<jdouble>(
			"getFloorNumber",
			"()D"
		);
	}
	inline jdouble ResponderLocation::getHeightAboveFloorMeters() const
	{
		return callMethod<jdouble>(
			"getHeightAboveFloorMeters",
			"()D"
		);
	}
	inline jdouble ResponderLocation::getHeightAboveFloorUncertaintyMeters() const
	{
		return callMethod<jdouble>(
			"getHeightAboveFloorUncertaintyMeters",
			"()D"
		);
	}
	inline jdouble ResponderLocation::getLatitude() const
	{
		return callMethod<jdouble>(
			"getLatitude",
			"()D"
		);
	}
	inline jdouble ResponderLocation::getLatitudeUncertainty() const
	{
		return callMethod<jdouble>(
			"getLatitudeUncertainty",
			"()D"
		);
	}
	inline jint ResponderLocation::getLciVersion() const
	{
		return callMethod<jint>(
			"getLciVersion",
			"()I"
		);
	}
	inline jdouble ResponderLocation::getLongitude() const
	{
		return callMethod<jdouble>(
			"getLongitude",
			"()D"
		);
	}
	inline jdouble ResponderLocation::getLongitudeUncertainty() const
	{
		return callMethod<jdouble>(
			"getLongitudeUncertainty",
			"()D"
		);
	}
	inline JString ResponderLocation::getMapImageMimeType() const
	{
		return callObjectMethod(
			"getMapImageMimeType",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::Uri ResponderLocation::getMapImageUri() const
	{
		return callObjectMethod(
			"getMapImageUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jboolean ResponderLocation::getRegisteredLocationAgreementIndication() const
	{
		return callMethod<jboolean>(
			"getRegisteredLocationAgreementIndication",
			"()Z"
		);
	}
	inline jint ResponderLocation::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean ResponderLocation::isLciSubelementValid() const
	{
		return callMethod<jboolean>(
			"isLciSubelementValid",
			"()Z"
		);
	}
	inline jboolean ResponderLocation::isZaxisSubelementValid() const
	{
		return callMethod<jboolean>(
			"isZaxisSubelementValid",
			"()Z"
		);
	}
	inline android::location::Address ResponderLocation::toCivicLocationAddress() const
	{
		return callObjectMethod(
			"toCivicLocationAddress",
			"()Landroid/location/Address;"
		);
	}
	inline android::util::SparseArray ResponderLocation::toCivicLocationSparseArray() const
	{
		return callObjectMethod(
			"toCivicLocationSparseArray",
			"()Landroid/util/SparseArray;"
		);
	}
	inline android::location::Location ResponderLocation::toLocation() const
	{
		return callObjectMethod(
			"toLocation",
			"()Landroid/location/Location;"
		);
	}
	inline void ResponderLocation::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::rtt

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::rtt;
#endif
