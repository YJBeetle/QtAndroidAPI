#include "../IntentSender.hpp"
#include "../../../java/io/InputStream.hpp"
#include "../../../java/io/OutputStream.hpp"
#include "./PackageInstaller_Session.hpp"

namespace android::content::pm
{
	// Fields
	
	PackageInstaller_Session::PackageInstaller_Session(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void PackageInstaller_Session::abandon()
	{
		__thiz.callMethod<void>(
			"abandon",
			"()V"
		);
	}
	void PackageInstaller_Session::addChildSessionId(jint arg0)
	{
		__thiz.callMethod<void>(
			"addChildSessionId",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_Session::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void PackageInstaller_Session::commit(android::content::IntentSender arg0)
	{
		__thiz.callMethod<void>(
			"commit",
			"(Landroid/content/IntentSender;)V",
			arg0.__jniObject().object()
		);
	}
	void PackageInstaller_Session::fsync(java::io::OutputStream arg0)
	{
		__thiz.callMethod<void>(
			"fsync",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	jintArray PackageInstaller_Session::getChildSessionIds()
	{
		return __thiz.callObjectMethod(
			"getChildSessionIds",
			"()[I"
		).object<jintArray>();
	}
	jarray PackageInstaller_Session::getNames()
	{
		return __thiz.callObjectMethod(
			"getNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint PackageInstaller_Session::getParentSessionId()
	{
		return __thiz.callMethod<jint>(
			"getParentSessionId",
			"()I"
		);
	}
	jboolean PackageInstaller_Session::isMultiPackage()
	{
		return __thiz.callMethod<jboolean>(
			"isMultiPackage",
			"()Z"
		);
	}
	jboolean PackageInstaller_Session::isStaged()
	{
		return __thiz.callMethod<jboolean>(
			"isStaged",
			"()Z"
		);
	}
	QAndroidJniObject PackageInstaller_Session::openRead(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"openRead",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0
		);
	}
	QAndroidJniObject PackageInstaller_Session::openWrite(jstring arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callObjectMethod(
			"openWrite",
			"(Ljava/lang/String;JJ)Ljava/io/OutputStream;",
			arg0,
			arg1,
			arg2
		);
	}
	void PackageInstaller_Session::removeChildSessionId(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeChildSessionId",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_Session::removeSplit(jstring arg0)
	{
		__thiz.callMethod<void>(
			"removeSplit",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PackageInstaller_Session::setStagingProgress(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setStagingProgress",
			"(F)V",
			arg0
		);
	}
	void PackageInstaller_Session::transfer(jstring arg0)
	{
		__thiz.callMethod<void>(
			"transfer",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace android::content::pm

