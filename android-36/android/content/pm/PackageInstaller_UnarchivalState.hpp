#pragma once

#include "../../app/PendingIntent.def.hpp"
#include "./PackageInstaller_UnarchivalState.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::content::pm::PackageInstaller_UnarchivalState PackageInstaller_UnarchivalState::createGenericErrorState(jint arg0)
	{
		return callStaticObjectMethod(
			"android.content.pm.PackageInstaller$UnarchivalState",
			"createGenericErrorState",
			"(I)Landroid/content/pm/PackageInstaller$UnarchivalState;",
			arg0
		);
	}
	inline android::content::pm::PackageInstaller_UnarchivalState PackageInstaller_UnarchivalState::createInsufficientStorageState(jint arg0, jlong arg1, android::app::PendingIntent arg2)
	{
		return callStaticObjectMethod(
			"android.content.pm.PackageInstaller$UnarchivalState",
			"createInsufficientStorageState",
			"(IJLandroid/app/PendingIntent;)Landroid/content/pm/PackageInstaller$UnarchivalState;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline android::content::pm::PackageInstaller_UnarchivalState PackageInstaller_UnarchivalState::createNoConnectivityState(jint arg0)
	{
		return callStaticObjectMethod(
			"android.content.pm.PackageInstaller$UnarchivalState",
			"createNoConnectivityState",
			"(I)Landroid/content/pm/PackageInstaller$UnarchivalState;",
			arg0
		);
	}
	inline android::content::pm::PackageInstaller_UnarchivalState PackageInstaller_UnarchivalState::createOkState(jint arg0)
	{
		return callStaticObjectMethod(
			"android.content.pm.PackageInstaller$UnarchivalState",
			"createOkState",
			"(I)Landroid/content/pm/PackageInstaller$UnarchivalState;",
			arg0
		);
	}
	inline android::content::pm::PackageInstaller_UnarchivalState PackageInstaller_UnarchivalState::createUserActionRequiredState(jint arg0, android::app::PendingIntent arg1)
	{
		return callStaticObjectMethod(
			"android.content.pm.PackageInstaller$UnarchivalState",
			"createUserActionRequiredState",
			"(ILandroid/app/PendingIntent;)Landroid/content/pm/PackageInstaller$UnarchivalState;",
			arg0,
			arg1.object()
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
