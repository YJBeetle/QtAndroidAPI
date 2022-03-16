#pragma once

#include "../../JObject.hpp"

namespace android::location
{
	class GnssCapabilities : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssCapabilities(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssCapabilities(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean hasGnssAntennaInfo() const;
	};
} // namespace android::location

