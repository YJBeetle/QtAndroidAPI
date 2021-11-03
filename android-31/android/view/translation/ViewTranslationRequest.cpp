#include "../../os/Parcel.hpp"
#include "../autofill/AutofillId.hpp"
#include "./TranslationRequestValue.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	JString ViewTranslationRequest::ID_TEXT()
	{
		return getStaticObjectField(
			"android.view.translation.ViewTranslationRequest",
			"ID_TEXT",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	ViewTranslationRequest::ViewTranslationRequest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ViewTranslationRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ViewTranslationRequest::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
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
	android::view::translation::TranslationRequestValue ViewTranslationRequest::getValue(JString arg0)
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Landroid/view/translation/TranslationRequestValue;",
			arg0.object<jstring>()
		);
	}
	jint ViewTranslationRequest::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString ViewTranslationRequest::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

