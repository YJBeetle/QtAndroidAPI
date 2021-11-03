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

namespace android::provider
{
	class Contacts_Settings : public JObject
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static android::net::Uri CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static jstring SYNC_EVERYTHING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Contacts_Settings(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Contacts_Settings(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getSetting(android::content::ContentResolver arg0, jstring arg1, jstring arg2);
		static void setSetting(android::content::ContentResolver arg0, jstring arg1, jstring arg2, jstring arg3);
	};
} // namespace android::provider

