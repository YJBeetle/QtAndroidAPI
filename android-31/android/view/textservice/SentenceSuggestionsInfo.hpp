#pragma once

#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "./SuggestionsInfo.def.hpp"
#include "./SentenceSuggestionsInfo.def.hpp"

namespace android::view::textservice
{
	// Fields
	inline JObject SentenceSuggestionsInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textservice.SentenceSuggestionsInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline SentenceSuggestionsInfo::SentenceSuggestionsInfo(android::os::Parcel arg0)
		: JObject(
			"android.view.textservice.SentenceSuggestionsInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline SentenceSuggestionsInfo::SentenceSuggestionsInfo(JArray arg0, JIntArray arg1, JIntArray arg2)
		: JObject(
			"android.view.textservice.SentenceSuggestionsInfo",
			"([Landroid/view/textservice/SuggestionsInfo;[I[I)V",
			arg0.object<jarray>(),
			arg1.object<jintArray>(),
			arg2.object<jintArray>()
		) {}
	
	// Methods
	inline jint SentenceSuggestionsInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint SentenceSuggestionsInfo::getLengthAt(jint arg0) const
	{
		return callMethod<jint>(
			"getLengthAt",
			"(I)I",
			arg0
		);
	}
	inline jint SentenceSuggestionsInfo::getOffsetAt(jint arg0) const
	{
		return callMethod<jint>(
			"getOffsetAt",
			"(I)I",
			arg0
		);
	}
	inline jint SentenceSuggestionsInfo::getSuggestionsCount() const
	{
		return callMethod<jint>(
			"getSuggestionsCount",
			"()I"
		);
	}
	inline android::view::textservice::SuggestionsInfo SentenceSuggestionsInfo::getSuggestionsInfoAt(jint arg0) const
	{
		return callObjectMethod(
			"getSuggestionsInfoAt",
			"(I)Landroid/view/textservice/SuggestionsInfo;",
			arg0
		);
	}
	inline void SentenceSuggestionsInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textservice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::textservice;
#endif
