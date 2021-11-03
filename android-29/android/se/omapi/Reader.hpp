#pragma once

#include "../../../JObject.hpp"

namespace android::se::omapi
{
	class SEService;
}
namespace android::se::omapi
{
	class Session;
}
class JString;

namespace android::se::omapi
{
	class Reader : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Reader(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Reader(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void closeSessions();
		JString getName();
		android::se::omapi::SEService getSEService();
		jboolean isSecureElementPresent();
		android::se::omapi::Session openSession();
	};
} // namespace android::se::omapi

