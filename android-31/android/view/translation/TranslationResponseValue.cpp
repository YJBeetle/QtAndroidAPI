#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TranslationResponseValue.hpp"

namespace android::view::translation
{
	// Fields
	JObject TranslationResponseValue::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.TranslationResponseValue",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	JString TranslationResponseValue::EXTRA_DEFINITIONS()
	{
		return getStaticObjectField(
			"android.view.translation.TranslationResponseValue",
			"EXTRA_DEFINITIONS",
			"Ljava/lang/String;"
		);
	}
	jint TranslationResponseValue::STATUS_ERROR()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationResponseValue",
			"STATUS_ERROR"
		);
	}
	jint TranslationResponseValue::STATUS_SUCCESS()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationResponseValue",
			"STATUS_SUCCESS"
		);
	}
	
	// QAndroidJniObject forward
	TranslationResponseValue::TranslationResponseValue(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::view::translation::TranslationResponseValue TranslationResponseValue::forError()
	{
		return callStaticObjectMethod(
			"android.view.translation.TranslationResponseValue",
			"forError",
			"()Landroid/view/translation/TranslationResponseValue;"
		);
	}
	jint TranslationResponseValue::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean TranslationResponseValue::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::os::Bundle TranslationResponseValue::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint TranslationResponseValue::getStatusCode()
	{
		return callMethod<jint>(
			"getStatusCode",
			"()I"
		);
	}
	JString TranslationResponseValue::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString TranslationResponseValue::getTransliteration()
	{
		return callObjectMethod(
			"getTransliteration",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint TranslationResponseValue::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString TranslationResponseValue::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TranslationResponseValue::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::translation

