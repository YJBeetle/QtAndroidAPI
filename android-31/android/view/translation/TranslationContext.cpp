#include "../../os/Parcel.hpp"
#include "./TranslationSpec.hpp"
#include "../../../JString.hpp"
#include "./TranslationContext.hpp"

namespace android::view::translation
{
	// Fields
	JObject TranslationContext::CREATOR()
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
	
	// QJniObject forward
	TranslationContext::TranslationContext(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint TranslationContext::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::view::translation::TranslationSpec TranslationContext::getSourceSpec() const
	{
		return callObjectMethod(
			"getSourceSpec",
			"()Landroid/view/translation/TranslationSpec;"
		);
	}
	android::view::translation::TranslationSpec TranslationContext::getTargetSpec() const
	{
		return callObjectMethod(
			"getTargetSpec",
			"()Landroid/view/translation/TranslationSpec;"
		);
	}
	jint TranslationContext::getTranslationFlags() const
	{
		return callMethod<jint>(
			"getTranslationFlags",
			"()I"
		);
	}
	JString TranslationContext::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TranslationContext::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::translation

