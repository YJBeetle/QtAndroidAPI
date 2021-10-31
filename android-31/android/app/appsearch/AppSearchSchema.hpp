#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::appsearch
{
	class AppSearchSchema : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppSearchSchema(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AppSearchSchema(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		__JniBaseClass getProperties();
		jstring getSchemaType();
		jint hashCode();
		jstring toString();
	};
} // namespace android::app::appsearch

