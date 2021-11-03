#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class AppSearchManager_SearchContext;
}

namespace android::app::appsearch
{
	class AppSearchManager_SearchContext_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchManager_SearchContext_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchManager_SearchContext_Builder(QJniObject obj);
		
		// Constructors
		AppSearchManager_SearchContext_Builder(jstring arg0);
		
		// Methods
		android::app::appsearch::AppSearchManager_SearchContext build();
	};
} // namespace android::app::appsearch

