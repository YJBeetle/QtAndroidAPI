#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::net
{
	class Network;
}
namespace android::os
{
	class CancellationSignal;
}
class JString;

namespace android::net
{
	class DnsResolver : public JObject
	{
	public:
		// Fields
		static jint CLASS_IN();
		static jint ERROR_PARSE();
		static jint ERROR_SYSTEM();
		static jint FLAG_EMPTY();
		static jint FLAG_NO_CACHE_LOOKUP();
		static jint FLAG_NO_CACHE_STORE();
		static jint FLAG_NO_RETRY();
		static jint TYPE_A();
		static jint TYPE_AAAA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DnsResolver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DnsResolver(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::DnsResolver getInstance();
		void query(android::net::Network arg0, JString arg1, jint arg2, JObject arg3, android::os::CancellationSignal arg4, JObject arg5);
		void query(android::net::Network arg0, JString arg1, jint arg2, jint arg3, JObject arg4, android::os::CancellationSignal arg5, JObject arg6);
		void rawQuery(android::net::Network arg0, JByteArray arg1, jint arg2, JObject arg3, android::os::CancellationSignal arg4, JObject arg5);
		void rawQuery(android::net::Network arg0, JString arg1, jint arg2, jint arg3, jint arg4, JObject arg5, android::os::CancellationSignal arg6, JObject arg7);
	};
} // namespace android::net

