#pragma once

#include "../../JObject.hpp"


namespace android::location
{
	class GnssCapabilities : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GnssCapabilities(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssCapabilities(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean hasGnssAntennaInfo();
	};
} // namespace android::location

