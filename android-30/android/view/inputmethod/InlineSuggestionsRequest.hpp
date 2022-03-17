#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/LocaleList.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./InlineSuggestionsRequest.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject InlineSuggestionsRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InlineSuggestionsRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint InlineSuggestionsRequest::SUGGESTION_COUNT_UNLIMITED()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.InlineSuggestionsRequest",
			"SUGGESTION_COUNT_UNLIMITED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint InlineSuggestionsRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean InlineSuggestionsRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::os::Bundle InlineSuggestionsRequest::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString InlineSuggestionsRequest::getHostPackageName() const
	{
		return callObjectMethod(
			"getHostPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JObject InlineSuggestionsRequest::getInlinePresentationSpecs() const
	{
		return callObjectMethod(
			"getInlinePresentationSpecs",
			"()Ljava/util/List;"
		);
	}
	inline jint InlineSuggestionsRequest::getMaxSuggestionCount() const
	{
		return callMethod<jint>(
			"getMaxSuggestionCount",
			"()I"
		);
	}
	inline android::os::LocaleList InlineSuggestionsRequest::getSupportedLocales() const
	{
		return callObjectMethod(
			"getSupportedLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	inline jint InlineSuggestionsRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString InlineSuggestionsRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void InlineSuggestionsRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
