#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::content
{
	class RestrictionsManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_PERMISSION_RESPONSE_RECEIVED();
		static jstring ACTION_REQUEST_LOCAL_APPROVAL();
		static jstring ACTION_REQUEST_PERMISSION();
		static jstring EXTRA_PACKAGE_NAME();
		static jstring EXTRA_REQUEST_BUNDLE();
		static jstring EXTRA_REQUEST_ID();
		static jstring EXTRA_REQUEST_TYPE();
		static jstring EXTRA_RESPONSE_BUNDLE();
		static jstring META_DATA_APP_RESTRICTIONS();
		static jstring REQUEST_KEY_APPROVE_LABEL();
		static jstring REQUEST_KEY_DATA();
		static jstring REQUEST_KEY_DENY_LABEL();
		static jstring REQUEST_KEY_ICON();
		static jstring REQUEST_KEY_ID();
		static jstring REQUEST_KEY_MESSAGE();
		static jstring REQUEST_KEY_NEW_REQUEST();
		static jstring REQUEST_KEY_TITLE();
		static jstring REQUEST_TYPE_APPROVAL();
		static jstring RESPONSE_KEY_ERROR_CODE();
		static jstring RESPONSE_KEY_MESSAGE();
		static jstring RESPONSE_KEY_RESPONSE_TIMESTAMP();
		static jstring RESPONSE_KEY_RESULT();
		static jint RESULT_APPROVED();
		static jint RESULT_DENIED();
		static jint RESULT_ERROR();
		static jint RESULT_ERROR_BAD_REQUEST();
		static jint RESULT_ERROR_INTERNAL();
		static jint RESULT_ERROR_NETWORK();
		static jint RESULT_NO_RESPONSE();
		static jint RESULT_UNKNOWN_REQUEST();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RestrictionsManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RestrictionsManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::os::Bundle convertRestrictionsToBundle(__JniBaseClass arg0);
		android::content::Intent createLocalApprovalIntent();
		android::os::Bundle getApplicationRestrictions();
		__JniBaseClass getManifestRestrictions(jstring arg0);
		jboolean hasRestrictionsProvider();
		void notifyPermissionResponse(jstring arg0, android::os::PersistableBundle arg1);
		void requestPermission(jstring arg0, jstring arg1, android::os::PersistableBundle arg2);
	};
} // namespace android::content

