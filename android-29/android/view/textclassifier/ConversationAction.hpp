#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class RemoteAction;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view::textclassifier
{
	class ConversationAction : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jstring TYPE_CALL_PHONE();
		static jstring TYPE_CREATE_REMINDER();
		static jstring TYPE_OPEN_URL();
		static jstring TYPE_SEND_EMAIL();
		static jstring TYPE_SEND_SMS();
		static jstring TYPE_SHARE_LOCATION();
		static jstring TYPE_TEXT_REPLY();
		static jstring TYPE_TRACK_FLIGHT();
		static jstring TYPE_VIEW_CALENDAR();
		static jstring TYPE_VIEW_MAP();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		QAndroidJniObject getAction();
		jfloat getConfidenceScore();
		QAndroidJniObject getExtras();
		jstring getTextReply();
		jstring getType();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../app/RemoteAction.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	QAndroidJniObject ConversationAction::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring ConversationAction::TYPE_CALL_PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_CALL_PHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_CREATE_REMINDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_CREATE_REMINDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_OPEN_URL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_OPEN_URL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_SEND_EMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_SEND_EMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_SEND_SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_SEND_SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_SHARE_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_SHARE_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_TEXT_REPLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_TEXT_REPLY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_TRACK_FLIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_TRACK_FLIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_VIEW_CALENDAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_VIEW_CALENDAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_VIEW_MAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_VIEW_MAP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ConversationAction::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.ConversationAction",
			"(V)V");
	}
	
	// Methods
	jint ConversationAction::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject ConversationAction::getAction()
	{
		return __thiz.callObjectMethod(
			"getAction",
			"()Landroid/app/RemoteAction;"
		);
	}
	jfloat ConversationAction::getConfidenceScore()
	{
		return __thiz.callMethod<jfloat>(
			"getConfidenceScore",
			"()F"
		);
	}
	QAndroidJniObject ConversationAction::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring ConversationAction::getTextReply()
	{
		return __thiz.callObjectMethod(
			"getTextReply",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring ConversationAction::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ConversationAction::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class ConversationAction : public __jni_impl::android::view::textclassifier::ConversationAction
	{
	public:
		ConversationAction(QAndroidJniObject obj) { __thiz = obj; }
		ConversationAction()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

