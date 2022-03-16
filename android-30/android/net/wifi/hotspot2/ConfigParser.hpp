#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
namespace android::net::wifi::hotspot2
{
	class PasspointConfiguration;
}
class JString;

namespace android::net::wifi::hotspot2
{
	class ConfigParser : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConfigParser(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConfigParser(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::net::wifi::hotspot2::PasspointConfiguration parsePasspointConfig(JString arg0, JByteArray arg1);
	};
} // namespace android::net::wifi::hotspot2

