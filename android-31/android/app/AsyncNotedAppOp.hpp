#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AsyncNotedAppOp.def.hpp"

namespace android::app
{
	// Fields
	inline JObject AsyncNotedAppOp::CREATOR()
	{
		return getStaticObjectField(
			"android.app.AsyncNotedAppOp",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AsyncNotedAppOp::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AsyncNotedAppOp::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString AsyncNotedAppOp::getAttributionTag() const
	{
		return callObjectMethod(
			"getAttributionTag",
			"()Ljava/lang/String;"
		);
	}
	inline JString AsyncNotedAppOp::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	inline jint AsyncNotedAppOp::getNotingUid() const
	{
		return callMethod<jint>(
			"getNotingUid",
			"()I"
		);
	}
	inline JString AsyncNotedAppOp::getOp() const
	{
		return callObjectMethod(
			"getOp",
			"()Ljava/lang/String;"
		);
	}
	inline jlong AsyncNotedAppOp::getTime() const
	{
		return callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	inline jint AsyncNotedAppOp::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void AsyncNotedAppOp::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
