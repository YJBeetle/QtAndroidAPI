#include "../../os/Parcel.hpp"
#include "../../util/SparseArray.hpp"
#include "../../../JString.hpp"
#include "./TranslationResponse.hpp"

namespace android::view::translation
{
	// Fields
	JObject TranslationResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.TranslationResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint TranslationResponse::TRANSLATION_STATUS_CONTEXT_UNSUPPORTED()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationResponse",
			"TRANSLATION_STATUS_CONTEXT_UNSUPPORTED"
		);
	}
	jint TranslationResponse::TRANSLATION_STATUS_SUCCESS()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationResponse",
			"TRANSLATION_STATUS_SUCCESS"
		);
	}
	jint TranslationResponse::TRANSLATION_STATUS_UNKNOWN_ERROR()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationResponse",
			"TRANSLATION_STATUS_UNKNOWN_ERROR"
		);
	}
	
	// Constructors
	
	// Methods
	jint TranslationResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::util::SparseArray TranslationResponse::getTranslationResponseValues() const
	{
		return callObjectMethod(
			"getTranslationResponseValues",
			"()Landroid/util/SparseArray;"
		);
	}
	jint TranslationResponse::getTranslationStatus() const
	{
		return callMethod<jint>(
			"getTranslationStatus",
			"()I"
		);
	}
	android::util::SparseArray TranslationResponse::getViewTranslationResponses() const
	{
		return callObjectMethod(
			"getViewTranslationResponses",
			"()Landroid/util/SparseArray;"
		);
	}
	jboolean TranslationResponse::isFinalResponse() const
	{
		return callMethod<jboolean>(
			"isFinalResponse",
			"()Z"
		);
	}
	JString TranslationResponse::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TranslationResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::translation

