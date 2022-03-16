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
	jint CorrectionInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString CorrectionInfo::getNewText() const
	{
		return callObjectMethod(
			"getNewText",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint CorrectionInfo::getOffset() const
	{
		return callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	JString CorrectionInfo::getOldText() const
	{
		return callObjectMethod(
			"getOldText",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString CorrectionInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CorrectionInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

