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
		
		// QJniObject forward
		template<typename ...Ts> explicit MailTo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MailTo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jboolean isMailTo(JString arg0);
		static android::net::MailTo parse(JString arg0);
		JString getBody() const;
		JString getCc() const;
		JObject getHeaders() const;
		JString getSubject() const;
		JString getTo() const;
		JString toString() const;
	};
} // namespace android::net

