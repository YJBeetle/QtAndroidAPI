#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../util/SparseArray.def.hpp"
#include "../../../JString.hpp"
#include "./TranslationResponse.def.hpp"

namespace android::view::translation
{
	// Fields
	inline JObject TranslationResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.TranslationResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint TranslationResponse::TRANSLATION_STATUS_CONTEXT_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationResponse",
			"TRANSLATION_STATUS_CONTEXT_UNSUPPORTED"
		);
	}
	inline jint TranslationResponse::TRANSLATION_STATUS_SUCCESS()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationResponse",
			"TRANSLATION_STATUS_SUCCESS"
		);
	}
	inline jint TranslationResponse::TRANSLATION_STATUS_UNKNOWN_ERROR()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationResponse",
			"TRANSLATION_STATUS_UNKNOWN_ERROR"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint TranslationResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::util::SparseArray TranslationResponse::getTranslationResponseValues() const
	{
		return callObjectMethod(
			"getTranslationResponseValues",
			"()Landroid/util/SparseArray;"
		);
	}
	inline jint TranslationResponse::getTranslationStatus() const
	{
		return callMethod<jint>(
			"getTranslationStatus",
			"()I"
		);
	}
	inline android::util::SparseArray TranslationResponse::getViewTranslationResponses() const
	{
		return callObjectMethod(
			"getViewTranslationResponses",
			"()Landroid/util/SparseArray;"
		);
	}
	inline jboolean TranslationResponse::isFinalResponse() const
	{
		return callMethod<jboolean>(
			"isFinalResponse",
			"()Z"
		);
	}
	inline JString TranslationResponse::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TranslationResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::translation;
#endif
