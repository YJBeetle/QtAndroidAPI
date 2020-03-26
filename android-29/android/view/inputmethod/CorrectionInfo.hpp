#pragma once

#ifndef ANDROID_VIEW_INPUTMETHOD_CORRECTIONINFO
#define ANDROID_VIEW_INPUTMETHOD_CORRECTIONINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::inputmethod
{
	class CorrectionInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jint arg0, jstring arg1, jstring arg2);
		
		// Methods
		jstring toString();
		jint getOffset();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jstring getOldText();
		jstring getNewText();
	};
} // namespace __jni_impl::android::view::inputmethod

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::inputmethod
{
	// Fields
	QAndroidJniObject CorrectionInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.inputmethod.CorrectionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void CorrectionInfo::__constructor(jint arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.CorrectionInfo",
			"(ILjava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	jstring CorrectionInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint CorrectionInfo::getOffset()
	{
		return __thiz.callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	jint CorrectionInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void CorrectionInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring CorrectionInfo::getOldText()
	{
		return __thiz.callObjectMethod(
			"getOldText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring CorrectionInfo::getNewText()
	{
		return __thiz.callObjectMethod(
			"getNewText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::view::inputmethod

namespace android::view::inputmethod
{
	class CorrectionInfo : public __jni_impl::android::view::inputmethod::CorrectionInfo
	{
	public:
		CorrectionInfo(QAndroidJniObject obj) { __thiz = obj; }
		CorrectionInfo(jint arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::view::inputmethod

#endif // ANDROID_VIEW_INPUTMETHOD_CORRECTIONINFO

