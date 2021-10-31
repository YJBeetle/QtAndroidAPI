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
		
		InetAddresses(QAndroidJniObject obj);
		// Constructors
		InetAddresses() = default;
		
		// Methods
		static jboolean isNumericAddress(jstring arg0);
		static QAndroidJniObject parseNumericAddress(jstring arg0);
	};
} // namespace android::net

