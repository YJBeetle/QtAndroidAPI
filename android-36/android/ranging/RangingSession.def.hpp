#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class CancellationSignal;
}
namespace android::ranging
{
	class RangingConfig;
}
namespace android::ranging
{
	class RangingDevice;
}
namespace android::ranging
{
	class RangingPreference;
}
class JString;

namespace android::ranging
{
	class RangingSession : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RangingSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RangingSession(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void addDeviceToRangingSession(android::ranging::RangingConfig arg0) const;
		void close() const;
		void reconfigureRangingInterval(jint arg0) const;
		void removeDeviceFromRangingSession(android::ranging::RangingDevice arg0) const;
		android::os::CancellationSignal start(android::ranging::RangingPreference arg0) const;
		void stop() const;
		JString toString() const;
	};
} // namespace android::ranging

