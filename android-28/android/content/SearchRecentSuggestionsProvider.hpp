#pragma once

#include "./ContentProvider.hpp"

class JArray;
namespace android::content
{
	class ContentValues;
}
namespace android::net
{
	class Uri;
}
class JString;

namespace android::content
{
	class SearchRecentSuggestionsProvider : public android::content::ContentProvider
	{
	public:
		// Fields
		static jint DATABASE_MODE_2LINES();
		static jint DATABASE_MODE_QUERIES();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SearchRecentSuggestionsProvider(const char *className, const char *sig, Ts...agv) : android::content::ContentProvider(className, sig, std::forward<Ts>(agv)...) {}
		SearchRecentSuggestionsProvider(QAndroidJniObject obj);
		
		// Constructors
		SearchRecentSuggestionsProvider();
		
		// Methods
		jint _delete(android::net::Uri arg0, JString arg1, JArray arg2);
		JString getType(android::net::Uri arg0);
		android::net::Uri insert(android::net::Uri arg0, android::content::ContentValues arg1);
		jboolean onCreate();
		JObject query(android::net::Uri arg0, JArray arg1, JString arg2, JArray arg3, JString arg4);
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, JString arg2, JArray arg3);
	};
} // namespace android::content

