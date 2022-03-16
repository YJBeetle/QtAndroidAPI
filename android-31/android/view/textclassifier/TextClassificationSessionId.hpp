#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TextClassificationSessionId.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	inline JObject TextClassificationSessionId::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextClassificationSessionId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TextClassificationSessionId::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean TextClassificationSessionId::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString TextClassificationSessionId::getValue() const
	{
		return callObjectMethod(
			"getValue",
			"()Ljava/lang/String;"
		);
	}
	inline jint TextClassificationSessionId::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString TextClassificationSessionId::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TextClassificationSessionId::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

