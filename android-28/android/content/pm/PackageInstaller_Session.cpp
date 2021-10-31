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
	jarray PackageInstaller_Session::getNames()
	{
		return callObjectMethod(
			"getNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
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
	void PackageInstaller_Session::removeSplit(jstring arg0)
	{
		callMethod<void>(
			"removeSplit",
			"(Ljava/lang/String;)V",
			arg0
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

