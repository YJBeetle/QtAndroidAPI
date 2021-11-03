#pragma once

#include "../../../JObject.hpp"


namespace android::app::appsearch
{
	class SearchResults : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchResults(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchResults(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		void getNextPage(JObject arg0, JObject arg1);
	};
} // namespace android::app::appsearch

