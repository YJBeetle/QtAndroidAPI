#pragma once

#include "./AppSearchSchema_PropertyConfig.def.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema_BytesPropertyConfig : public android::app::appsearch::AppSearchSchema_PropertyConfig
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_BytesPropertyConfig(const char *className, const char *sig, Ts...agv) : android::app::appsearch::AppSearchSchema_PropertyConfig(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_BytesPropertyConfig(QAndroidJniObject obj) : android::app::appsearch::AppSearchSchema_PropertyConfig(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::app::appsearch

