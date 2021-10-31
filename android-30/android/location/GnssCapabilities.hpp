#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::location
{
	class GnssCapabilities : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssCapabilities(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GnssCapabilities(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean hasGnssAntennaInfo();
	};
} // namespace android::location

