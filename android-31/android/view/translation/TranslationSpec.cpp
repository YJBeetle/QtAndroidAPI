#include "../../icu/util/ULocale.hpp"
#include "../../os/Parcel.hpp"
#include "./TranslationSpec.hpp"

namespace android::view::translation
{
	// Fields
	JObject TranslationSpec::CREATOR()
	{
		return getStaticObjectField(
			"android.view.translation.TranslationSpec",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint TranslationSpec::DATA_FORMAT_TEXT()
	{
		return getStaticField<jint>(
			"android.view.translation.TranslationSpec",
			"DATA_FORMAT_TEXT"
		);
	}
	
	// QAndroidJniObject forward
	TranslationSpec::TranslationSpec(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TranslationSpec::TranslationSpec(android::icu::util::ULocale arg0, jint arg1)
		: JObject(
			"android.view.translation.TranslationSpec",
			"(Landroid/icu/util/ULocale;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint TranslationSpec::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean TranslationSpec::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint TranslationSpec::getDataFormat()
	{
		return callMethod<jint>(
			"getDataFormat",
			"()I"
		);
	}
	android::icu::util::ULocale TranslationSpec::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	jint TranslationSpec::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring TranslationSpec::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TranslationSpec::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::translation

