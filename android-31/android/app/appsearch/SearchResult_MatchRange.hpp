#pragma once

#include "../../../JObject.hpp"


namespace android::app::appsearch
{
	class SearchResult_MatchRange : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SearchResult_MatchRange(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchResult_MatchRange(QAndroidJniObject obj);
		
		// Constructors
		SearchResult_MatchRange(jint arg0, jint arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint getEnd();
		jint getStart();
		jint hashCode();
		jstring toString();
	};
} // namespace android::app::appsearch

