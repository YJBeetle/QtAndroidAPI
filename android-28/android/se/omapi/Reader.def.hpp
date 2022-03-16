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
		
		// QJniObject forward
		template<typename ...Ts> explicit Reader(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Reader(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void closeSessions() const;
		JString getName() const;
		android::se::omapi::SEService getSEService() const;
		jboolean isSecureElementPresent() const;
		android::se::omapi::Session openSession() const;
	};
} // namespace android::se::omapi

