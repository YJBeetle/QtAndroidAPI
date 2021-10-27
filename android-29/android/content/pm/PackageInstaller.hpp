#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class IntentSender;
}
namespace __jni_impl::android::content::pm
{
	class PackageInstaller_Session;
}
namespace __jni_impl::android::content::pm
{
	class PackageInstaller_SessionCallback;
}
namespace __jni_impl::android::content::pm
{
	class PackageInstaller_SessionInfo;
}
namespace __jni_impl::android::content::pm
{
	class PackageInstaller_SessionParams;
}
namespace __jni_impl::android::content::pm
{
	class VersionedPackage;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::content::pm
{
	class PackageInstaller : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_SESSION_COMMITTED();
		static jstring ACTION_SESSION_DETAILS();
		static jstring ACTION_SESSION_UPDATED();
		static jstring EXTRA_OTHER_PACKAGE_NAME();
		static jstring EXTRA_PACKAGE_NAME();
		static jstring EXTRA_SESSION();
		static jstring EXTRA_SESSION_ID();
		static jstring EXTRA_STATUS();
		static jstring EXTRA_STATUS_MESSAGE();
		static jstring EXTRA_STORAGE_PATH();
		static jint STATUS_FAILURE();
		static jint STATUS_FAILURE_ABORTED();
		static jint STATUS_FAILURE_BLOCKED();
		static jint STATUS_FAILURE_CONFLICT();
		static jint STATUS_FAILURE_INCOMPATIBLE();
		static jint STATUS_FAILURE_INVALID();
		static jint STATUS_FAILURE_STORAGE();
		static jint STATUS_PENDING_USER_ACTION();
		static jint STATUS_SUCCESS();
		
		// Constructors
		void __constructor();
		
		// Methods
		void abandonSession(jint arg0);
		jint createSession(__jni_impl::android::content::pm::PackageInstaller_SessionParams arg0);
		QAndroidJniObject getActiveStagedSession();
		QAndroidJniObject getAllSessions();
		QAndroidJniObject getMySessions();
		QAndroidJniObject getSessionInfo(jint arg0);
		QAndroidJniObject getStagedSessions();
		void installExistingPackage(jstring arg0, jint arg1, __jni_impl::android::content::IntentSender arg2);
		void installExistingPackage(const QString &arg0, jint arg1, __jni_impl::android::content::IntentSender arg2);
		QAndroidJniObject openSession(jint arg0);
		void registerSessionCallback(__jni_impl::android::content::pm::PackageInstaller_SessionCallback arg0);
		void registerSessionCallback(__jni_impl::android::content::pm::PackageInstaller_SessionCallback arg0, __jni_impl::android::os::Handler arg1);
		void uninstall(__jni_impl::android::content::pm::VersionedPackage arg0, __jni_impl::android::content::IntentSender arg1);
		void uninstall(jstring arg0, __jni_impl::android::content::IntentSender arg1);
		void uninstall(const QString &arg0, __jni_impl::android::content::IntentSender arg1);
		void unregisterSessionCallback(__jni_impl::android::content::pm::PackageInstaller_SessionCallback arg0);
		void updateSessionAppIcon(jint arg0, __jni_impl::android::graphics::Bitmap arg1);
		void updateSessionAppLabel(jint arg0, jstring arg1);
		void updateSessionAppLabel(jint arg0, const QString &arg1);
	};
} // namespace __jni_impl::android::content::pm

#include "../IntentSender.hpp"
#include "./PackageInstaller_Session.hpp"
#include "./PackageInstaller_SessionCallback.hpp"
#include "./PackageInstaller_SessionInfo.hpp"
#include "./PackageInstaller_SessionParams.hpp"
#include "./VersionedPackage.hpp"
#include "../../graphics/Bitmap.hpp"
#include "../../os/Handler.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	jstring PackageInstaller::ACTION_SESSION_COMMITTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"ACTION_SESSION_COMMITTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageInstaller::ACTION_SESSION_DETAILS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"ACTION_SESSION_DETAILS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageInstaller::ACTION_SESSION_UPDATED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"ACTION_SESSION_UPDATED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageInstaller::EXTRA_OTHER_PACKAGE_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_OTHER_PACKAGE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageInstaller::EXTRA_PACKAGE_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_PACKAGE_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageInstaller::EXTRA_SESSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_SESSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageInstaller::EXTRA_SESSION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_SESSION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageInstaller::EXTRA_STATUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_STATUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageInstaller::EXTRA_STATUS_MESSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_STATUS_MESSAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PackageInstaller::EXTRA_STORAGE_PATH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller",
			"EXTRA_STORAGE_PATH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint PackageInstaller::STATUS_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE"
		);
	}
	jint PackageInstaller::STATUS_FAILURE_ABORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_ABORTED"
		);
	}
	jint PackageInstaller::STATUS_FAILURE_BLOCKED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_BLOCKED"
		);
	}
	jint PackageInstaller::STATUS_FAILURE_CONFLICT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_CONFLICT"
		);
	}
	jint PackageInstaller::STATUS_FAILURE_INCOMPATIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_INCOMPATIBLE"
		);
	}
	jint PackageInstaller::STATUS_FAILURE_INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_INVALID"
		);
	}
	jint PackageInstaller::STATUS_FAILURE_STORAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_FAILURE_STORAGE"
		);
	}
	jint PackageInstaller::STATUS_PENDING_USER_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_PENDING_USER_ACTION"
		);
	}
	jint PackageInstaller::STATUS_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller",
			"STATUS_SUCCESS"
		);
	}
	
	// Constructors
	void PackageInstaller::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageInstaller",
			"(V)V");
	}
	
	// Methods
	void PackageInstaller::abandonSession(jint arg0)
	{
		__thiz.callMethod<void>(
			"abandonSession",
			"(I)V",
			arg0
		);
	}
	jint PackageInstaller::createSession(__jni_impl::android::content::pm::PackageInstaller_SessionParams arg0)
	{
		return __thiz.callMethod<jint>(
			"createSession",
			"(Landroid/content/pm/PackageInstaller$SessionParams;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject PackageInstaller::getActiveStagedSession()
	{
		return __thiz.callObjectMethod(
			"getActiveStagedSession",
			"()Landroid/content/pm/PackageInstaller$SessionInfo;"
		);
	}
	QAndroidJniObject PackageInstaller::getAllSessions()
	{
		return __thiz.callObjectMethod(
			"getAllSessions",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject PackageInstaller::getMySessions()
	{
		return __thiz.callObjectMethod(
			"getMySessions",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject PackageInstaller::getSessionInfo(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getSessionInfo",
			"(I)Landroid/content/pm/PackageInstaller$SessionInfo;",
			arg0
		);
	}
	QAndroidJniObject PackageInstaller::getStagedSessions()
	{
		return __thiz.callObjectMethod(
			"getStagedSessions",
			"()Ljava/util/List;"
		);
	}
	void PackageInstaller::installExistingPackage(jstring arg0, jint arg1, __jni_impl::android::content::IntentSender arg2)
	{
		__thiz.callMethod<void>(
			"installExistingPackage",
			"(Ljava/lang/String;ILandroid/content/IntentSender;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void PackageInstaller::installExistingPackage(const QString &arg0, jint arg1, __jni_impl::android::content::IntentSender arg2)
	{
		__thiz.callMethod<void>(
			"installExistingPackage",
			"(Ljava/lang/String;ILandroid/content/IntentSender;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject PackageInstaller::openSession(jint arg0)
	{
		return __thiz.callObjectMethod(
			"openSession",
			"(I)Landroid/content/pm/PackageInstaller$Session;",
			arg0
		);
	}
	void PackageInstaller::registerSessionCallback(__jni_impl::android::content::pm::PackageInstaller_SessionCallback arg0)
	{
		__thiz.callMethod<void>(
			"registerSessionCallback",
			"(Landroid/content/pm/PackageInstaller$SessionCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void PackageInstaller::registerSessionCallback(__jni_impl::android::content::pm::PackageInstaller_SessionCallback arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"registerSessionCallback",
			"(Landroid/content/pm/PackageInstaller$SessionCallback;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void PackageInstaller::uninstall(__jni_impl::android::content::pm::VersionedPackage arg0, __jni_impl::android::content::IntentSender arg1)
	{
		__thiz.callMethod<void>(
			"uninstall",
			"(Landroid/content/pm/VersionedPackage;Landroid/content/IntentSender;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void PackageInstaller::uninstall(jstring arg0, __jni_impl::android::content::IntentSender arg1)
	{
		__thiz.callMethod<void>(
			"uninstall",
			"(Ljava/lang/String;Landroid/content/IntentSender;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void PackageInstaller::uninstall(const QString &arg0, __jni_impl::android::content::IntentSender arg1)
	{
		__thiz.callMethod<void>(
			"uninstall",
			"(Ljava/lang/String;Landroid/content/IntentSender;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void PackageInstaller::unregisterSessionCallback(__jni_impl::android::content::pm::PackageInstaller_SessionCallback arg0)
	{
		__thiz.callMethod<void>(
			"unregisterSessionCallback",
			"(Landroid/content/pm/PackageInstaller$SessionCallback;)V",
			arg0.__jniObject().object()
		);
	}
	void PackageInstaller::updateSessionAppIcon(jint arg0, __jni_impl::android::graphics::Bitmap arg1)
	{
		__thiz.callMethod<void>(
			"updateSessionAppIcon",
			"(ILandroid/graphics/Bitmap;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void PackageInstaller::updateSessionAppLabel(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"updateSessionAppLabel",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void PackageInstaller::updateSessionAppLabel(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"updateSessionAppLabel",
			"(ILjava/lang/CharSequence;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class PackageInstaller : public __jni_impl::android::content::pm::PackageInstaller
	{
	public:
		PackageInstaller(QAndroidJniObject obj) { __thiz = obj; }
		PackageInstaller()
		{
			__constructor();
		}
	};
} // namespace android::content::pm

