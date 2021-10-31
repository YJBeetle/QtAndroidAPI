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
		
		// QJniObject forward
		template<typename ...Ts> explicit SEService(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SEService(QJniObject obj);
		
		// Constructors
		SEService(android::content::Context arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		
		// Methods
		jarray getReaders();
		jstring getVersion();
		jboolean isConnected();
		void shutdown();
	};
} // namespace android::se::omapi

