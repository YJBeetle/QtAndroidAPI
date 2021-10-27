#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class TextLanguage_Request : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jstring getCallingPackageName();
		QAndroidJniObject getExtras();
		jstring getText();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextLanguage_Request::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextLanguage$Request",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void TextLanguage_Request::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextLanguage$Request",
			"(V)V");
	}
	
	// Methods
	jint TextLanguage_Request::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring TextLanguage_Request::getCallingPackageName()
	{
		return __thiz.callObjectMethod(
			"getCallingPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TextLanguage_Request::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring TextLanguage_Request::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void TextLanguage_Request::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextLanguage_Request : public __jni_impl::android::view::textclassifier::TextLanguage_Request
	{
	public:
		TextLanguage_Request(QAndroidJniObject obj) { __thiz = obj; }
		TextLanguage_Request()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

