#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::telephony::ims
{
	class RcsUceAdapter;
}

namespace android::telephony::ims
{
	class ImsRcsManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_SHOW_CAPABILITY_DISCOVERY_OPT_IN();
		
		// QJniObject forward
		template<typename ...Ts> explicit ImsRcsManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ImsRcsManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::telephony::ims::RcsUceAdapter getUceAdapter();
	};
} // namespace android::telephony::ims

