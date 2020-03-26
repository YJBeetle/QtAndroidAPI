#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTIONS
#define ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTIONS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::textclassifier
{
	class ConversationActions : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0, jstring arg1);
		
		// Methods
		jstring getId();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getConversationActions();
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	QAndroidJniObject ConversationActions::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationActions",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void ConversationActions::__constructor(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.ConversationActions",
			"(Ljava/util/List;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	jstring ConversationActions::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ConversationActions::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ConversationActions::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ConversationActions::getConversationActions()
	{
		return __thiz.callObjectMethod(
			"getConversationActions",
			"()Ljava/util/List;"
		);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class ConversationActions : public __jni_impl::android::view::textclassifier::ConversationActions
	{
	public:
		ConversationActions(QAndroidJniObject obj) { __thiz = obj; }
		ConversationActions(__jni_impl::__JniBaseClass arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::view::textclassifier

#endif // ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTIONS

