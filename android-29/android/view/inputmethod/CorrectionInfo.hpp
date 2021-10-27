#pragma once

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
		void __constructor(jint arg0, const QString &arg1, const QString &arg2);
		
		// Methods
		jint describeContents();
		jstring getNewText();
		jint getOffset();
		jstring getOldText();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
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
			arg2
		);
	}
	void CorrectionInfo::__constructor(jint arg0, const QString &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.CorrectionInfo",
			"(ILjava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
	jint CorrectionInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring CorrectionInfo::getNewText()
	{
		return __thiz.callObjectMethod(
			"getNewText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint CorrectionInfo::getOffset()
	{
		return __thiz.callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	jstring CorrectionInfo::getOldText()
	{
		return __thiz.callObjectMethod(
			"getOldText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring CorrectionInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

