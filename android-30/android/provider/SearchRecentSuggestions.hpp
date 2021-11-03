#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::content
{
	class Context;
}

namespace android::provider
{
	class SearchRecentSuggestions : public JObject
	{
	public:
		// Fields
		static jarray QUERIES_PROJECTION_1LINE();
		static jarray QUERIES_PROJECTION_2LINE();
		static jint QUERIES_PROJECTION_DATE_INDEX();
		static jint QUERIES_PROJECTION_DISPLAY1_INDEX();
		static jint QUERIES_PROJECTION_DISPLAY2_INDEX();
		static jint QUERIES_PROJECTION_QUERY_INDEX();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SearchRecentSuggestions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchRecentSuggestions(QAndroidJniObject obj);
		
		// Constructors
		SearchRecentSuggestions(android::content::Context arg0, jstring arg1, jint arg2);
		
		// Methods
		void clearHistory();
		void saveRecentQuery(jstring arg0, jstring arg1);
	};
} // namespace android::provider

