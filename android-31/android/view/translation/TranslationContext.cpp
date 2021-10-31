#include "../../os/Parcel.hpp"
#include "./TranslationSpec.hpp"
#include "./TranslationContext.hpp"

namespace android::view::translation
{
	// Fields
	__JniBaseClass TranslationContext::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.TranslationContext",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint TranslationContext::FLAG_DEFINITIONS()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationContext",
			"FLAG_DEFINITIONS"
		);
	}
	jint TranslationContext::FLAG_LOW_LATENCY()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationContext",
			"FLAG_LOW_LATENCY"
		);
	}
	jint TranslationContext::FLAG_TRANSLITERATION()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationContext",
			"FLAG_TRANSLITERATION"
		);
	}
	
	// QAndroidJniObject forward
	TranslationContext::TranslationContext(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint TranslationContext::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::view::translation::TranslationSpec TranslationContext::getSourceSpec()
	{
		return callObjectMethod(
			"getSourceSpec",
			"()Landroid/view/translation/TranslationSpec;"
		);
	}
	android::view::translation::TranslationSpec TranslationContext::getTargetSpec()
	{
		return callObjectMethod(
			"getTargetSpec",
			"()Landroid/view/translation/TranslationSpec;"
		);
	}
	jint TranslationContext::getTranslationFlags()
	{
		return callMethod<jint>(
			"getTranslationFlags",
			"()I"
		);
	}
	jstring TranslationContext::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TranslationContext::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::translation

