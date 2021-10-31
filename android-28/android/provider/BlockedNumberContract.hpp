#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class BlockedNumberContract : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AUTHORITY();
		static android::net::Uri AUTHORITY_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BlockedNumberContract(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BlockedNumberContract(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean canCurrentUserBlockNumbers(android::content::Context arg0);
		static jboolean isBlocked(android::content::Context arg0, jstring arg1);
		static jint unblock(android::content::Context arg0, jstring arg1);
	};
} // namespace android::provider

