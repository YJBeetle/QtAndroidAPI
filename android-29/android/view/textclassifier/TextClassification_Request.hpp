#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_REQUEST
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_REQUEST

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class LocaleList;
}
namespace __jni_impl::java::time
{
	class ZonedDateTime;
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
	class TextClassification_Request : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getEndIndex();
		jstring getText();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getExtras();
		jint getStartIndex();
		QAndroidJniObject getDefaultLocales();
		QAndroidJniObject getReferenceTime();
		jstring getCallingPackageName();
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../os/LocaleList.hpp"
#include "../../../java/time/ZonedDateTime.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextClassification_Request::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextClassification$Request",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void TextClassification_Request::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassification$Request",
			"(V)V");
	}
	
	// Methods
	jint TextClassification_Request::getEndIndex()
	{
		return __thiz.callMethod<jint>(
			"getEndIndex",
			"()I"
		);
	}
	jstring TextClassification_Request::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint TextClassification_Request::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void TextClassification_Request::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject TextClassification_Request::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint TextClassification_Request::getStartIndex()
	{
		return __thiz.callMethod<jint>(
			"getStartIndex",
			"()I"
		);
	}
	QAndroidJniObject TextClassification_Request::getDefaultLocales()
	{
		return __thiz.callObjectMethod(
			"getDefaultLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	QAndroidJniObject TextClassification_Request::getReferenceTime()
	{
		return __thiz.callObjectMethod(
			"getReferenceTime",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	jstring TextClassification_Request::getCallingPackageName()
	{
		return __thiz.callObjectMethod(
			"getCallingPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextClassification_Request : public __jni_impl::android::view::textclassifier::TextClassification_Request
	{
	public:
		TextClassification_Request(QAndroidJniObject obj) { __thiz = obj; }
		TextClassification_Request()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATION_REQUEST

