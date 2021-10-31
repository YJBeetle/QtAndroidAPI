#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
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
		
		Contacts_ContactMethods(QAndroidJniObject obj);
		// Constructors
		Contacts_ContactMethods() = default;
		
		// Methods
		static jobject decodeImProtocol(jstring arg0);
		static jstring encodeCustomImProtocol(jstring arg0);
		static jstring encodePredefinedImProtocol(jint arg0);
		static jstring getDisplayLabel(android::content::Context arg0, jint arg1, jint arg2, jstring arg3);
		void addPostalLocation(android::content::Context arg0, jlong arg1, jdouble arg2, jdouble arg3);
	};
} // namespace android::provider

