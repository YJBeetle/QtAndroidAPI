#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Intent;
}

namespace android::app::role
{
	class RoleManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ROLE_ASSISTANT();
		static jstring ROLE_BROWSER();
		static jstring ROLE_CALL_REDIRECTION();
		static jstring ROLE_CALL_SCREENING();
		static jstring ROLE_DIALER();
		static jstring ROLE_EMERGENCY();
		static jstring ROLE_HOME();
		static jstring ROLE_SMS();
		
		RoleManager(QAndroidJniObject obj);
		// Constructors
		RoleManager() = default;
		
		// Methods
		QAndroidJniObject createRequestRoleIntent(jstring arg0);
		QAndroidJniObject createRequestRoleIntent(const QString &arg0);
		jboolean isRoleAvailable(jstring arg0);
		jboolean isRoleAvailable(const QString &arg0);
		jboolean isRoleHeld(jstring arg0);
		jboolean isRoleHeld(const QString &arg0);
	};
} // namespace android::app::role

