#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./TranslationResponseValue.hpp"

namespace android::view::translation
{
	// Fields
	__JniBaseClass TranslationResponseValue::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.TranslationResponseValue",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring TranslationResponseValue::EXTRA_DEFINITIONS()
	{
		return getStaticObjectField(
			"android.view.translation.TranslationResponseValue",
			"EXTRA_DEFINITIONS",
			"Ljava/lang/String;"
		).object<jstring>();
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
	
	// QJniObject forward
	TranslationResponseValue::TranslationResponseValue(QJniObject obj) : __JniBaseClass(obj) {}
	
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
	jboolean TranslationResponseValue::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
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
	jstring TranslationResponseValue::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring TranslationResponseValue::getTransliteration()
	{
		return callObjectMethod(
			"getTransliteration",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint TranslationResponseValue::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring TranslationResponseValue::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

