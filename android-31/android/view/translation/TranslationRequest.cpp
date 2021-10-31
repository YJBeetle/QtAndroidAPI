#include "../../os/Parcel.hpp"
#include "./TranslationRequest.hpp"

namespace android::view::translation
{
	// Fields
	__JniBaseClass TranslationRequest::CREATOR()
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
	
	// QJniObject forward
	TranslationRequest::TranslationRequest(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint TranslationRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint TranslationRequest::getFlags()
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	__JniBaseClass TranslationRequest::getTranslationRequestValues()
	{
		return callObjectMethod(
			"getTranslationRequestValues",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass TranslationRequest::getViewTranslationRequests()
	{
		return callObjectMethod(
			"getViewTranslationRequests",
			"()Ljava/util/List;"
		);
	}
	jstring TranslationRequest::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TranslationRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::translation

