#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SyncNotedAppOp.def.hpp"

namespace android::app
{
	// Fields
	inline JObject SyncNotedAppOp::CREATOR()
	{
		return getStaticObjectField(
			"android.app.SyncNotedAppOp",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline SyncNotedAppOp::SyncNotedAppOp(jint arg0, JString arg1)
		: JObject(
			"android.app.SyncNotedAppOp",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jint SyncNotedAppOp::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SyncNotedAppOp::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString SyncNotedAppOp::getAttributionTag() const
	{
		return callObjectMethod(
			"getAttributionTag",
			"()Ljava/lang/String;"
		);
	}
	inline JString SyncNotedAppOp::getOp() const
	{
		return callObjectMethod(
			"getOp",
			"()Ljava/lang/String;"
		);
	}
	inline jint SyncNotedAppOp::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString SyncNotedAppOp::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SyncNotedAppOp::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
