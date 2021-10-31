#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::appsearch
{
	class SetSchemaResponse : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SetSchemaResponse(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SetSchemaResponse(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getDeletedTypes();
		__JniBaseClass getIncompatibleTypes();
		__JniBaseClass getMigratedTypes();
		__JniBaseClass getMigrationFailures();
	};
} // namespace android::app::appsearch

