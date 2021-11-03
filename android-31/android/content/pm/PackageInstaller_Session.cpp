#include "../../../JByteArray.hpp"
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
	
	// QAndroidJniObject forward
	PackageInstaller_Session::PackageInstaller_Session(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void PackageInstaller_Session::abandon()
	{
		callMethod<void>(
			"abandon",
			"()V"
		);
	}
	void PackageInstaller_Session::addChildSessionId(jint arg0)
	{
		callMethod<void>(
			"addChildSessionId",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_Session::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void PackageInstaller_Session::commit(android::content::IntentSender arg0)
	{
		callMethod<void>(
			"commit",
			"(Landroid/content/IntentSender;)V",
			arg0.object()
		);
	}
	void PackageInstaller_Session::fsync(java::io::OutputStream arg0)
	{
		callMethod<void>(
			"fsync",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
	JIntArray PackageInstaller_Session::getChildSessionIds()
	{
		return callObjectMethod(
			"getChildSessionIds",
			"()[I"
		);
	}
	JArray PackageInstaller_Session::getNames()
	{
		return callObjectMethod(
			"getNames",
			"()[Ljava/lang/String;"
		);
	}
	jint PackageInstaller_Session::getParentSessionId()
	{
		return callMethod<jint>(
			"getParentSessionId",
			"()I"
		);
	}
	jboolean PackageInstaller_Session::isMultiPackage()
	{
		return callMethod<jboolean>(
			"isMultiPackage",
			"()Z"
		);
	}
	jboolean PackageInstaller_Session::isStaged()
	{
		return callMethod<jboolean>(
			"isStaged",
			"()Z"
		);
	}
	java::io::InputStream PackageInstaller_Session::openRead(JString arg0)
	{
		return callObjectMethod(
			"openRead",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0.object<jstring>()
		);
	}
	java::io::OutputStream PackageInstaller_Session::openWrite(JString arg0, jlong arg1, jlong arg2)
	{
		return callObjectMethod(
			"openWrite",
			"(Ljava/lang/String;JJ)Ljava/io/OutputStream;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	void PackageInstaller_Session::removeChildSessionId(jint arg0)
	{
		callMethod<void>(
			"removeChildSessionId",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_Session::removeSplit(JString arg0)
	{
		callMethod<void>(
			"removeSplit",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void PackageInstaller_Session::setChecksums(JString arg0, JObject arg1, JByteArray arg2)
	{
		callMethod<void>(
			"setChecksums",
			"(Ljava/lang/String;Ljava/util/List;[B)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jbyteArray>()
		);
	}
	void PackageInstaller_Session::setStagingProgress(jfloat arg0)
	{
		callMethod<void>(
			"setStagingProgress",
			"(F)V",
			arg0
		);
	}
	void PackageInstaller_Session::transfer(JString arg0)
	{
		callMethod<void>(
			"transfer",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::content::pm

