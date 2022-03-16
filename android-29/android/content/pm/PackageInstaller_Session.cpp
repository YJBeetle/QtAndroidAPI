#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../IntentSender.hpp"
#include "../../../java/io/InputStream.hpp"
#include "../../../java/io/OutputStream.hpp"
#include "../../../JString.hpp"
#include "./PackageInstaller_Session.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	
	// Methods
	void PackageInstaller_Session::abandon() const
	{
		callMethod<void>(
			"abandon",
			"()V"
		);
	}
	void PackageInstaller_Session::addChildSessionId(jint arg0) const
	{
		callMethod<void>(
			"addChildSessionId",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_Session::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void PackageInstaller_Session::commit(android::content::IntentSender arg0) const
	{
		callMethod<void>(
			"commit",
			"(Landroid/content/IntentSender;)V",
			arg0.object()
		);
	}
	void PackageInstaller_Session::fsync(java::io::OutputStream arg0) const
	{
		callMethod<void>(
			"fsync",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
	JIntArray PackageInstaller_Session::getChildSessionIds() const
	{
		return callObjectMethod(
			"getChildSessionIds",
			"()[I"
		);
	}
	JArray PackageInstaller_Session::getNames() const
	{
		return callObjectMethod(
			"getNames",
			"()[Ljava/lang/String;"
		);
	}
	jint PackageInstaller_Session::getParentSessionId() const
	{
		return callMethod<jint>(
			"getParentSessionId",
			"()I"
		);
	}
	jboolean PackageInstaller_Session::isMultiPackage() const
	{
		return callMethod<jboolean>(
			"isMultiPackage",
			"()Z"
		);
	}
	jboolean PackageInstaller_Session::isStaged() const
	{
		return callMethod<jboolean>(
			"isStaged",
			"()Z"
		);
	}
	java::io::InputStream PackageInstaller_Session::openRead(JString arg0) const
	{
		return callObjectMethod(
			"openRead",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0.object<jstring>()
		);
	}
	java::io::OutputStream PackageInstaller_Session::openWrite(JString arg0, jlong arg1, jlong arg2) const
	{
		return callObjectMethod(
			"openWrite",
			"(Ljava/lang/String;JJ)Ljava/io/OutputStream;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	void PackageInstaller_Session::removeChildSessionId(jint arg0) const
	{
		callMethod<void>(
			"removeChildSessionId",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_Session::removeSplit(JString arg0) const
	{
		callMethod<void>(
			"removeSplit",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void PackageInstaller_Session::setStagingProgress(jfloat arg0) const
	{
		callMethod<void>(
			"setStagingProgress",
			"(F)V",
			arg0
		);
	}
	void PackageInstaller_Session::transfer(JString arg0) const
	{
		callMethod<void>(
			"transfer",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::content::pm

