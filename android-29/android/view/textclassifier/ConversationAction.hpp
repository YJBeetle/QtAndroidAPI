#pragma once

#ifndef ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTION
#define ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::app
{
	class RemoteAction;
}

namespace __jni_impl::android::view::textclassifier
{
	class ConversationAction : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static QAndroidJniObject TYPE_CALL_PHONE();
		static QAndroidJniObject TYPE_CREATE_REMINDER();
		static QAndroidJniObject TYPE_OPEN_URL();
		static QAndroidJniObject TYPE_SEND_EMAIL();
		static QAndroidJniObject TYPE_SEND_SMS();
		static QAndroidJniObject TYPE_SHARE_LOCATION();
		static QAndroidJniObject TYPE_TEXT_REPLY();
		static QAndroidJniObject TYPE_TRACK_FLIGHT();
		static QAndroidJniObject TYPE_VIEW_CALENDAR();
		static QAndroidJniObject TYPE_VIEW_MAP();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getType();
		QAndroidJniObject getExtras();
		jfloat getConfidenceScore();
		QAndroidJniObject getTextReply();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getAction();
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../os/Parcel.hpp"
#include "../../os/Bundle.hpp"
#include "../../app/RemoteAction.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	QAndroidJniObject ConversationAction::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	QAndroidJniObject ConversationAction::TYPE_CALL_PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_CALL_PHONE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ConversationAction::TYPE_CREATE_REMINDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_CREATE_REMINDER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ConversationAction::TYPE_OPEN_URL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_OPEN_URL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ConversationAction::TYPE_SEND_EMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_SEND_EMAIL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ConversationAction::TYPE_SEND_SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_SEND_SMS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ConversationAction::TYPE_SHARE_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_SHARE_LOCATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ConversationAction::TYPE_TEXT_REPLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_TEXT_REPLY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ConversationAction::TYPE_TRACK_FLIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_TRACK_FLIGHT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ConversationAction::TYPE_VIEW_CALENDAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_VIEW_CALENDAR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ConversationAction::TYPE_VIEW_MAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_VIEW_MAP",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void ConversationAction::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.ConversationAction",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ConversationAction::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ConversationAction::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;");
	}
	jfloat ConversationAction::getConfidenceScore()
	{
		return __thiz.callMethod<jfloat>(
			"getConfidenceScore",
			"()F");
	}
	QAndroidJniObject ConversationAction::getTextReply()
	{
		return __thiz.callObjectMethod(
			"getTextReply",
			"()Ljava/lang/CharSequence;");
	}
	jint ConversationAction::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void ConversationAction::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject ConversationAction::getAction()
	{
		return __thiz.callObjectMethod(
			"getAction",
			"()Landroid/app/RemoteAction;");
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

#endif // ANDROID_VIEW_TEXTCLASSIFIER_CONVERSATIONACTION

