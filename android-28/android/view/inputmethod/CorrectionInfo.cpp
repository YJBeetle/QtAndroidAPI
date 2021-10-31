#include "../../os/Parcel.hpp"
#include "./CorrectionInfo.hpp"

namespace android::view::inputmethod
{
	// Fields
	__JniBaseClass CorrectionInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.CorrectionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	CorrectionInfo::CorrectionInfo(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CorrectionInfo::CorrectionInfo(jint arg0, jstring arg1, jstring arg2)
		: __JniBaseClass(
			"android.view.inputmethod.CorrectionInfo",
			"(ILjava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint CorrectionInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring CorrectionInfo::getNewText()
	{
		return callObjectMethod(
			"getNewText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint CorrectionInfo::getOffset()
	{
		return callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	jstring CorrectionInfo::getOldText()
	{
		return callObjectMethod(
			"getOldText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring CorrectionInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CorrectionInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

