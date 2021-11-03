#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}

namespace android::se::omapi
{
	class SEService : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SEService(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SEService(QAndroidJniObject obj);
		
		// Constructors
		SEService(android::content::Context arg0, JObject arg1, JObject arg2);
		
		// Methods
		jarray getReaders();
		jstring getVersion();
		jboolean isConnected();
		void shutdown();
	};
} // namespace android::se::omapi

