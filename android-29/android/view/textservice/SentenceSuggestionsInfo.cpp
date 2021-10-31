#include "../../os/Parcel.hpp"
#include "./SuggestionsInfo.hpp"
#include "./SentenceSuggestionsInfo.hpp"

namespace android::view::textservice
{
	// Fields
	__JniBaseClass SentenceSuggestionsInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textservice.SentenceSuggestionsInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	SentenceSuggestionsInfo::SentenceSuggestionsInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SentenceSuggestionsInfo::SentenceSuggestionsInfo(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.view.textservice.SentenceSuggestionsInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	SentenceSuggestionsInfo::SentenceSuggestionsInfo(jarray arg0, jintArray arg1, jintArray arg2)
		: __JniBaseClass(
			"android.view.textservice.SentenceSuggestionsInfo",
			"([Landroid/view/textservice/SuggestionsInfo;[I[I)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint SentenceSuggestionsInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint SentenceSuggestionsInfo::getLengthAt(jint arg0)
	{
		return callMethod<jint>(
			"getLengthAt",
			"(I)I",
			arg0
		);
	}
	jint SentenceSuggestionsInfo::getOffsetAt(jint arg0)
	{
		return callMethod<jint>(
			"getOffsetAt",
			"(I)I",
			arg0
		);
	}
	jint SentenceSuggestionsInfo::getSuggestionsCount()
	{
		return callMethod<jint>(
			"getSuggestionsCount",
			"()I"
		);
	}
	android::view::textservice::SuggestionsInfo SentenceSuggestionsInfo::getSuggestionsInfoAt(jint arg0)
	{
		return callObjectMethod(
			"getSuggestionsInfoAt",
			"(I)Landroid/view/textservice/SuggestionsInfo;",
			arg0
		);
	}
	void SentenceSuggestionsInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textservice

