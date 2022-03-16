#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::content
{
	class ContentResolver;
}
namespace android::content
{
	class Context;
}
class JString;

namespace android::provider
{
	class SearchRecentSuggestions : public JObject
	{
	public:
		// Fields
		static JArray QUERIES_PROJECTION_1LINE();
		static JArray QUERIES_PROJECTION_2LINE();
		static jint QUERIES_PROJECTION_DATE_INDEX();
		static jint QUERIES_PROJECTION_DISPLAY1_INDEX();
		static jint QUERIES_PROJECTION_DISPLAY2_INDEX();
		static jint QUERIES_PROJECTION_QUERY_INDEX();
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchRecentSuggestions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchRecentSuggestions(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SearchRecentSuggestions(android::content::Context arg0, JString arg1, jint arg2);
		
		// Methods
		void clearHistory() const;
		void saveRecentQuery(JString arg0, JString arg1) const;
	};
} // namespace android::provider

