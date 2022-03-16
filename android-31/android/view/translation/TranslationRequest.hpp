#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./TranslationRequest.def.hpp"

namespace android::view::translation
{
	// Fields
	inline JObject TranslationRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.TranslationRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint TranslationRequest::FLAG_DICTIONARY_RESULT()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationRequest",
			"FLAG_DICTIONARY_RESULT"
		);
	}
	inline jint TranslationRequest::FLAG_PARTIAL_RESPONSES()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationRequest",
			"FLAG_PARTIAL_RESPONSES"
		);
	}
	inline jint TranslationRequest::FLAG_TRANSLATION_RESULT()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationRequest",
			"FLAG_TRANSLATION_RESULT"
		);
	}
	inline jint TranslationRequest::FLAG_TRANSLITERATION_RESULT()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationRequest",
			"FLAG_TRANSLITERATION_RESULT"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TranslationRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint TranslationRequest::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	inline JObject TranslationRequest::getTranslationRequestValues() const
	{
		return callObjectMethod(
			"getTranslationRequestValues",
			"()Ljava/util/List;"
		);
	}
	inline JObject TranslationRequest::getViewTranslationRequests() const
	{
		return callObjectMethod(
			"getViewTranslationRequests",
			"()Ljava/util/List;"
		);
	}
	inline JString TranslationRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TranslationRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::translation

// Base class headers

