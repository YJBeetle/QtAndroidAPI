#pragma once

#ifndef ANDROID_VIEW_TEXTSERVICE_SENTENCESUGGESTIONSINFO
#define ANDROID_VIEW_TEXTSERVICE_SENTENCESUGGESTIONSINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::view::textservice
{
	class SuggestionsInfo;
}

namespace __jni_impl::android::view::textservice
{
	class SentenceSuggestionsInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jarray arg0, jintArray arg1, jintArray arg2);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getOffsetAt(jint arg0);
		QAndroidJniObject getSuggestionsInfoAt(jint arg0);
		jint getSuggestionsCount();
		jint getLengthAt(jint arg0);
	};
} // namespace __jni_impl::android::view::textservice

#include "../../os/Parcel.hpp"
#include "SuggestionsInfo.hpp"

namespace __jni_impl::android::view::textservice
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
	
	// Constructors
	void SentenceSuggestionsInfo::__constructor(jarray arg0, jintArray arg1, jintArray arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.SentenceSuggestionsInfo",
			"([Landroid/view/textservice/SuggestionsInfo;[I[I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void SentenceSuggestionsInfo::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.SentenceSuggestionsInfo",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
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
	void SentenceSuggestionsInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
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
	QAndroidJniObject SentenceSuggestionsInfo::getSuggestionsInfoAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSuggestionsInfoAt",
			"(I)Landroid/view/textservice/SuggestionsInfo;",
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
	jint SentenceSuggestionsInfo::getLengthAt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getLengthAt",
			"(I)I",
			arg0
		);
	}
} // namespace __jni_impl::android::view::textservice

namespace android::view::textservice
{
	class SentenceSuggestionsInfo : public __jni_impl::android::view::textservice::SentenceSuggestionsInfo
	{
	public:
		SentenceSuggestionsInfo(QAndroidJniObject obj) { __thiz = obj; }
		SentenceSuggestionsInfo(jarray arg0, jintArray arg1, jintArray arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SentenceSuggestionsInfo(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view::textservice

#endif // ANDROID_VIEW_TEXTSERVICE_SENTENCESUGGESTIONSINFO

