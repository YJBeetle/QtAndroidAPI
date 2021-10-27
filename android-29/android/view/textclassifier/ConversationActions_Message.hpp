#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Person;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::time
{
	class ZonedDateTime;
}

namespace __jni_impl::android::view::textclassifier
{
	class ConversationActions_Message : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static QAndroidJniObject PERSON_USER_OTHERS();
		static QAndroidJniObject PERSON_USER_SELF();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		QAndroidJniObject getAuthor();
		QAndroidJniObject getExtras();
		QAndroidJniObject getReferenceTime();
		jstring getText();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../../app/Person.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../../java/time/ZonedDateTime.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	QAndroidJniObject ConversationActions_Message::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Message",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	QAndroidJniObject ConversationActions_Message::PERSON_USER_OTHERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Message",
			"PERSON_USER_OTHERS",
			"Landroid/app/Person;"
		);
	}
	QAndroidJniObject ConversationActions_Message::PERSON_USER_SELF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Message",
			"PERSON_USER_SELF",
			"Landroid/app/Person;"
		);
	}
	
	// Constructors
	void ConversationActions_Message::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.ConversationActions$Message",
			"(V)V");
	}
	
	// Methods
	jint ConversationActions_Message::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject ConversationActions_Message::getAuthor()
	{
		return __thiz.callObjectMethod(
			"getAuthor",
			"()Landroid/app/Person;"
		);
	}
	QAndroidJniObject ConversationActions_Message::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject ConversationActions_Message::getReferenceTime()
	{
		return __thiz.callObjectMethod(
			"getReferenceTime",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	jstring ConversationActions_Message::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void ConversationActions_Message::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class ConversationActions_Message : public __jni_impl::android::view::textclassifier::ConversationActions_Message
	{
	public:
		ConversationActions_Message(QAndroidJniObject obj) { __thiz = obj; }
		ConversationActions_Message()
		{
			__constructor();
		}
	};
} // namespace android::view::textclassifier

