#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TranslationResponseValue.def.hpp"

namespace android::view::translation
{
	// Fields
	inline JObject TranslationResponseValue::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.TranslationResponseValue",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString TranslationResponseValue::EXTRA_DEFINITIONS()
	{
		return getStaticObjectField(
			"android.view.translation.TranslationResponseValue",
			"EXTRA_DEFINITIONS",
			"Ljava/lang/String;"
		);
	}
	inline jint TranslationResponseValue::STATUS_ERROR()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationResponseValue",
			"STATUS_ERROR"
		);
	}
	inline jint TranslationResponseValue::STATUS_SUCCESS()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationResponseValue",
			"STATUS_SUCCESS"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::view::translation::TranslationResponseValue TranslationResponseValue::forError()
	{
		return callStaticObjectMethod(
			"android.view.translation.TranslationResponseValue",
			"forError",
			"()Landroid/view/translation/TranslationResponseValue;"
		);
	}
	inline jint TranslationResponseValue::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean TranslationResponseValue::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::os::Bundle TranslationResponseValue::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint TranslationResponseValue::getStatusCode() const
	{
		return callMethod<jint>(
			"getStatusCode",
			"()I"
		);
	}
	inline JString TranslationResponseValue::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString TranslationResponseValue::getTransliteration() const
	{
		return callObjectMethod(
			"getTransliteration",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint TranslationResponseValue::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString TranslationResponseValue::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TranslationResponseValue::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

