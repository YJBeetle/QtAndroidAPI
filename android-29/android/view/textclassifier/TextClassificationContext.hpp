#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATIONCONTEXT
#define ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATIONCONTEXT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextClassificationContext : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jstring getPackageName();
		jstring getWidgetType();
		jstring getWidgetVersion();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	QAndroidJniObject TextClassificationContext::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.TextClassificationContext",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void TextClassificationContext::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassificationContext",
			"(V)V");
	}
	
	// Methods
	jint TextClassificationContext::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring TextClassificationContext::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextClassificationContext::getWidgetType()
	{
		return __thiz.callObjectMethod(
			"getWidgetType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextClassificationContext::getWidgetVersion()
	{
		return __thiz.callObjectMethod(
			"getWidgetVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TextClassificationContext::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TextClassificationContext::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class TextClassificationContext : public __jni_impl::android::view::textclassifier::TextClassificationContext
	{
	public:
		TextClassificationContext(QAndroidJniObject obj) { __thiz = obj; }
		TextClassificationContext()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_TEXTCLASSIFICATIONCONTEXT

