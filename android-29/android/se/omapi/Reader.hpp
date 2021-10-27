#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::se::omapi
{
	class SEService;
}
namespace android::se::omapi
{
	class Session;
}

namespace android::se::omapi
{
	class Reader : public __JniBaseClass
	{
	public:
		// Fields
		
		Reader(QAndroidJniObject obj);
		// Constructors
		Reader() = default;
		
		// Methods
		void closeSessions();
		jstring getName();
		QAndroidJniObject getSEService();
		jboolean isSecureElementPresent();
		QAndroidJniObject openSession();
	};
} // namespace android::se::omapi

