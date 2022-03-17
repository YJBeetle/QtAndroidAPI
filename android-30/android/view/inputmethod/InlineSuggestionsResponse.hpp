#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./InlineSuggestionsResponse.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject InlineSuggestionsResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InlineSuggestionsResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint InlineSuggestionsResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean InlineSuggestionsResponse::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject InlineSuggestionsResponse::getInlineSuggestions() const
	{
		return callObjectMethod(
			"getInlineSuggestions",
			"()Ljava/util/List;"
		);
	}
	inline jint InlineSuggestionsResponse::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString InlineSuggestionsResponse::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void InlineSuggestionsResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
