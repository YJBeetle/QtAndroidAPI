#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class Contacts_Settings : public JObject
	{
	public:
		// Fields
		static JString CONTENT_DIRECTORY();
		static android::net::Uri CONTENT_URI();
		static JString DEFAULT_SORT_ORDER();
		static JString SYNC_EVERYTHING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Contacts_Settings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_Settings(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString getSetting(android::content::ContentResolver arg0, JString arg1, JString arg2);
		static void setSetting(android::content::ContentResolver arg0, JString arg1, JString arg2, JString arg3);
	};
} // namespace android::provider

