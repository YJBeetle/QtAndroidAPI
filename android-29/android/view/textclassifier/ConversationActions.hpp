#pragma once

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
		void __constructor(__jni_impl::__JniBaseClass arg0, const QString &arg1);
		
		// Methods
		jint describeContents();
		QAndroidJniObject getConversationActions();
		jstring getId();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
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
			arg1
		);
	}
	void ConversationActions::__constructor(__jni_impl::__JniBaseClass arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.ConversationActions",
			"(Ljava/util/List;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jint ConversationActions::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject ConversationActions::getConversationActions()
	{
		return __thiz.callObjectMethod(
			"getConversationActions",
			"()Ljava/util/List;"
		);
	}
	jstring ConversationActions::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
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

