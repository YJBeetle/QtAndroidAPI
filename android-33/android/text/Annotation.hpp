#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./Annotation.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline Annotation::Annotation(android::os::Parcel arg0)
		: JObject(
			"android.text.Annotation",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline Annotation::Annotation(JString arg0, JString arg1)
		: JObject(
			"android.text.Annotation",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jint Annotation::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString Annotation::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	inline jint Annotation::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline JString Annotation::getValue() const
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		);
	}
	inline void Annotation::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif
