#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::appsearch
{
	class GenericDocument;
}

namespace android::app::appsearch
{
	class Migrator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Migrator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Migrator(QAndroidJniObject obj);
		
		// Constructors
		Migrator();
		
		// Methods
		android::app::appsearch::GenericDocument onDowngrade(jint arg0, jint arg1, android::app::appsearch::GenericDocument arg2);
		android::app::appsearch::GenericDocument onUpgrade(jint arg0, jint arg1, android::app::appsearch::GenericDocument arg2);
		jboolean shouldMigrate(jint arg0, jint arg1);
	};
} // namespace android::app::appsearch

