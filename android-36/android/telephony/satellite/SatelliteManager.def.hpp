#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::satellite
{
	class SatelliteManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SatelliteManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SatelliteManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void registerStateChangeListener(JObject arg0, JObject arg1) const;
		void unregisterStateChangeListener(JObject arg0) const;
	};
} // namespace android::telephony::satellite

