#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTLANGUAGE
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTLANGUAGE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextLanguage : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject getId();
		QAndroidJniObject getLocale(jint arg0);
		QAndroidJniObject getExtras();
		jfloat getConfidenceScore(__jni_impl::android::icu::util::ULocale arg0);
		jint getLocaleHypothesisCount();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../icu/util/ULocale.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextLanguage::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextLanguage",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void TextLanguage::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextLanguage",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TextLanguage::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TextLanguage::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject TextLanguage::getLocale(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"(I)Landroid/icu/util/ULocale;",
			arg0);
	}
	QAndroidJniObject TextLanguage::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;");
	}
	jfloat TextLanguage::getConfidenceScore(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getConfidenceScore",
			"(Landroid/icu/util/ULocale;)F",
			arg0.__jniObject().object());
	}
	jint TextLanguage::getLocaleHypothesisCount()
	{
		return __thiz.callMethod<jint>(
			"getLocaleHypothesisCount",
			"()I");
	}
	jint TextLanguage::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void TextLanguage::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextLanguage : public __jni_impl::android::view::textclassifier::TextLanguage
	{
	public:
		TextLanguage(QAndroidJniObject obj) { __thiz = obj; }
		TextLanguage()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTLANGUAGE

