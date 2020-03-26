#pragma once

#ifndef ANDROID_PROVIDER_CONTACTS_CONTACTMETHODS
#define ANDROID_PROVIDER_CONTACTS_CONTACTMETHODS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::provider
{
	class Contacts_ContactMethods : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_EMAIL_ITEM_TYPE();
		static jstring CONTENT_EMAIL_TYPE();
		static QAndroidJniObject CONTENT_EMAIL_URI();
		static jstring CONTENT_IM_ITEM_TYPE();
		static jstring CONTENT_POSTAL_ITEM_TYPE();
		static jstring CONTENT_POSTAL_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static jstring PERSON_ID();
		static jstring POSTAL_LOCATION_LATITUDE();
		static jstring POSTAL_LOCATION_LONGITUDE();
		static jint PROTOCOL_AIM();
		static jint PROTOCOL_GOOGLE_TALK();
		static jint PROTOCOL_ICQ();
		static jint PROTOCOL_JABBER();
		static jint PROTOCOL_MSN();
		static jint PROTOCOL_QQ();
		static jint PROTOCOL_SKYPE();
		static jint PROTOCOL_YAHOO();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring encodePredefinedImProtocol(jint arg0);
		static jstring encodeCustomImProtocol(jstring arg0);
		static jobject decodeImProtocol(jstring arg0);
		void addPostalLocation(__jni_impl::android::content::Context arg0, jlong arg1, jdouble arg2, jdouble arg3);
		static jstring getDisplayLabel(__jni_impl::android::content::Context arg0, jint arg1, jint arg2, jstring arg3);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring Contacts_ContactMethods::CONTENT_EMAIL_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_EMAIL_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_ContactMethods::CONTENT_EMAIL_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_EMAIL_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Contacts_ContactMethods::CONTENT_EMAIL_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_EMAIL_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_ContactMethods::CONTENT_IM_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_IM_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_ContactMethods::CONTENT_POSTAL_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_POSTAL_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_ContactMethods::CONTENT_POSTAL_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_POSTAL_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_ContactMethods::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Contacts_ContactMethods::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_ContactMethods::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_ContactMethods::PERSON_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"PERSON_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_ContactMethods::POSTAL_LOCATION_LATITUDE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"POSTAL_LOCATION_LATITUDE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_ContactMethods::POSTAL_LOCATION_LONGITUDE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"POSTAL_LOCATION_LONGITUDE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Contacts_ContactMethods::PROTOCOL_AIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_AIM"
		);
	}
	jint Contacts_ContactMethods::PROTOCOL_GOOGLE_TALK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_GOOGLE_TALK"
		);
	}
	jint Contacts_ContactMethods::PROTOCOL_ICQ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_ICQ"
		);
	}
	jint Contacts_ContactMethods::PROTOCOL_JABBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_JABBER"
		);
	}
	jint Contacts_ContactMethods::PROTOCOL_MSN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_MSN"
		);
	}
	jint Contacts_ContactMethods::PROTOCOL_QQ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_QQ"
		);
	}
	jint Contacts_ContactMethods::PROTOCOL_SKYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_SKYPE"
		);
	}
	jint Contacts_ContactMethods::PROTOCOL_YAHOO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_YAHOO"
		);
	}
	
	// Constructors
	void Contacts_ContactMethods::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Contacts$ContactMethods",
			"(V)V");
	}
	
	// Methods
	jstring Contacts_ContactMethods::encodePredefinedImProtocol(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Contacts$ContactMethods",
			"encodePredefinedImProtocol",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Contacts_ContactMethods::encodeCustomImProtocol(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Contacts$ContactMethods",
			"encodeCustomImProtocol",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jobject Contacts_ContactMethods::decodeImProtocol(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Contacts$ContactMethods",
			"decodeImProtocol",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void Contacts_ContactMethods::addPostalLocation(__jni_impl::android::content::Context arg0, jlong arg1, jdouble arg2, jdouble arg3)
	{
		__thiz.callMethod<void>(
			"addPostalLocation",
			"(Landroid/content/Context;JDD)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	jstring Contacts_ContactMethods::getDisplayLabel(__jni_impl::android::content::Context arg0, jint arg1, jint arg2, jstring arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Contacts$ContactMethods",
			"getDisplayLabel",
			"(Landroid/content/Context;IILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		).object<jstring>();
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Contacts_ContactMethods : public __jni_impl::android::provider::Contacts_ContactMethods
	{
	public:
		Contacts_ContactMethods(QAndroidJniObject obj) { __thiz = obj; }
		Contacts_ContactMethods()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_CONTACTS_CONTACTMETHODS

