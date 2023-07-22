#pragma once

#include "./AppSearchSchema_PropertyConfig.def.hpp"

namespace android::app::appsearch
{
	class AppSearchSchema_DoublePropertyConfig : public android::app::appsearch::AppSearchSchema_PropertyConfig
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_DoublePropertyConfig(const char *className, const char *sig, Ts...agv) : android::app::appsearch::AppSearchSchema_PropertyConfig(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_DoublePropertyConfig(QAndroidJniObject obj) : android::app::appsearch::AppSearchSchema_PropertyConfig(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::app::appsearch

