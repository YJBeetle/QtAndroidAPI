#pragma once

#include "../../JObject.hpp"


namespace android::net
{
	class MailTo : public JObject
	{
	public:
		// Fields
		static jstring MAILTO_SCHEME();
		
		// QJniObject forward
		template<typename ...Ts> explicit MailTo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MailTo(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isMailTo(jstring arg0);
		static android::net::MailTo parse(jstring arg0);
		jstring getBody();
		jstring getCc();
		JObject getHeaders();
		jstring getSubject();
		jstring getTo();
		jstring toString();
	};
} // namespace android::net

