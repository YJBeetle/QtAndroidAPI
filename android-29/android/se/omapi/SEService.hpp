#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}

namespace android::se::omapi
{
	class SEService : public __JniBaseClass
	{
	public:
		// Fields
		
		SEService(QAndroidJniObject obj);
		// Constructors
		SEService(android::content::Context arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		SEService() = default;
		
		// Methods
		jarray getReaders();
		jstring getVersion();
		jboolean isConnected();
		void shutdown();
	};
} // namespace android::se::omapi

