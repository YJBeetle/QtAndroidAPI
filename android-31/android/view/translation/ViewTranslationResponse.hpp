#pragma once

#include "../../os/Parcel.def.hpp"
#include "../autofill/AutofillId.def.hpp"
#include "./TranslationResponseValue.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ViewTranslationResponse.def.hpp"

namespace android::view::translation
{
	// Fields
	inline JObject ViewTranslationResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.ViewTranslationResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ViewTranslationResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ViewTranslationResponse::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::view::autofill::AutofillId ViewTranslationResponse::getAutofillId() const
	{
		return callObjectMethod(
			"getAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	inline JObject ViewTranslationResponse::getKeys() const
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/Set;"
		);
	}
	inline android::view::translation::TranslationResponseValue ViewTranslationResponse::getValue(JString arg0) const
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Landroid/view/translation/TranslationResponseValue;",
			arg0.object<jstring>()
		);
	}
	inline jint ViewTranslationResponse::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString ViewTranslationResponse::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ViewTranslationResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

