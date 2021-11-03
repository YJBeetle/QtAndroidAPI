#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./CorrectionInfo.hpp"

namespace android::view::inputmethod
{
	// Fields
	JObject CorrectionInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.CorrectionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	CorrectionInfo::CorrectionInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CorrectionInfo::CorrectionInfo(jint arg0, JString arg1, JString arg2)
		: JObject(
			"android.view.inputmethod.CorrectionInfo",
			"(ILjava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	jint CorrectionInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString CorrectionInfo::getNewText()
	{
		return callObjectMethod(
			"getNewText",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint CorrectionInfo::getOffset()
	{
		return callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	JString CorrectionInfo::getOldText()
	{
		return callObjectMethod(
			"getOldText",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString CorrectionInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

