#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::app::appsearch
{
	class SearchSuggestionResult : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchSuggestionResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchSuggestionResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getSuggestedResult() const;
		jint hashCode() const;
	};
} // namespace android::app::appsearch

