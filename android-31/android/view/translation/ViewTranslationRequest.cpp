#include "../../os/Parcel.hpp"
#include "../autofill/AutofillId.hpp"
#include "./TranslationRequestValue.hpp"
#include "./ViewTranslationRequest.hpp"

namespace android::view::translation
{
	// Fields
	JObject ViewTranslationRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.ViewTranslationRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring ViewTranslationRequest::ID_TEXT()
	{
		return getStaticObjectField(
			"android.view.translation.ViewTranslationRequest",
			"ID_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	ViewTranslationRequest::ViewTranslationRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ViewTranslationRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ViewTranslationRequest::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::view::autofill::AutofillId ViewTranslationRequest::getAutofillId()
	{
		return callObjectMethod(
			"getAutofillId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	JObject ViewTranslationRequest::getKeys()
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/Set;"
		);
	}
	android::view::translation::TranslationRequestValue ViewTranslationRequest::getValue(jstring arg0)
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Landroid/view/translation/TranslationRequestValue;",
			arg0
		);
	}
	jint ViewTranslationRequest::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ViewTranslationRequest::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ViewTranslationRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::translation

