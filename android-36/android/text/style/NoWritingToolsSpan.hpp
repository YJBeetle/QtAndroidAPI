#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./NoWritingToolsSpan.def.hpp"

namespace android::text::style
{
	// Fields
	inline JObject NoWritingToolsSpan::CREATOR()
	{
		return getStaticObjectField(
			"android.text.style.NoWritingToolsSpan",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline NoWritingToolsSpan::NoWritingToolsSpan()
		: JObject(
			"android.text.style.NoWritingToolsSpan",
			"()V"
		) {}
	
	// Methods
	inline jint NoWritingToolsSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint NoWritingToolsSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	inline JString NoWritingToolsSpan::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void NoWritingToolsSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::style;
#endif
