#pragma once

#include "./PackageInstaller_SessionCallback.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	inline PackageInstaller_SessionCallback::PackageInstaller_SessionCallback()
		: JObject(
			"android.content.pm.PackageInstaller$SessionCallback",
			"()V"
		) {}
	
	// Methods
	inline void PackageInstaller_SessionCallback::onActiveChanged(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onActiveChanged",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void PackageInstaller_SessionCallback::onBadgingChanged(jint arg0) const
	{
		callMethod<void>(
			"onBadgingChanged",
			"(I)V",
			arg0
		);
	}
	inline void PackageInstaller_SessionCallback::onCreated(jint arg0) const
	{
		callMethod<void>(
			"onCreated",
			"(I)V",
			arg0
		);
	}
	inline void PackageInstaller_SessionCallback::onFinished(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"onFinished",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void PackageInstaller_SessionCallback::onProgressChanged(jint arg0, jfloat arg1) const
	{
		callMethod<void>(
			"onProgressChanged",
			"(IF)V",
			arg0,
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers

