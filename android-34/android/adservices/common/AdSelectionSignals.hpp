#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AdSelectionSignals.def.hpp"

namespace android::adservices::common
{
	// Fields
	inline JObject AdSelectionSignals::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.common.AdSelectionSignals",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline android::adservices::common::AdSelectionSignals AdSelectionSignals::EMPTY()
	{
		return getStaticObjectField(
			"android.adservices.common.AdSelectionSignals",
			"EMPTY",
			"Landroid/adservices/common/AdSelectionSignals;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::adservices::common::AdSelectionSignals AdSelectionSignals::fromString(JString arg0)
	{
		return callStaticObjectMethod(
			"android.adservices.common.AdSelectionSignals",
			"fromString",
			"(Ljava/lang/String;)Landroid/adservices/common/AdSelectionSignals;",
			arg0.object<jstring>()
		);
	}
	inline jint AdSelectionSignals::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AdSelectionSignals::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint AdSelectionSignals::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AdSelectionSignals::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AdSelectionSignals::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
