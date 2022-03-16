#include "../../../JArray.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./SuggestionsInfo.hpp"

namespace android::view::textservice
{
	// Fields
	JObject SuggestionsInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textservice.SuggestionsInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SuggestionsInfo::RESULT_ATTR_HAS_RECOMMENDED_SUGGESTIONS()
	{
		return getStaticField<jint>(
			"android.view.textservice.SuggestionsInfo",
			"RESULT_ATTR_HAS_RECOMMENDED_SUGGESTIONS"
		);
	}
	jint SuggestionsInfo::RESULT_ATTR_IN_THE_DICTIONARY()
	{
		return getStaticField<jint>(
			"android.view.textservice.SuggestionsInfo",
			"RESULT_ATTR_IN_THE_DICTIONARY"
		);
	}
	jint SuggestionsInfo::RESULT_ATTR_LOOKS_LIKE_TYPO()
	{
		return getStaticField<jint>(
			"android.view.textservice.SuggestionsInfo",
			"RESULT_ATTR_LOOKS_LIKE_TYPO"
		);
	}
	
	// Constructors
	SuggestionsInfo::SuggestionsInfo(android::os::Parcel arg0)
		: JObject(
			"android.view.textservice.SuggestionsInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	SuggestionsInfo::SuggestionsInfo(jint arg0, JArray arg1)
		: JObject(
			"android.view.textservice.SuggestionsInfo",
			"(I[Ljava/lang/String;)V",
			arg0,
			arg1.object<jarray>()
		) {}
	SuggestionsInfo::SuggestionsInfo(jint arg0, JArray arg1, jint arg2, jint arg3)
		: JObject(
			"android.view.textservice.SuggestionsInfo",
			"(I[Ljava/lang/String;II)V",
			arg0,
			arg1.object<jarray>(),
			arg2,
			arg3
		) {}
	
	// Methods
	jint SuggestionsInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint SuggestionsInfo::getCookie() const
	{
		return callMethod<jint>(
			"getCookie",
			"()I"
		);
	}
	jint SuggestionsInfo::getSequence() const
	{
		return callMethod<jint>(
			"getSequence",
			"()I"
		);
	}
	JString SuggestionsInfo::getSuggestionAt(jint arg0) const
	{
		return callObjectMethod(
			"getSuggestionAt",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jint SuggestionsInfo::getSuggestionsAttributes() const
	{
		return callMethod<jint>(
			"getSuggestionsAttributes",
			"()I"
		);
	}
	jint SuggestionsInfo::getSuggestionsCount() const
	{
		return callMethod<jint>(
			"getSuggestionsCount",
			"()I"
		);
	}
	void SuggestionsInfo::setCookieAndSequence(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setCookieAndSequence",
			"(II)V",
			arg0,
			arg1
		);
	}
	void SuggestionsInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textservice

