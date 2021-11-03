#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../os/Parcel.hpp"
#include "./SuggestionsInfo.hpp"
#include "./SentenceSuggestionsInfo.hpp"

namespace android::view::textservice
{
	// Fields
	JObject SentenceSuggestionsInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textservice.SentenceSuggestionsInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	SentenceSuggestionsInfo::SentenceSuggestionsInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SentenceSuggestionsInfo::SentenceSuggestionsInfo(android::os::Parcel arg0)
		: JObject(
			"android.view.textservice.SentenceSuggestionsInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	SentenceSuggestionsInfo::SentenceSuggestionsInfo(JArray arg0, JIntArray arg1, JIntArray arg2)
		: JObject(
			"android.view.textservice.SentenceSuggestionsInfo",
			"([Landroid/view/textservice/SuggestionsInfo;[I[I)V",
			arg0.object<jarray>(),
			arg1.object<jintArray>(),
			arg2.object<jintArray>()
		) {}
	
	// Methods
	jint SentenceSuggestionsInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint SentenceSuggestionsInfo::getLengthAt(jint arg0) const
	{
		return callMethod<jint>(
			"getLengthAt",
			"(I)I",
			arg0
		);
	}
	jint SentenceSuggestionsInfo::getOffsetAt(jint arg0) const
	{
		return callMethod<jint>(
			"getOffsetAt",
			"(I)I",
			arg0
		);
	}
	jint SentenceSuggestionsInfo::getSuggestionsCount() const
	{
		return callMethod<jint>(
			"getSuggestionsCount",
			"()I"
		);
	}
	android::view::textservice::SuggestionsInfo SentenceSuggestionsInfo::getSuggestionsInfoAt(jint arg0) const
	{
		return callObjectMethod(
			"getSuggestionsInfoAt",
			"(I)Landroid/view/textservice/SuggestionsInfo;",
			arg0
		);
	}
	void SentenceSuggestionsInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textservice

