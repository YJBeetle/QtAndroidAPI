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
	class Parcel;
}
namespace __jni_impl::android::os
{
	class Bundle;
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
		jstring toString();
		jstring getId();
		QAndroidJniObject getLocale(jint arg0);
		jfloat getConfidenceScore(__jni_impl::android::icu::util::ULocale arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getExtras();
		jint getLocaleHypothesisCount();
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../icu/util/ULocale.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::view::textclassifier
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
	
	// Constructors
	void TextLanguage::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextLanguage",
			"(V)V");
	}
	
	// Methods
	jstring TextLanguage::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jfloat TextLanguage::getConfidenceScore(__jni_impl::android::icu::util::ULocale arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getConfidenceScore",
			"(Landroid/icu/util/ULocale;)F",
			arg0.__jniObject().object()
		);
	}
	jint TextLanguage::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void TextLanguage::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject TextLanguage::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint TextLanguage::getLocaleHypothesisCount()
	{
		return __thiz.callMethod<jint>(
			"getLocaleHypothesisCount",
			"()I"
		);
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

