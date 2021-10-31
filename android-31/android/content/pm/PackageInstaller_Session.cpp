#include "../IntentSender.hpp"
#include "../../../java/io/InputStream.hpp"
#include "../../../java/io/OutputStream.hpp"
#include "./PackageInstaller_Session.hpp"

namespace android::content::pm
{
	// Fields
	
	// QAndroidJniObject forward
	PackageInstaller_Session::PackageInstaller_Session(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
	jintArray PackageInstaller_Session::getChildSessionIds()
	{
		return callObjectMethod(
			"getChildSessionIds",
			"()[I"
		).object<jintArray>();
	}
	jarray PackageInstaller_Session::getNames()
	{
		return callObjectMethod(
			"getNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
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
	java::io::InputStream PackageInstaller_Session::openRead(jstring arg0)
	{
		return callObjectMethod(
			"openRead",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0
		);
	}
	java::io::OutputStream PackageInstaller_Session::openWrite(jstring arg0, jlong arg1, jlong arg2)
	{
		return callObjectMethod(
			"openWrite",
			"(Ljava/lang/String;JJ)Ljava/io/OutputStream;",
			arg0,
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
	void PackageInstaller_Session::removeSplit(jstring arg0)
	{
		callMethod<void>(
			"removeSplit",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PackageInstaller_Session::setChecksums(jstring arg0, __JniBaseClass arg1, jbyteArray arg2)
	{
		callMethod<void>(
			"setChecksums",
			"(Ljava/lang/String;Ljava/util/List;[B)V",
			arg0,
			arg1.object(),
			arg2
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
	void PackageInstaller_Session::transfer(jstring arg0)
	{
		callMethod<void>(
			"transfer",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::content::pm

