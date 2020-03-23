#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTSELECTION_REQUEST
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTSELECTION_REQUEST

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class LocaleList;
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
	class TextSelection_Request : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getEndIndex();
		QAndroidJniObject getText();
		QAndroidJniObject getExtras();
		QAndroidJniObject getCallingPackageName();
		jint getStartIndex();
		QAndroidJniObject getDefaultLocales();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../os/LocaleList.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextSelection_Request::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextSelection$Request",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void TextSelection_Request::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextSelection$Request",
			"(V)V");
	}
	
	// Methods
	jint TextSelection_Request::getEndIndex()
	{
		return __thiz.callMethod<jint>(
			"getEndIndex",
			"()I");
	}
	QAndroidJniObject TextSelection_Request::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject TextSelection_Request::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;");
	}
	QAndroidJniObject TextSelection_Request::getCallingPackageName()
	{
		return __thiz.callObjectMethod(
			"getCallingPackageName",
			"()Ljava/lang/String;");
	}
	jint TextSelection_Request::getStartIndex()
	{
		return __thiz.callMethod<jint>(
			"getStartIndex",
			"()I");
	}
	QAndroidJniObject TextSelection_Request::getDefaultLocales()
	{
		return __thiz.callObjectMethod(
			"getDefaultLocales",
			"()Landroid/os/LocaleList;");
	}
	jint TextSelection_Request::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void TextSelection_Request::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class TextSelection_Request : public __jni_impl::android::view::textclassifier::TextSelection_Request
	{
	public:
		TextSelection_Request(QAndroidJniObject obj) { __thiz = obj; }
		TextSelection_Request()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTSELECTION_REQUEST

