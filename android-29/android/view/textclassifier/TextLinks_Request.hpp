#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_REQUEST
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_REQUEST

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class LocaleList;
}
namespace __jni_impl::android::view::textclassifier
{
	class TextClassifier_EntityConfig;
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
	class TextLinks_Request : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getText();
		QAndroidJniObject getEntityConfig();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getExtras();
		QAndroidJniObject getDefaultLocales();
		jstring getCallingPackageName();
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../os/LocaleList.hpp"
#include "TextClassifier_EntityConfig.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextLinks_Request::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextLinks$Request",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void TextLinks_Request::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextLinks$Request",
			"(V)V");
	}
	
	// Methods
	jstring TextLinks_Request::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject TextLinks_Request::getEntityConfig()
	{
		return __thiz.callObjectMethod(
			"getEntityConfig",
			"()Landroid/view/textclassifier/TextClassifier$EntityConfig;"
		);
	}
	jint TextLinks_Request::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void TextLinks_Request::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject TextLinks_Request::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject TextLinks_Request::getDefaultLocales()
	{
		return __thiz.callObjectMethod(
			"getDefaultLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	jstring TextLinks_Request::getCallingPackageName()
	{
		return __thiz.callObjectMethod(
			"getCallingPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextLinks_Request : public __jni_impl::android::view::textclassifier::TextLinks_Request
	{
	public:
		TextLinks_Request(QAndroidJniObject obj) { __thiz = obj; }
		TextLinks_Request()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTLINKS_REQUEST

