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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InetAddresses(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InetAddresses(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean isNumericAddress(jstring arg0);
		static QAndroidJniObject parseNumericAddress(jstring arg0);
	};
} // namespace android::net

