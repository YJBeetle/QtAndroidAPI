#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::appsearch
{
	class SearchResult_MatchRange : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchResult_MatchRange(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SearchResult_MatchRange(QJniObject obj);
		
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

