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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Reader(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Reader(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void closeSessions();
		jstring getName();
		QAndroidJniObject getSEService();
		jboolean isSecureElementPresent();
		QAndroidJniObject openSession();
	};
} // namespace android::se::omapi

