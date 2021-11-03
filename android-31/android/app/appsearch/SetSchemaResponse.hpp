#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class SetSchemaResponse : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SetSchemaResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SetSchemaResponse(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getDeletedTypes();
		JObject getIncompatibleTypes();
		JObject getMigratedTypes();
		JObject getMigrationFailures();
	};
} // namespace android::app::appsearch

