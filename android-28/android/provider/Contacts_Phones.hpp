#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}
class JString;
class JString;

namespace android::provider
{
	class Contacts_Phones : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_FILTER_URL();
		static JString CONTENT_ITEM_TYPE();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static JString DEFAULT_SORT_ORDER();
		static JString PERSON_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Contacts_Phones(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_Phones(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString getDisplayLabel(android::content::Context arg0, jint arg1, JString arg2);
		static JString getDisplayLabel(android::content::Context arg0, jint arg1, JString arg2, JArray arg3);
	};
} // namespace android::provider

