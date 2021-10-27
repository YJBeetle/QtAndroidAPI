#include "../../os/Parcel.hpp"
#include "./SuggestionsInfo.hpp"

namespace android::view::textservice
{
	// Fields
	QAndroidJniObject SuggestionsInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textservice.SuggestionsInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SuggestionsInfo::RESULT_ATTR_HAS_RECOMMENDED_SUGGESTIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textservice.SuggestionsInfo",
			"RESULT_ATTR_HAS_RECOMMENDED_SUGGESTIONS"
		);
	}
	jint SuggestionsInfo::RESULT_ATTR_IN_THE_DICTIONARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textservice.SuggestionsInfo",
			"RESULT_ATTR_IN_THE_DICTIONARY"
		);
	}
	jint SuggestionsInfo::RESULT_ATTR_LOOKS_LIKE_TYPO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.textservice.SuggestionsInfo",
			"RESULT_ATTR_LOOKS_LIKE_TYPO"
		);
	}
	
	SuggestionsInfo::SuggestionsInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SuggestionsInfo::SuggestionsInfo(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.SuggestionsInfo",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	SuggestionsInfo::SuggestionsInfo(jint &arg0, jarray &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.SuggestionsInfo",
			"(I[Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	SuggestionsInfo::SuggestionsInfo(jint &arg0, jarray &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.SuggestionsInfo",
			"(I[Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jint SuggestionsInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint SuggestionsInfo::getCookie()
	{
		return __thiz.callMethod<jint>(
			"getCookie",
			"()I"
		);
	}
	jint SuggestionsInfo::getSequence()
	{
		return __thiz.callMethod<jint>(
			"getSequence",
			"()I"
		);
	}
	jstring SuggestionsInfo::getSuggestionAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSuggestionAt",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint SuggestionsInfo::getSuggestionsAttributes()
	{
		return __thiz.callMethod<jint>(
			"getSuggestionsAttributes",
			"()I"
		);
	}
	jint SuggestionsInfo::getSuggestionsCount()
	{
		return __thiz.callMethod<jint>(
			"getSuggestionsCount",
			"()I"
		);
	}
	void SuggestionsInfo::setCookieAndSequence(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setCookieAndSequence",
			"(II)V",
			arg0,
			arg1
		);
	}
	void SuggestionsInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::textservice

