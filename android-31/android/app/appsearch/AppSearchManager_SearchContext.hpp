#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::app::appsearch
{
	class AppSearchManager_SearchContext : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchManager_SearchContext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchManager_SearchContext(QJniObject obj);
		
		// Constructors
		
		// Methods
		JString getDatabaseName();
	};
} // namespace android::app::appsearch

