#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net::ipsec::ike
{
	class ChildSessionParams;
}
namespace android::net::ipsec::ike
{
	class IkeSessionParams;
}

namespace android::net::ipsec::ike
{
	class IkeSession : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeSession(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IkeSession(QJniObject obj);
		
		// Constructors
		IkeSession(android::content::Context arg0, android::net::ipsec::ike::IkeSessionParams arg1, android::net::ipsec::ike::ChildSessionParams arg2, __JniBaseClass arg3, __JniBaseClass arg4, __JniBaseClass arg5);
		
		// Methods
		void close();
		void closeChildSession(__JniBaseClass arg0);
		void finalize();
		void kill();
		void openChildSession(android::net::ipsec::ike::ChildSessionParams arg0, __JniBaseClass arg1);
	};
} // namespace android::net::ipsec::ike

