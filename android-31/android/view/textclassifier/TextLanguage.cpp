#include "../../icu/util/ULocale.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./TextLanguage.hpp"

namespace android::view::textclassifier
{
	// Fields
	__JniBaseClass TextLanguage::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.TextLanguage",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	TextLanguage::TextLanguage(QJniObject obj) : __JniBaseClass(obj) {}
	
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
	jstring TextLanguage::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring TextLanguage::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

