#pragma once

#include "../../icu/util/ULocale.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./TextLanguage.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	inline JObject TextLanguage::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextLanguage",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TextLanguage::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jfloat TextLanguage::getConfidenceScore(android::icu::util::ULocale arg0) const
	{
		return callMethod<jfloat>(
			"getConfidenceScore",
			"(Landroid/icu/util/ULocale;)F",
			arg0.object()
		);
	}
	inline android::os::Bundle TextLanguage::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString TextLanguage::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline android::icu::util::ULocale TextLanguage::getLocale(jint arg0) const
	{
		return callObjectMethod(
			"getLocale",
			"(I)Landroid/icu/util/ULocale;",
			arg0
		);
	}
	inline jint TextLanguage::getLocaleHypothesisCount() const
	{
		return callMethod<jint>(
			"getLocaleHypothesisCount",
			"()I"
		);
	}
	inline JString TextLanguage::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TextLanguage::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

