#pragma once

#include "../../../JArray.hpp"
#include "../IntentSender.def.hpp"
#include "../../../java/io/InputStream.def.hpp"
#include "../../../java/io/OutputStream.def.hpp"
#include "../../../JString.hpp"
#include "./PackageInstaller_Session.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void PackageInstaller_Session::abandon() const
	{
		callMethod<void>(
			"abandon",
			"()V"
		);
	}
	inline void PackageInstaller_Session::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void PackageInstaller_Session::commit(android::content::IntentSender arg0) const
	{
		callMethod<void>(
			"commit",
			"(Landroid/content/IntentSender;)V",
			arg0.object()
		);
	}
	inline void PackageInstaller_Session::fsync(java::io::OutputStream arg0) const
	{
		callMethod<void>(
			"fsync",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
	inline JArray PackageInstaller_Session::getNames() const
	{
		return callObjectMethod(
			"getNames",
			"()[Ljava/lang/String;"
		);
	}
	inline java::io::InputStream PackageInstaller_Session::openRead(JString arg0) const
	{
		return callObjectMethod(
			"openRead",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0.object<jstring>()
		);
	}
	inline java::io::OutputStream PackageInstaller_Session::openWrite(JString arg0, jlong arg1, jlong arg2) const
	{
		return callObjectMethod(
			"openWrite",
			"(Ljava/lang/String;JJ)Ljava/io/OutputStream;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline void PackageInstaller_Session::removeSplit(JString arg0) const
	{
		callMethod<void>(
			"removeSplit",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void PackageInstaller_Session::setStagingProgress(jfloat arg0) const
	{
		callMethod<void>(
			"setStagingProgress",
			"(F)V",
			arg0
		);
	}
	inline void PackageInstaller_Session::transfer(JString arg0) const
	{
		callMethod<void>(
			"transfer",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
