#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./AppSearchSchema_PropertyConfig.hpp"


namespace android::app::appsearch
{
	class AppSearchSchema_DocumentPropertyConfig : public android::app::appsearch::AppSearchSchema_PropertyConfig
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AppSearchSchema_DocumentPropertyConfig(const char *className, const char *sig, Ts...agv) : android::app::appsearch::AppSearchSchema_PropertyConfig(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema_DocumentPropertyConfig(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getSchemaType();
		jboolean shouldIndexNestedProperties();
	};
} // namespace android::app::appsearch

