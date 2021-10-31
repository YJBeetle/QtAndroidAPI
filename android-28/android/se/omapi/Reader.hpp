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
		
		// QJniObject forward
		template<typename ...Ts> explicit Reader(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Reader(QJniObject obj);
		
		// Constructors
		
		// Methods
		void closeSessions();
		jstring getName();
		android::se::omapi::SEService getSEService();
		jboolean isSecureElementPresent();
		android::se::omapi::Session openSession();
	};
} // namespace android::se::omapi

