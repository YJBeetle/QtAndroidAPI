#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TranslationRequestValue.def.hpp"

namespace android::view::translation
{
	// Fields
	inline JObject TranslationRequestValue::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.TranslationRequestValue",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::view::translation::TranslationRequestValue TranslationRequestValue::forText(JString arg0)
	{
		return callStaticObjectMethod(
			"android.view.translation.TranslationRequestValue",
			"forText",
			"(Ljava/lang/CharSequence;)Landroid/view/translation/TranslationRequestValue;",
			arg0.object<jstring>()
		);
	}
	inline jint TranslationRequestValue::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean TranslationRequestValue::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString TranslationRequestValue::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint TranslationRequestValue::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString TranslationRequestValue::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TranslationRequestValue::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

