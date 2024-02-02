#pragma once

#include "../../JObject.hpp"

namespace android::companion
{
	class AssociationRequest;
}
namespace android::companion
{
	class CompanionDeviceManager_Callback;
}
namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class IntentSender;
}
namespace android::os
{
	class Handler;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
class JString;

namespace android::companion
{
	class CompanionDeviceManager : public JObject
	{
	public:
		// Fields
		static JString EXTRA_ASSOCIATION();
		static JString EXTRA_DEVICE();
		static jint FLAG_CALL_METADATA();
		static jint RESULT_CANCELED();
		static jint RESULT_DISCOVERY_TIMEOUT();
		static jint RESULT_INTERNAL_ERROR();
		static jint RESULT_OK();
		static jint RESULT_USER_REJECTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit CompanionDeviceManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CompanionDeviceManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void associate(android::companion::AssociationRequest arg0, android::companion::CompanionDeviceManager_Callback arg1, android::os::Handler arg2) const;
		void associate(android::companion::AssociationRequest arg0, JObject arg1, android::companion::CompanionDeviceManager_Callback arg2) const;
		void attachSystemDataTransport(jint arg0, java::io::InputStream arg1, java::io::OutputStream arg2) const;
		android::content::IntentSender buildAssociationCancellationIntent() const;
		android::content::IntentSender buildPermissionTransferUserConsentIntent(jint arg0) const;
		void detachSystemDataTransport(jint arg0) const;
		void disableSystemDataSyncForTypes(jint arg0, jint arg1) const;
		void disassociate(jint arg0) const;
		void disassociate(JString arg0) const;
		void enableSystemDataSyncForTypes(jint arg0, jint arg1) const;
		JObject getAssociations() const;
		JObject getMyAssociations() const;
		jboolean hasNotificationAccess(android::content::ComponentName arg0) const;
		void requestNotificationAccess(android::content::ComponentName arg0) const;
		void startObservingDevicePresence(JString arg0) const;
		void startSystemDataTransfer(jint arg0, JObject arg1, JObject arg2) const;
		void stopObservingDevicePresence(JString arg0) const;
	};
} // namespace android::companion

