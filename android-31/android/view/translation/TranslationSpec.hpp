#pragma once

#include "../../icu/util/ULocale.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TranslationSpec.def.hpp"

namespace android::view::translation
{
	// Fields
	inline JObject TranslationSpec::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.TranslationSpec",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint TranslationSpec::DATA_FORMAT_TEXT()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationSpec",
			"DATA_FORMAT_TEXT"
		);
	}
	
	// Constructors
	inline TranslationSpec::TranslationSpec(android::icu::util::ULocale arg0, jint arg1)
		: JObject(
			"android.view.translation.TranslationSpec",
			"(Landroid/icu/util/ULocale;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jint TranslationSpec::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean TranslationSpec::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint TranslationSpec::getDataFormat() const
	{
		return callMethod<jint>(
			"getDataFormat",
			"()I"
		);
	}
	inline android::icu::util::ULocale TranslationSpec::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	inline jint TranslationSpec::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString TranslationSpec::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TranslationSpec::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

