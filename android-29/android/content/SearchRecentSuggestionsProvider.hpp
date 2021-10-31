#pragma once

#include "../../__JniBaseClass.hpp"
#include "./ContentProvider.hpp"

namespace android::content
{
	class ContentValues;
}
namespace android::net
{
	class Uri;
}

namespace android::content
{
	class SearchRecentSuggestionsProvider : public android::content::ContentProvider
	{
	public:
		// Fields
		static jint DATABASE_MODE_2LINES();
		static jint DATABASE_MODE_QUERIES();
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchRecentSuggestionsProvider(const char *className, const char *sig, Ts...agv) : android::content::ContentProvider(className, sig, std::forward<Ts>(agv)...) {}
		SearchRecentSuggestionsProvider(QJniObject obj);
		
		// Constructors
		SearchRecentSuggestionsProvider();
		
		// Methods
		jint _delete(android::net::Uri arg0, jstring arg1, jarray arg2);
		jstring getType(android::net::Uri arg0);
		android::net::Uri insert(android::net::Uri arg0, android::content::ContentValues arg1);
		jboolean onCreate();
		__JniBaseClass query(android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4);
		jint update(android::net::Uri arg0, android::content::ContentValues arg1, jstring arg2, jarray arg3);
	};
} // namespace android::content

