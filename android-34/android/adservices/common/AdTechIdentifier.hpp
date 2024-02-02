#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AdTechIdentifier.def.hpp"

namespace android::adservices::common
{
	// Fields
	inline JObject AdTechIdentifier::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.common.AdTechIdentifier",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::adservices::common::AdTechIdentifier AdTechIdentifier::fromString(JString arg0)
	{
		return callStaticObjectMethod(
			"android.adservices.common.AdTechIdentifier",
			"fromString",
			"(Ljava/lang/String;)Landroid/adservices/common/AdTechIdentifier;",
			arg0.object<jstring>()
		);
	}
	inline jint AdTechIdentifier::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AdTechIdentifier::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint AdTechIdentifier::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AdTechIdentifier::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AdTechIdentifier::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
