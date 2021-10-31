#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "./Contacts_ContactMethods.hpp"

namespace android::provider
{
	// Fields
	jstring Contacts_ContactMethods::CONTENT_EMAIL_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_EMAIL_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_ContactMethods::CONTENT_EMAIL_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_EMAIL_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri Contacts_ContactMethods::CONTENT_EMAIL_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_EMAIL_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_ContactMethods::CONTENT_IM_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_IM_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_ContactMethods::CONTENT_POSTAL_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_POSTAL_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_ContactMethods::CONTENT_POSTAL_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_POSTAL_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_ContactMethods::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri Contacts_ContactMethods::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Contacts_ContactMethods::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_ContactMethods::PERSON_ID()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"PERSON_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_ContactMethods::POSTAL_LOCATION_LATITUDE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"POSTAL_LOCATION_LATITUDE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Contacts_ContactMethods::POSTAL_LOCATION_LONGITUDE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"POSTAL_LOCATION_LONGITUDE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Contacts_ContactMethods::PROTOCOL_AIM()
	{
		return getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_AIM"
		);
	}
	jint Contacts_ContactMethods::PROTOCOL_GOOGLE_TALK()
	{
		return getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_GOOGLE_TALK"
		);
	}
	jint Contacts_ContactMethods::PROTOCOL_ICQ()
	{
		return getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_ICQ"
		);
	}
	jint Contacts_ContactMethods::PROTOCOL_JABBER()
	{
		return getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_JABBER"
		);
	}
	jint Contacts_ContactMethods::PROTOCOL_MSN()
	{
		return getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_MSN"
		);
	}
	jint Contacts_ContactMethods::PROTOCOL_QQ()
	{
		return getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_QQ"
		);
	}
	jint Contacts_ContactMethods::PROTOCOL_SKYPE()
	{
		return getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_SKYPE"
		);
	}
	jint Contacts_ContactMethods::PROTOCOL_YAHOO()
	{
		return getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_YAHOO"
		);
	}
	
	// QAndroidJniObject forward
	Contacts_ContactMethods::Contacts_ContactMethods(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jobject Contacts_ContactMethods::decodeImProtocol(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$ContactMethods",
			"decodeImProtocol",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jstring Contacts_ContactMethods::encodeCustomImProtocol(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$ContactMethods",
			"encodeCustomImProtocol",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Contacts_ContactMethods::encodePredefinedImProtocol(jint arg0)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$ContactMethods",
			"encodePredefinedImProtocol",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Contacts_ContactMethods::getDisplayLabel(android::content::Context arg0, jint arg1, jint arg2, jstring arg3)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$ContactMethods",
			"getDisplayLabel",
			"(Landroid/content/Context;IILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		).object<jstring>();
	}
	void Contacts_ContactMethods::addPostalLocation(android::content::Context arg0, jlong arg1, jdouble arg2, jdouble arg3)
	{
		callMethod<void>(
			"addPostalLocation",
			"(Landroid/content/Context;JDD)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::provider

