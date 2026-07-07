#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./CorrectionInfo.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject CorrectionInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.CorrectionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline CorrectionInfo::CorrectionInfo(jint arg0, JString arg1, JString arg2)
		: JObject(
			"android.view.inputmethod.CorrectionInfo",
			"(ILjava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline jint CorrectionInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString CorrectionInfo::getNewText() const
	{
		return callObjectMethod(
			"getNewText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint CorrectionInfo::getOffset() const
	{
		return callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	inline JString CorrectionInfo::getOldText() const
	{
		return callObjectMethod(
			"getOldText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString CorrectionInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CorrectionInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
