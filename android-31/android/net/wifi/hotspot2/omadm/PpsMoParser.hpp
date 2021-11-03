#pragma once

#include "../../../../../JObject.hpp"

namespace android::net::wifi::hotspot2
{
	class PasspointConfiguration;
}
class JString;

namespace android::net::wifi::hotspot2::omadm
{
	class PpsMoParser : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PpsMoParser(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PpsMoParser(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::wifi::hotspot2::PasspointConfiguration parseMoText(JString arg0);
	};
} // namespace android::net::wifi::hotspot2::omadm

