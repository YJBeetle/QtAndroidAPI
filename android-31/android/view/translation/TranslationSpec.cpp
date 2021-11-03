#include "../../icu/util/ULocale.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	jint TranslationSpec::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean TranslationSpec::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint TranslationSpec::getDataFormat() const
	{
		return callMethod<jint>(
			"getDataFormat",
			"()I"
		);
	}
	android::icu::util::ULocale TranslationSpec::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	jint TranslationSpec::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString TranslationSpec::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TranslationSpec::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::translation

