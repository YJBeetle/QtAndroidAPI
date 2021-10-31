#include "../../os/Parcel.hpp"
#include "./SuggestionsInfo.hpp"
#include "./SentenceSuggestionsInfo.hpp"

namespace android::view::textservice
{
	// Fields
	QAndroidJniObject SentenceSuggestionsInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textservice.SentenceSuggestionsInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	SentenceSuggestionsInfo::SentenceSuggestionsInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SentenceSuggestionsInfo::SentenceSuggestionsInfo(android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.SentenceSuggestionsInfo",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	SentenceSuggestionsInfo::SentenceSuggestionsInfo(jarray arg0, jintArray arg1, jintArray arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.SentenceSuggestionsInfo",
			"([Landroid/view/textservice/SuggestionsInfo;[I[I)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jint SentenceSuggestionsInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint SentenceSuggestionsInfo::getLengthAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLengthAt",
			"(I)I",
			arg0
		);
	}
	jint SentenceSuggestionsInfo::getOffsetAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getOffsetAt",
			"(I)I",
			arg0
		);
	}
	jint SentenceSuggestionsInfo::getSuggestionsCount()
	{
		return __thiz.callMethod<jint>(
			"getSuggestionsCount",
			"()I"
		);
	}
	QAndroidJniObject SentenceSuggestionsInfo::getSuggestionsInfoAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSuggestionsInfoAt",
			"(I)Landroid/view/textservice/SuggestionsInfo;",
			arg0
		);
	}
	void SentenceSuggestionsInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::textservice

