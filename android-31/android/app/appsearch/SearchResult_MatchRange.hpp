#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::app::appsearch
{
	class SearchResult_MatchRange : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchResult_MatchRange(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchResult_MatchRange(QJniObject obj);
		
		// Constructors
		SearchResult_MatchRange(jint arg0, jint arg1);
		
		// Methods
		jboolean equals(JObject arg0);
		jint getEnd();
		jint getStart();
		jint hashCode();
		JString toString();
	};
} // namespace android::app::appsearch

