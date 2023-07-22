#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./CompletionInfo.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject CompletionInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.CompletionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline CompletionInfo::CompletionInfo(jlong arg0, jint arg1, JString arg2)
		: JObject(
			"android.view.inputmethod.CompletionInfo",
			"(JILjava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2.object<jstring>()
		) {}
	inline CompletionInfo::CompletionInfo(jlong arg0, jint arg1, JString arg2, JString arg3)
		: JObject(
			"android.view.inputmethod.CompletionInfo",
			"(JILjava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2.object<jstring>(),
			arg3.object<jstring>()
		) {}
	
	// Methods
	inline jint CompletionInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jlong CompletionInfo::getId() const
	{
		return callMethod<jlong>(
			"getId",
			"()J"
		);
	}
	inline JString CompletionInfo::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint CompletionInfo::getPosition() const
	{
		return callMethod<jint>(
			"getPosition",
			"()I"
		);
	}
	inline JString CompletionInfo::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString CompletionInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CompletionInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
