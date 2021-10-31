#include "../../os/Parcel.hpp"
#include "./TranslationRequestValue.hpp"

namespace android::view::translation
{
	// Fields
	__JniBaseClass TranslationRequestValue::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.TranslationRequestValue",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	TranslationRequestValue::TranslationRequestValue(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::view::translation::TranslationRequestValue TranslationRequestValue::forText(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.view.translation.TranslationRequestValue",
			"forText",
			"(Ljava/lang/CharSequence;)Landroid/view/translation/TranslationRequestValue;",
			arg0
		);
	}
	jint TranslationRequestValue::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean TranslationRequestValue::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring TranslationRequestValue::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint TranslationRequestValue::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring TranslationRequestValue::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

