#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::net
{
	class InetAddress;
}

namespace android::net
{
	class InetAddresses : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InetAddresses(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InetAddresses(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isNumericAddress(jstring arg0);
		static java::net::InetAddress parseNumericAddress(jstring arg0);
	};
} // namespace android::net

