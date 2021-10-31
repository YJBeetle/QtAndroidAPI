#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::telephony::ims
{
	class ImsMmTelManager;
}
namespace android::telephony::ims
{
	class ImsRcsManager;
}

namespace android::telephony::ims
{
	class ImsManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_WFC_IMS_REGISTRATION_ERROR();
		static jstring EXTRA_WFC_REGISTRATION_FAILURE_MESSAGE();
		static jstring EXTRA_WFC_REGISTRATION_FAILURE_TITLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit ImsManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ImsManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::telephony::ims::ImsMmTelManager getImsMmTelManager(jint arg0);
		android::telephony::ims::ImsRcsManager getImsRcsManager(jint arg0);
	};
} // namespace android::telephony::ims

