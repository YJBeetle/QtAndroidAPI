#include "../../icu/util/ULocale.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./TextLanguage.hpp"

namespace android::view::textclassifier
{
	// Fields
	JObject TextLanguage::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextLanguage",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	TextLanguage::TextLanguage(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint TextLanguage::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jfloat TextLanguage::getConfidenceScore(android::icu::util::ULocale arg0)
	{
		return callMethod<jfloat>(
			"getConfidenceScore",
			"(Landroid/icu/util/ULocale;)F",
			arg0.object()
		);
	}
	android::os::Bundle TextLanguage::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	JString TextLanguage::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	android::icu::util::ULocale TextLanguage::getLocale(jint arg0)
	{
		return callObjectMethod(
			"getLocale",
			"(I)Landroid/icu/util/ULocale;",
			arg0
		);
	}
	jint TextLanguage::getLocaleHypothesisCount()
	{
		return callMethod<jint>(
			"getLocaleHypothesisCount",
			"()I"
		);
	}
	JString TextLanguage::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TextLanguage::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

