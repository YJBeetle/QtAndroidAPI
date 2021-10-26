#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS

#include "../../../__JniBaseClass.hpp"

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
	class TextLinks : public __JniBaseClass
	{
	public:
		// Fields
		static jint APPLY_STRATEGY_IGNORE();
		static jint APPLY_STRATEGY_REPLACE();
		static QAndroidJniObject CREATOR();
		static jint STATUS_DIFFERENT_TEXT();
		static jint STATUS_LINKS_APPLIED();
		static jint STATUS_NO_LINKS_APPLIED();
		static jint STATUS_NO_LINKS_FOUND();
		static jint STATUS_UNSUPPORTED_CHARACTER();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jint apply(__jni_impl::__JniBaseClass arg0, jint arg1, __jni_impl::__JniBaseClass arg2);
		QAndroidJniObject getLinks();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getExtras();
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../os/Parcel.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	jint TextLinks::APPLY_STRATEGY_IGNORE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextLinks",
			"APPLY_STRATEGY_IGNORE"
		);
	}
	jint TextLinks::APPLY_STRATEGY_REPLACE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextLinks",
			"APPLY_STRATEGY_REPLACE"
		);
	}
	QAndroidJniObject TextLinks::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextLinks",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint TextLinks::STATUS_DIFFERENT_TEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextLinks",
			"STATUS_DIFFERENT_TEXT"
		);
	}
	jint TextLinks::STATUS_LINKS_APPLIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextLinks",
			"STATUS_LINKS_APPLIED"
		);
	}
	jint TextLinks::STATUS_NO_LINKS_APPLIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextLinks",
			"STATUS_NO_LINKS_APPLIED"
		);
	}
	jint TextLinks::STATUS_NO_LINKS_FOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextLinks",
			"STATUS_NO_LINKS_FOUND"
		);
	}
	jint TextLinks::STATUS_UNSUPPORTED_CHARACTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textclassifier.TextLinks",
			"STATUS_UNSUPPORTED_CHARACTER"
		);
	}
	
	// Constructors
	void TextLinks::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextLinks",
			"(V)V");
	}
	
	// Methods
	jstring TextLinks::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint TextLinks::apply(__jni_impl::__JniBaseClass arg0, jint arg1, __jni_impl::__JniBaseClass arg2)
	{
		return __thiz.callMethod<jint>(
			"apply",
			"(Landroid/text/Spannable;ILjava/util/function/Function;)I",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject TextLinks::getLinks()
	{
		return __thiz.callObjectMethod(
			"getLinks",
			"()Ljava/util/Collection;"
		);
	}
	jint TextLinks::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void TextLinks::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject TextLinks::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextLinks : public __jni_impl::android::view::textclassifier::TextLinks
	{
	public:
		TextLinks(QAndroidJniObject obj) { __thiz = obj; }
		TextLinks()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS

