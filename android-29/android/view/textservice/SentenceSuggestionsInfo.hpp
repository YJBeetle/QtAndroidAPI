#pragma once

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
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jarray arg0, jintArray arg1, jintArray arg2);
		
		// Methods
		jint describeContents();
		jint getLengthAt(jint arg0);
		jint getOffsetAt(jint arg0);
		jint getSuggestionsCount();
		QAndroidJniObject getSuggestionsInfoAt(jint arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
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
	void SentenceSuggestionsInfo::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.SentenceSuggestionsInfo",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
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
	void SentenceSuggestionsInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::view::textservice

namespace android::view::textservice
{
	class SentenceSuggestionsInfo : public __jni_impl::android::view::textservice::SentenceSuggestionsInfo
	{
	public:
		SentenceSuggestionsInfo(QAndroidJniObject obj) { __thiz = obj; }
		SentenceSuggestionsInfo(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		SentenceSuggestionsInfo(jarray arg0, jintArray arg1, jintArray arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::view::textservice

