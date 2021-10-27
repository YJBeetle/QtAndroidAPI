#pragma once

#include "../../__JniBaseClass.hpp"

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
	class SearchRecentSuggestions : public __JniBaseClass
	{
	public:
		// Fields
		static jarray QUERIES_PROJECTION_1LINE();
		static jarray QUERIES_PROJECTION_2LINE();
		static jint QUERIES_PROJECTION_DATE_INDEX();
		static jint QUERIES_PROJECTION_DISPLAY1_INDEX();
		static jint QUERIES_PROJECTION_DISPLAY2_INDEX();
		static jint QUERIES_PROJECTION_QUERY_INDEX();
		
		SearchRecentSuggestions(QAndroidJniObject obj);
		// Constructors
		SearchRecentSuggestions(android::content::Context &arg0, jstring &arg1, jint &arg2);
		SearchRecentSuggestions(android::content::Context &arg0, const QString &arg1, jint &arg2);
		SearchRecentSuggestions() = default;
		
		// Methods
		void clearHistory();
		void saveRecentQuery(jstring arg0, jstring arg1);
		void saveRecentQuery(const QString &arg0, const QString &arg1);
	};
} // namespace android::provider

