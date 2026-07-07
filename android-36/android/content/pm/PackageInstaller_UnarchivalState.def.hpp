#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}

namespace android::content::pm
{
	class PackageInstaller_UnarchivalState : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageInstaller_UnarchivalState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller_UnarchivalState(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::content::pm::PackageInstaller_UnarchivalState createGenericErrorState(jint arg0);
		static android::content::pm::PackageInstaller_UnarchivalState createInsufficientStorageState(jint arg0, jlong arg1, android::app::PendingIntent arg2);
		static android::content::pm::PackageInstaller_UnarchivalState createNoConnectivityState(jint arg0);
		static android::content::pm::PackageInstaller_UnarchivalState createOkState(jint arg0);
		static android::content::pm::PackageInstaller_UnarchivalState createUserActionRequiredState(jint arg0, android::app::PendingIntent arg1);
	};
} // namespace android::content::pm

