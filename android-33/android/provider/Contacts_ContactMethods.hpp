#pragma once

#include "../content/Context.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Contacts_ContactMethods.def.hpp"

namespace android::provider
{
	// Fields
	inline JString Contacts_ContactMethods::CONTENT_EMAIL_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_EMAIL_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_ContactMethods::CONTENT_EMAIL_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_EMAIL_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri Contacts_ContactMethods::CONTENT_EMAIL_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_EMAIL_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString Contacts_ContactMethods::CONTENT_IM_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_IM_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_ContactMethods::CONTENT_POSTAL_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_POSTAL_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_ContactMethods::CONTENT_POSTAL_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_POSTAL_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_ContactMethods::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri Contacts_ContactMethods::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString Contacts_ContactMethods::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_ContactMethods::PERSON_ID()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"PERSON_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_ContactMethods::POSTAL_LOCATION_LATITUDE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"POSTAL_LOCATION_LATITUDE",
			"Ljava/lang/String;"
		);
	}
	inline JString Contacts_ContactMethods::POSTAL_LOCATION_LONGITUDE()
	{
		return getStaticObjectField(
			"android.provider.Contacts$ContactMethods",
			"POSTAL_LOCATION_LONGITUDE",
			"Ljava/lang/String;"
		);
	}
	inline jint Contacts_ContactMethods::PROTOCOL_AIM()
	{
		return getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_AIM"
		);
	}
	inline jint Contacts_ContactMethods::PROTOCOL_GOOGLE_TALK()
	{
		return getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_GOOGLE_TALK"
		);
	}
	inline jint Contacts_ContactMethods::PROTOCOL_ICQ()
	{
		return getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_ICQ"
		);
	}
	inline jint Contacts_ContactMethods::PROTOCOL_JABBER()
	{
		return getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_JABBER"
		);
	}
	inline jint Contacts_ContactMethods::PROTOCOL_MSN()
	{
		return getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_MSN"
		);
	}
	inline jint Contacts_ContactMethods::PROTOCOL_QQ()
	{
		return getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_QQ"
		);
	}
	inline jint Contacts_ContactMethods::PROTOCOL_SKYPE()
	{
		return getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_SKYPE"
		);
	}
	inline jint Contacts_ContactMethods::PROTOCOL_YAHOO()
	{
		return getStaticField<jint>(
			"android.provider.Contacts$ContactMethods",
			"PROTOCOL_YAHOO"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject Contacts_ContactMethods::decodeImProtocol(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$ContactMethods",
			"decodeImProtocol",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline JString Contacts_ContactMethods::encodeCustomImProtocol(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$ContactMethods",
			"encodeCustomImProtocol",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString Contacts_ContactMethods::encodePredefinedImProtocol(jint arg0)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$ContactMethods",
			"encodePredefinedImProtocol",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString Contacts_ContactMethods::getDisplayLabel(android::content::Context arg0, jint arg1, jint arg2, JString arg3)
	{
		return callStaticObjectMethod(
			"android.provider.Contacts$ContactMethods",
			"getDisplayLabel",
			"(Landroid/content/Context;IILjava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object<jstring>()
		);
	}
	inline void Contacts_ContactMethods::addPostalLocation(android::content::Context arg0, jlong arg1, jdouble arg2, jdouble arg3) const
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
