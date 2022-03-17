#pragma once

#include "../../JByteArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./GnssNavigationMessage.def.hpp"

namespace android::location
{
	// Fields
	inline JObject GnssNavigationMessage::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssNavigationMessage",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint GnssNavigationMessage::STATUS_PARITY_PASSED()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"STATUS_PARITY_PASSED"
		);
	}
	inline jint GnssNavigationMessage::STATUS_PARITY_REBUILT()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"STATUS_PARITY_REBUILT"
		);
	}
	inline jint GnssNavigationMessage::STATUS_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"STATUS_UNKNOWN"
		);
	}
	inline jint GnssNavigationMessage::TYPE_BDS_D1()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_BDS_D1"
		);
	}
	inline jint GnssNavigationMessage::TYPE_BDS_D2()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_BDS_D2"
		);
	}
	inline jint GnssNavigationMessage::TYPE_GAL_F()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GAL_F"
		);
	}
	inline jint GnssNavigationMessage::TYPE_GAL_I()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GAL_I"
		);
	}
	inline jint GnssNavigationMessage::TYPE_GLO_L1CA()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GLO_L1CA"
		);
	}
	inline jint GnssNavigationMessage::TYPE_GPS_CNAV2()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GPS_CNAV2"
		);
	}
	inline jint GnssNavigationMessage::TYPE_GPS_L1CA()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GPS_L1CA"
		);
	}
	inline jint GnssNavigationMessage::TYPE_GPS_L2CNAV()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GPS_L2CNAV"
		);
	}
	inline jint GnssNavigationMessage::TYPE_GPS_L5CNAV()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_GPS_L5CNAV"
		);
	}
	inline jint GnssNavigationMessage::TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.location.GnssNavigationMessage",
			"TYPE_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint GnssNavigationMessage::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JByteArray GnssNavigationMessage::getData() const
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	inline jint GnssNavigationMessage::getMessageId() const
	{
		return callMethod<jint>(
			"getMessageId",
			"()I"
		);
	}
	inline jint GnssNavigationMessage::getStatus() const
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	inline jint GnssNavigationMessage::getSubmessageId() const
	{
		return callMethod<jint>(
			"getSubmessageId",
			"()I"
		);
	}
	inline jint GnssNavigationMessage::getSvid() const
	{
		return callMethod<jint>(
			"getSvid",
			"()I"
		);
	}
	inline jint GnssNavigationMessage::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline JString GnssNavigationMessage::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void GnssNavigationMessage::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
