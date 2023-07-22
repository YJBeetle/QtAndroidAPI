#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "./PrintJobId.def.hpp"

namespace android::print
{
	// Fields
	inline JObject PrintJobId::CREATOR()
	{
		return getStaticObjectField(
			"android.print.PrintJobId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PrintJobId::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PrintJobId::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint PrintJobId::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void PrintJobId::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::print

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::print;
#endif
