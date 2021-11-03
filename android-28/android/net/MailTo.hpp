#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::net
{
	class MailTo : public JObject
	{
	public:
		// Fields
		static JString MAILTO_SCHEME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MailTo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MailTo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isMailTo(JString arg0);
		static android::net::MailTo parse(JString arg0);
		JString getBody();
		JString getCc();
		JObject getHeaders();
		JString getSubject();
		JString getTo();
		JString toString();
	};
} // namespace android::net

