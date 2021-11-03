#pragma once

#include "../../../JObject.hpp"


namespace android::app::appsearch
{
	class AppSearchManager_SearchContext : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchManager_SearchContext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchManager_SearchContext(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getDatabaseName();
	};
} // namespace android::app::appsearch

