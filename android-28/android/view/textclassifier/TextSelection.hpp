#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./TextSelection.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	inline JObject TextSelection::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextSelection",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TextSelection::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jfloat TextSelection::getConfidenceScore(JString arg0) const
	{
		return callMethod<jfloat>(
			"getConfidenceScore",
			"(Ljava/lang/String;)F",
			arg0.object<jstring>()
		);
	}
	inline JString TextSelection::getEntity(jint arg0) const
	{
		return callObjectMethod(
			"getEntity",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint TextSelection::getEntityCount() const
	{
		return callMethod<jint>(
			"getEntityCount",
			"()I"
		);
	}
	inline JString TextSelection::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline jint TextSelection::getSelectionEndIndex() const
	{
		return callMethod<jint>(
			"getSelectionEndIndex",
			"()I"
		);
	}
	inline jint TextSelection::getSelectionStartIndex() const
	{
		return callMethod<jint>(
			"getSelectionStartIndex",
			"()I"
		);
	}
	inline JString TextSelection::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TextSelection::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

