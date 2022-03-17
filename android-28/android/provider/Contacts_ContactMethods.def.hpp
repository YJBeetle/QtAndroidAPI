#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}
class JString;
class JObject;
class JString;

namespace android::provider
{
	class Contacts_ContactMethods : public JObject
	{
	public:
		// Fields
		static JString CONTENT_EMAIL_ITEM_TYPE();
		static JString CONTENT_EMAIL_TYPE();
		static android::net::Uri CONTENT_EMAIL_URI();
		static JString CONTENT_IM_ITEM_TYPE();
		static JString CONTENT_POSTAL_ITEM_TYPE();
		static JString CONTENT_POSTAL_TYPE();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static JString DEFAULT_SORT_ORDER();
		static JString PERSON_ID();
		static JString POSTAL_LOCATION_LATITUDE();
		static JString POSTAL_LOCATION_LONGITUDE();
		static jint PROTOCOL_AIM();
		static jint PROTOCOL_GOOGLE_TALK();
		static jint PROTOCOL_ICQ();
		static jint PROTOCOL_JABBER();
		static jint PROTOCOL_MSN();
		static jint PROTOCOL_QQ();
		static jint PROTOCOL_SKYPE();
		static jint PROTOCOL_YAHOO();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Contacts_ContactMethods(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_ContactMethods(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject decodeImProtocol(JString arg0);
		static JString encodeCustomImProtocol(JString arg0);
		static JString encodePredefinedImProtocol(jint arg0);
		static JString getDisplayLabel(android::content::Context arg0, jint arg1, jint arg2, JString arg3);
		void addPostalLocation(android::content::Context arg0, jlong arg1, jdouble arg2, jdouble arg3) const;
	};
} // namespace android::provider

