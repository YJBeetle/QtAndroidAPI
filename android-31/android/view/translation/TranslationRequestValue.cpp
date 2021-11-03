#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TranslationRequestValue.hpp"

namespace android::view::translation
{
	// Fields
	JObject TranslationRequestValue::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.TranslationRequestValue",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	TranslationRequestValue::TranslationRequestValue(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::view::translation::TranslationRequestValue TranslationRequestValue::forText(JString arg0)
	{
		return callStaticObjectMethod(
			"android.view.translation.TranslationRequestValue",
			"forText",
			"(Ljava/lang/CharSequence;)Landroid/view/translation/TranslationRequestValue;",
			arg0.object<jstring>()
		);
	}
	jint TranslationRequestValue::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean TranslationRequestValue::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString TranslationRequestValue::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint TranslationRequestValue::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString TranslationRequestValue::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TranslationRequestValue::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::translation

