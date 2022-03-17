#pragma once

#include "../../os/Parcel.def.hpp"
#include "../autofill/AutofillId.def.hpp"
#include "./TranslationRequestValue.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ViewTranslationRequest.def.hpp"

namespace android::view::translation
{
	// Fields
	inline JObject ViewTranslationRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.ViewTranslationRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString ViewTranslationRequest::ID_TEXT()
	{
		return getStaticObjectField(
			"android.view.translation.ViewTranslationRequest",
			"ID_TEXT",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ViewTranslationRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ViewTranslationRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::view::autofill::AutofillId ViewTranslationRequest::getAutofillId() const
	{
		return callObjectMethod(
			"getAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	inline JObject ViewTranslationRequest::getKeys() const
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/Set;"
		);
	}
	inline android::view::translation::TranslationRequestValue ViewTranslationRequest::getValue(JString arg0) const
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Landroid/view/translation/TranslationRequestValue;",
			arg0.object<jstring>()
		);
	}
	inline jint ViewTranslationRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString ViewTranslationRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ViewTranslationRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

