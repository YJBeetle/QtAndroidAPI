#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class SearchResults : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SearchResults(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchResults(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close() const;
		void getNextPage(JObject arg0, JObject arg1) const;
	};
} // namespace android::app::appsearch

