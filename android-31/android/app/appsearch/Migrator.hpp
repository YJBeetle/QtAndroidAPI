#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class GenericDocument;
}

namespace android::app::appsearch
{
	class Migrator : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Migrator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Migrator(QJniObject obj);
		
		// Constructors
		Migrator();
		
		// Methods
		android::app::appsearch::GenericDocument onDowngrade(jint arg0, jint arg1, android::app::appsearch::GenericDocument arg2);
		android::app::appsearch::GenericDocument onUpgrade(jint arg0, jint arg1, android::app::appsearch::GenericDocument arg2);
		jboolean shouldMigrate(jint arg0, jint arg1);
	};
} // namespace android::app::appsearch

