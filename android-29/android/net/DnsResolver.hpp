#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Network;
}
namespace android::os
{
	class CancellationSignal;
}

namespace android::net
{
	class DnsResolver : public __JniBaseClass
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
		
		DnsResolver(QAndroidJniObject obj);
		// Constructors
		DnsResolver() = default;
		
		// Methods
		static QAndroidJniObject getInstance();
		void query(android::net::Network arg0, jstring arg1, jint arg2, __JniBaseClass arg3, android::os::CancellationSignal arg4, __JniBaseClass arg5);
		void query(android::net::Network arg0, const QString &arg1, jint arg2, __JniBaseClass arg3, android::os::CancellationSignal arg4, __JniBaseClass arg5);
		void query(android::net::Network arg0, jstring arg1, jint arg2, jint arg3, __JniBaseClass arg4, android::os::CancellationSignal arg5, __JniBaseClass arg6);
		void query(android::net::Network arg0, const QString &arg1, jint arg2, jint arg3, __JniBaseClass arg4, android::os::CancellationSignal arg5, __JniBaseClass arg6);
		void rawQuery(android::net::Network arg0, jbyteArray arg1, jint arg2, __JniBaseClass arg3, android::os::CancellationSignal arg4, __JniBaseClass arg5);
		void rawQuery(android::net::Network arg0, jstring arg1, jint arg2, jint arg3, jint arg4, __JniBaseClass arg5, android::os::CancellationSignal arg6, __JniBaseClass arg7);
		void rawQuery(android::net::Network arg0, const QString &arg1, jint arg2, jint arg3, jint arg4, __JniBaseClass arg5, android::os::CancellationSignal arg6, __JniBaseClass arg7);
	};
} // namespace android::net

