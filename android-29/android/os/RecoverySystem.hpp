#pragma once

#include "../content/Context.def.hpp"
#include "../../java/io/File.def.hpp"
#include "./RecoverySystem.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void RecoverySystem::installPackage(android::content::Context arg0, java::io::File arg1)
	{
		callStaticMethod<void>(
			"android.os.RecoverySystem",
			"installPackage",
			"(Landroid/content/Context;Ljava/io/File;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RecoverySystem::rebootWipeCache(android::content::Context arg0)
	{
		callStaticMethod<void>(
			"android.os.RecoverySystem",
			"rebootWipeCache",
			"(Landroid/content/Context;)V",
			arg0.object()
		);
	}
	inline void RecoverySystem::rebootWipeUserData(android::content::Context arg0)
	{
		callStaticMethod<void>(
			"android.os.RecoverySystem",
			"rebootWipeUserData",
			"(Landroid/content/Context;)V",
			arg0.object()
		);
	}
	inline void RecoverySystem::verifyPackage(java::io::File arg0, JObject arg1, java::io::File arg2)
	{
		callStaticMethod<void>(
			"android.os.RecoverySystem",
			"verifyPackage",
			"(Ljava/io/File;Landroid/os/RecoverySystem$ProgressListener;Ljava/io/File;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
