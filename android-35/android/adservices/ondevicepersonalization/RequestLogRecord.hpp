#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../java/time/Instant.def.hpp"
#include "./RequestLogRecord.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	inline JObject RequestLogRecord::CREATOR()
	{
		return getStaticObjectField(
			"android.adservices.ondevicepersonalization.RequestLogRecord",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RequestLogRecord::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean RequestLogRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject RequestLogRecord::getRows() const
	{
		return callObjectMethod(
			"getRows",
			"()Ljava/util/List;"
		);
	}
	inline java::time::Instant RequestLogRecord::getTime() const
	{
		return callObjectMethod(
			"getTime",
			"()Ljava/time/Instant;"
		);
	}
	inline jint RequestLogRecord::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void RequestLogRecord::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
