#include "../../os/Parcel.hpp"
#include "./CorrectionInfo.hpp"

namespace android::view::inputmethod
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
	
	CorrectionInfo::CorrectionInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CorrectionInfo::CorrectionInfo(jint &arg0, jstring &arg1, jstring &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.CorrectionInfo",
			"(ILjava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2
		);
	}
	CorrectionInfo::CorrectionInfo(jint &arg0, const QString &arg1, const QString &arg2)
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
	void CorrectionInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

