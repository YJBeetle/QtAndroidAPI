#pragma once

#include "../../../JArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../widget/inline/InlinePresentationSpec.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./InlineSuggestionInfo.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject InlineSuggestionInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InlineSuggestionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString InlineSuggestionInfo::SOURCE_AUTOFILL()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InlineSuggestionInfo",
			"SOURCE_AUTOFILL",
			"Ljava/lang/String;"
		);
	}
	inline JString InlineSuggestionInfo::SOURCE_PLATFORM()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InlineSuggestionInfo",
			"SOURCE_PLATFORM",
			"Ljava/lang/String;"
		);
	}
	inline JString InlineSuggestionInfo::TYPE_ACTION()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InlineSuggestionInfo",
			"TYPE_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString InlineSuggestionInfo::TYPE_SUGGESTION()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InlineSuggestionInfo",
			"TYPE_SUGGESTION",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint InlineSuggestionInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean InlineSuggestionInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JArray InlineSuggestionInfo::getAutofillHints() const
	{
		return callObjectMethod(
			"getAutofillHints",
			"()[Ljava/lang/String;"
		);
	}
	inline android::widget::inline_::InlinePresentationSpec InlineSuggestionInfo::getInlinePresentationSpec() const
	{
		return callObjectMethod(
			"getInlinePresentationSpec",
			"()Landroid/widget/inline/InlinePresentationSpec;"
		);
	}
	inline JString InlineSuggestionInfo::getSource() const
	{
		return callObjectMethod(
			"getSource",
			"()Ljava/lang/String;"
		);
	}
	inline JString InlineSuggestionInfo::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline jint InlineSuggestionInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean InlineSuggestionInfo::isPinned() const
	{
		return callMethod<jboolean>(
			"isPinned",
			"()Z"
		);
	}
	inline JString InlineSuggestionInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void InlineSuggestionInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

