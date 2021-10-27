#include "../../icu/util/ULocale.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./TextLanguage.hpp"

namespace android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextLanguage::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextLanguage",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	TextLanguage::TextLanguage(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint TextLanguage::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jfloat TextLanguage::getConfidenceScore(android::icu::util::ULocale arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getConfidenceScore",
			"(Landroid/icu/util/ULocale;)F",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextLanguage::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring TextLanguage::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TextLanguage::getLocale(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"(I)Landroid/icu/util/ULocale;",
			arg0
		);
	}
	jint TextLanguage::getLocaleHypothesisCount()
	{
		return __thiz.callMethod<jint>(
			"getLocaleHypothesisCount",
			"()I"
		);
	}
	jstring TextLanguage::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TextLanguage::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

