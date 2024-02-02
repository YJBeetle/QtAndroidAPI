#pragma once

#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AdData.def.hpp"

namespace android::adservices::common
{
	// Fields
	inline JObject AdData::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.common.AdData",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AdData::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AdData::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString AdData::getMetadata() const
	{
		return callObjectMethod(
			"getMetadata",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::Uri AdData::getRenderUri() const
	{
		return callObjectMethod(
			"getRenderUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jint AdData::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AdData::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AdData::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::adservices::common

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::common;
#endif
