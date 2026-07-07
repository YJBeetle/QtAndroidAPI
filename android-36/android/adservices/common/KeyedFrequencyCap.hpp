#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/time/Duration.def.hpp"
#include "./KeyedFrequencyCap.def.hpp"

namespace android::adservices::common
{
	// Fields
	inline JObject KeyedFrequencyCap::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.common.KeyedFrequencyCap",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint KeyedFrequencyCap::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean KeyedFrequencyCap::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint KeyedFrequencyCap::getAdCounterKey() const
	{
		return callMethod<jint>(
			"getAdCounterKey",
			"()I"
		);
	}
	inline java::time::Duration KeyedFrequencyCap::getInterval() const
	{
		return callObjectMethod(
			"getInterval",
			"()Ljava/time/Duration;"
		);
	}
	inline jint KeyedFrequencyCap::getMaxCount() const
	{
		return callMethod<jint>(
			"getMaxCount",
			"()I"
		);
	}
	inline jint KeyedFrequencyCap::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString KeyedFrequencyCap::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void KeyedFrequencyCap::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
