#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./TranslationRequest.hpp"

namespace android::view::translation
{
	// Fields
	JObject TranslationRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.TranslationRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint TranslationRequest::FLAG_DICTIONARY_RESULT()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationRequest",
			"FLAG_DICTIONARY_RESULT"
		);
	}
	jint TranslationRequest::FLAG_PARTIAL_RESPONSES()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationRequest",
			"FLAG_PARTIAL_RESPONSES"
		);
	}
	jint TranslationRequest::FLAG_TRANSLATION_RESULT()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationRequest",
			"FLAG_TRANSLATION_RESULT"
		);
	}
	jint TranslationRequest::FLAG_TRANSLITERATION_RESULT()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationRequest",
			"FLAG_TRANSLITERATION_RESULT"
		);
	}
	
	// QAndroidJniObject forward
	TranslationRequest::TranslationRequest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint TranslationRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint TranslationRequest::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	JObject TranslationRequest::getTranslationRequestValues() const
	{
		return callObjectMethod(
			"getTranslationRequestValues",
			"()Ljava/util/List;"
		);
	}
	JObject TranslationRequest::getViewTranslationRequests() const
	{
		return callObjectMethod(
			"getViewTranslationRequests",
			"()Ljava/util/List;"
		);
	}
	JString TranslationRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TranslationRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::translation

