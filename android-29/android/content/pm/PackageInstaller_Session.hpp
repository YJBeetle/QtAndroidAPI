#pragma once

#ifndef ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSION
#define ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class IntentSender;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::android::content::pm
{
	class PackageInstaller_Session : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		void transfer(jstring arg0);
		void transfer(const QString &arg0);
		void commit(__jni_impl::android::content::IntentSender arg0);
		void abandon();
		void setStagingProgress(jfloat arg0);
		QAndroidJniObject openWrite(jstring arg0, jlong arg1, jlong arg2);
		QAndroidJniObject openWrite(const QString &arg0, jlong arg1, jlong arg2);
		jarray getNames();
		QAndroidJniObject openRead(jstring arg0);
		QAndroidJniObject openRead(const QString &arg0);
		void removeSplit(jstring arg0);
		void removeSplit(const QString &arg0);
		jboolean isMultiPackage();
		jboolean isStaged();
		jint getParentSessionId();
		jintArray getChildSessionIds();
		void addChildSessionId(jint arg0);
		void removeChildSessionId(jint arg0);
		void fsync(__jni_impl::java::io::OutputStream arg0);
	};
} // namespace __jni_impl::android::content::pm

#include "../IntentSender.hpp"
#include "../../../java/io/OutputStream.hpp"
#include "../../../java/io/InputStream.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	
	// Constructors
	void PackageInstaller_Session::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageInstaller$Session",
			"(V)V");
	}
	
	// Methods
	void PackageInstaller_Session::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
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
	void PackageInstaller_Session::transfer(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"transfer",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void PackageInstaller_Session::commit(__jni_impl::android::content::IntentSender arg0)
	{
		__thiz.callMethod<void>(
			"commit",
			"(Landroid/content/IntentSender;)V",
			arg0.__jniObject().object()
		);
	}
	void PackageInstaller_Session::abandon()
	{
		__thiz.callMethod<void>(
			"abandon",
			"()V"
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
	QAndroidJniObject PackageInstaller_Session::openWrite(const QString &arg0, jlong arg1, jlong arg2)
	{
		return __thiz.callObjectMethod(
			"openWrite",
			"(Ljava/lang/String;JJ)Ljava/io/OutputStream;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	jarray PackageInstaller_Session::getNames()
	{
		return __thiz.callObjectMethod(
			"getNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject PackageInstaller_Session::openRead(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"openRead",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0
		);
	}
	QAndroidJniObject PackageInstaller_Session::openRead(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"openRead",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	void PackageInstaller_Session::removeSplit(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"removeSplit",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jint PackageInstaller_Session::getParentSessionId()
	{
		return __thiz.callMethod<jint>(
			"getParentSessionId",
			"()I"
		);
	}
	jintArray PackageInstaller_Session::getChildSessionIds()
	{
		return __thiz.callObjectMethod(
			"getChildSessionIds",
			"()[I"
		).object<jintArray>();
	}
	void PackageInstaller_Session::addChildSessionId(jint arg0)
	{
		__thiz.callMethod<void>(
			"addChildSessionId",
			"(I)V",
			arg0
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
	void PackageInstaller_Session::fsync(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz.callMethod<void>(
			"fsync",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class PackageInstaller_Session : public __jni_impl::android::content::pm::PackageInstaller_Session
	{
	public:
		PackageInstaller_Session(QAndroidJniObject obj) { __thiz = obj; }
		PackageInstaller_Session()
		{
			__constructor();
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_PACKAGEINSTALLER_SESSION

