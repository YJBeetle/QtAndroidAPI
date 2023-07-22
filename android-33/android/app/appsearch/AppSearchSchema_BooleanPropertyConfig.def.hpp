#pragma once

#include "./AppSearchSchema_PropertyConfig.def.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema_BooleanPropertyConfig : public android::app::appsearch::AppSearchSchema_PropertyConfig
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_BooleanPropertyConfig(const char *className, const char *sig, Ts...agv) : android::app::appsearch::AppSearchSchema_PropertyConfig(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_BooleanPropertyConfig(QJniObject obj) : android::app::appsearch::AppSearchSchema_PropertyConfig(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::app::appsearch

