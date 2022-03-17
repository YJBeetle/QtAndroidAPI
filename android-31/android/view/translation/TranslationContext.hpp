#pragma once

#include "../../os/Parcel.def.hpp"
#include "./TranslationSpec.def.hpp"
#include "../../../JString.hpp"
#include "./TranslationContext.def.hpp"

namespace android::view::translation
{
	// Fields
	inline JObject TranslationContext::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.TranslationContext",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint TranslationContext::FLAG_DEFINITIONS()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationContext",
			"FLAG_DEFINITIONS"
		);
	}
	inline jint TranslationContext::FLAG_LOW_LATENCY()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationContext",
			"FLAG_LOW_LATENCY"
		);
	}
	inline jint TranslationContext::FLAG_TRANSLITERATION()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationContext",
			"FLAG_TRANSLITERATION"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TranslationContext::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::view::translation::TranslationSpec TranslationContext::getSourceSpec() const
	{
		return callObjectMethod(
			"getSourceSpec",
			"()Landroid/view/translation/TranslationSpec;"
		);
	}
	inline android::view::translation::TranslationSpec TranslationContext::getTargetSpec() const
	{
		return callObjectMethod(
			"getTargetSpec",
			"()Landroid/view/translation/TranslationSpec;"
		);
	}
	inline jint TranslationContext::getTranslationFlags() const
	{
		return callMethod<jint>(
			"getTranslationFlags",
			"()I"
		);
	}
	inline JString TranslationContext::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TranslationContext::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

