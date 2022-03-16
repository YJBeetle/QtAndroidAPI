#pragma once

#include "./AppSearchSchema_PropertyConfig.hpp"

class JString;

namespace android::app::appsearch
{
	class AppSearchSchema_DocumentPropertyConfig : public android::app::appsearch::AppSearchSchema_PropertyConfig
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_DocumentPropertyConfig(const char *className, const char *sig, Ts...agv) : android::app::appsearch::AppSearchSchema_PropertyConfig(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_DocumentPropertyConfig(QAndroidJniObject obj) : android::app::appsearch::AppSearchSchema_PropertyConfig(obj) {}
		
		// Constructors
		
		// Methods
		JString getSchemaType() const;
		jboolean shouldIndexNestedProperties() const;
	};
} // namespace android::app::appsearch

