#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class PersistableBundle;
}
class JString;

namespace android::content
{
	class RestrictionsManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_PERMISSION_RESPONSE_RECEIVED();
		static JString ACTION_REQUEST_LOCAL_APPROVAL();
		static JString ACTION_REQUEST_PERMISSION();
		static JString EXTRA_PACKAGE_NAME();
		static JString EXTRA_REQUEST_BUNDLE();
		static JString EXTRA_REQUEST_ID();
		static JString EXTRA_REQUEST_TYPE();
		static JString EXTRA_RESPONSE_BUNDLE();
		static JString META_DATA_APP_RESTRICTIONS();
		static JString REQUEST_KEY_APPROVE_LABEL();
		static JString REQUEST_KEY_DATA();
		static JString REQUEST_KEY_DENY_LABEL();
		static JString REQUEST_KEY_ICON();
		static JString REQUEST_KEY_ID();
		static JString REQUEST_KEY_MESSAGE();
		static JString REQUEST_KEY_NEW_REQUEST();
		static JString REQUEST_KEY_TITLE();
		static JString REQUEST_TYPE_APPROVAL();
		static JString RESPONSE_KEY_ERROR_CODE();
		static JString RESPONSE_KEY_MESSAGE();
		static JString RESPONSE_KEY_RESPONSE_TIMESTAMP();
		static JString RESPONSE_KEY_RESULT();
		static jint RESULT_APPROVED();
		static jint RESULT_DENIED();
		static jint RESULT_ERROR();
		static jint RESULT_ERROR_BAD_REQUEST();
		static jint RESULT_ERROR_INTERNAL();
		static jint RESULT_ERROR_NETWORK();
		static jint RESULT_NO_RESPONSE();
		static jint RESULT_UNKNOWN_REQUEST();
		
		// QJniObject forward
		template<typename ...Ts> explicit RestrictionsManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RestrictionsManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::os::Bundle convertRestrictionsToBundle(JObject arg0);
		android::content::Intent createLocalApprovalIntent() const;
		android::os::Bundle getApplicationRestrictions() const;
		JObject getManifestRestrictions(JString arg0) const;
		jboolean hasRestrictionsProvider() const;
		void notifyPermissionResponse(JString arg0, android::os::PersistableBundle arg1) const;
		void requestPermission(JString arg0, JString arg1, android::os::PersistableBundle arg2) const;
	};
} // namespace android::content

