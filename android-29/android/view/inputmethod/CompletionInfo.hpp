#pragma once

#ifndef ANDROID_VIEW_INPUTMETHOD_COMPLETIONINFO
#define ANDROID_VIEW_INPUTMETHOD_COMPLETIONINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::inputmethod
{
	class CompletionInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jlong arg0, jint arg1, jstring arg2);
		void __constructor(jlong arg0, jint arg1, jstring arg2, jstring arg3);
		
		// Methods
		QAndroidJniObject toString();
		jlong getId();
		QAndroidJniObject getText();
		jint getPosition();
		QAndroidJniObject getLabel();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::inputmethod

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::inputmethod
{
	// Fields
	QAndroidJniObject CompletionInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.inputmethod.CompletionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void CompletionInfo::__constructor(jlong arg0, jint arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.CompletionInfo",
			"(JILjava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2);
	}
	void CompletionInfo::__constructor(jlong arg0, jint arg1, jstring arg2, jstring arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.CompletionInfo",
			"(JILjava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	
	// Methods
	QAndroidJniObject CompletionInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jlong CompletionInfo::getId()
	{
		return __thiz.callMethod<jlong>(
			"getId",
			"()J");
	}
	QAndroidJniObject CompletionInfo::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;");
	}
	jint CompletionInfo::getPosition()
	{
		return __thiz.callMethod<jint>(
			"getPosition",
			"()I");
	}
	QAndroidJniObject CompletionInfo::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;");
	}
	jint CompletionInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void CompletionInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::view::inputmethod

namespace android::view::inputmethod
{
	class CompletionInfo : public __jni_impl::android::view::inputmethod::CompletionInfo
	{
	public:
		CompletionInfo(QAndroidJniObject obj) { __thiz = obj; }
		CompletionInfo(jlong arg0, jint arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		CompletionInfo(jlong arg0, jint arg1, jstring arg2, jstring arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::view::inputmethod

#endif // ANDROID_VIEW_INPUTMETHOD_COMPLETIONINFO

