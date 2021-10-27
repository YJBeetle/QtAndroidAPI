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
		
		PpsMoParser(QAndroidJniObject obj);
		// Constructors
		PpsMoParser() = default;
		
		// Methods
		static QAndroidJniObject parseMoText(jstring arg0);
		static QAndroidJniObject parseMoText(const QString &arg0);
	};
} // namespace android::net::wifi::hotspot2::omadm

