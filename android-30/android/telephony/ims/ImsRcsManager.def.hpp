#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::ims
{
	class RcsUceAdapter;
}
class JString;

namespace android::telephony::ims
{
	class ImsRcsManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_SHOW_CAPABILITY_DISCOVERY_OPT_IN();
		
		// QJniObject forward
		template<typename ...Ts> explicit ImsRcsManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ImsRcsManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::telephony::ims::RcsUceAdapter getUceAdapter() const;
	};
} // namespace android::telephony::ims

