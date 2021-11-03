#pragma once

#include "../../JObject.hpp"

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
	class BlockedNumberContract : public JObject
	{
	public:
		// Fields
		static jstring AUTHORITY();
		static android::net::Uri AUTHORITY_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit BlockedNumberContract(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BlockedNumberContract(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean canCurrentUserBlockNumbers(android::content::Context arg0);
		static jboolean isBlocked(android::content::Context arg0, jstring arg1);
		static jint unblock(android::content::Context arg0, jstring arg1);
	};
} // namespace android::provider

