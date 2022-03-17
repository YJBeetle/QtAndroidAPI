#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./TextClassificationContext.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	inline JObject TextClassificationContext::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassificationContext",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TextClassificationContext::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString TextClassificationContext::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JString TextClassificationContext::getWidgetType() const
	{
		return callObjectMethod(
			"getWidgetType",
			"()Ljava/lang/String;"
		);
	}
	inline JString TextClassificationContext::getWidgetVersion() const
	{
		return callObjectMethod(
			"getWidgetVersion",
			"()Ljava/lang/String;"
		);
	}
	inline JString TextClassificationContext::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TextClassificationContext::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

// Base class headers

