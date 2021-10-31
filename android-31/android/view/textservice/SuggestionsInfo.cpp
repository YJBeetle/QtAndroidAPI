#include "../../os/Parcel.hpp"
#include "./SuggestionsInfo.hpp"

namespace android::view::textservice
{
	// Fields
	__JniBaseClass SuggestionsInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textservice.SuggestionsInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SuggestionsInfo::RESULT_ATTR_DONT_SHOW_UI_FOR_SUGGESTIONS()
	{
		return getStaticField<jint>(
			"android.view.textservice.SuggestionsInfo",
			"RESULT_ATTR_DONT_SHOW_UI_FOR_SUGGESTIONS"
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
	jint SuggestionsInfo::RESULT_ATTR_LOOKS_LIKE_GRAMMAR_ERROR()
	{
		return getStaticField<jint>(
			"android.view.textservice.SuggestionsInfo",
			"RESULT_ATTR_LOOKS_LIKE_GRAMMAR_ERROR"
		);
	}
	jint SuggestionsInfo::RESULT_ATTR_LOOKS_LIKE_TYPO()
	{
		return getStaticField<jint>(
			"android.view.textservice.SuggestionsInfo",
			"RESULT_ATTR_LOOKS_LIKE_TYPO"
		);
	}
	
	// QAndroidJniObject forward
	SuggestionsInfo::SuggestionsInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SuggestionsInfo::SuggestionsInfo(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.view.textservice.SuggestionsInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	SuggestionsInfo::SuggestionsInfo(jint arg0, jarray arg1)
		: __JniBaseClass(
			"android.view.textservice.SuggestionsInfo",
			"(I[Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	SuggestionsInfo::SuggestionsInfo(jint arg0, jarray arg1, jint arg2, jint arg3)
		: __JniBaseClass(
			"android.view.textservice.SuggestionsInfo",
			"(I[Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jint SuggestionsInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint SuggestionsInfo::getCookie()
	{
		return callMethod<jint>(
			"getCookie",
			"()I"
		);
	}
	jint SuggestionsInfo::getSequence()
	{
		return callMethod<jint>(
			"getSequence",
			"()I"
		);
	}
	jstring SuggestionsInfo::getSuggestionAt(jint arg0)
	{
		return callObjectMethod(
			"getSuggestionAt",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint SuggestionsInfo::getSuggestionsAttributes()
	{
		return callMethod<jint>(
			"getSuggestionsAttributes",
			"()I"
		);
	}
	jint SuggestionsInfo::getSuggestionsCount()
	{
		return callMethod<jint>(
			"getSuggestionsCount",
			"()I"
		);
	}
	void SuggestionsInfo::setCookieAndSequence(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setCookieAndSequence",
			"(II)V",
			arg0,
			arg1
		);
	}
	void SuggestionsInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textservice

