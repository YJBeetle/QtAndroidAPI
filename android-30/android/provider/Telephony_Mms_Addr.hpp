#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_Mms_Addr : public JObject
	{
	public:
		// Fields
		static jstring ADDRESS();
		static jstring CHARSET();
		static jstring CONTACT_ID();
		static jstring MSG_ID();
		static jstring TYPE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Telephony_Mms_Addr(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Mms_Addr(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::Uri getAddrUriForMessage(jstring arg0);
	};
} // namespace android::provider

