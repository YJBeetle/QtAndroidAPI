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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PpsMoParser(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PpsMoParser(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject parseMoText(jstring arg0);
	};
} // namespace android::net::wifi::hotspot2::omadm

