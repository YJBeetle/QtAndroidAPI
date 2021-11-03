#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class ContactsContract_DataUsageFeedback : public JObject
	{
	public:
		// Fields
		static android::net::Uri DELETE_USAGE_URI();
		static android::net::Uri FEEDBACK_URI();
		static JString USAGE_TYPE();
		static JString USAGE_TYPE_CALL();
		static JString USAGE_TYPE_LONG_TEXT();
		static JString USAGE_TYPE_SHORT_TEXT();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_DataUsageFeedback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_DataUsageFeedback(QJniObject obj);
		
		// Constructors
		ContactsContract_DataUsageFeedback();
		
		// Methods
	};
} // namespace android::provider

