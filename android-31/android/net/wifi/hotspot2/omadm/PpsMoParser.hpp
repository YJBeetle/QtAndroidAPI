#pragma once

#include "../../../../../__JniBaseClass.hpp"

namespace android::net::wifi::hotspot2
{
	class PasspointConfiguration;
}

namespace android::net::wifi::hotspot2::omadm
{
	class PpsMoParser : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PpsMoParser(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PpsMoParser(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::wifi::hotspot2::PasspointConfiguration parseMoText(jstring arg0);
	};
} // namespace android::net::wifi::hotspot2::omadm

