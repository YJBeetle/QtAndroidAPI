#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content::pm
{
	class PackageInstaller_SessionParams : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint MODE_FULL_INSTALL();
		static jint MODE_INHERIT_EXISTING();
		static QAndroidJniObject RESTRICTED_PERMISSIONS_ALL();
		
		// Constructors
		void __constructor(jint arg0);
		
		// Methods
		jint describeContents();
		void setAppIcon(__jni_impl::android::graphics::Bitmap arg0);
		void setAppLabel(jstring arg0);
		void setAppLabel(const QString &arg0);
		void setAppPackageName(jstring arg0);
		void setAppPackageName(const QString &arg0);
		void setInstallLocation(jint arg0);
		void setInstallReason(jint arg0);
		void setMultiPackage();
		void setOriginatingUid(jint arg0);
		void setOriginatingUri(__jni_impl::android::net::Uri arg0);
		void setReferrerUri(__jni_impl::android::net::Uri arg0);
		void setSize(jlong arg0);
		void setWhitelistedRestrictedPermissions(__jni_impl::__JniBaseClass arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content::pm

#include "../../graphics/Bitmap.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject PackageInstaller_SessionParams::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller$SessionParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PackageInstaller_SessionParams::MODE_FULL_INSTALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionParams",
			"MODE_FULL_INSTALL"
		);
	}
	jint PackageInstaller_SessionParams::MODE_INHERIT_EXISTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionParams",
			"MODE_INHERIT_EXISTING"
		);
	}
	QAndroidJniObject PackageInstaller_SessionParams::RESTRICTED_PERMISSIONS_ALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller$SessionParams",
			"RESTRICTED_PERMISSIONS_ALL",
			"Ljava/util/Set;"
		);
	}
	
	// Constructors
	void PackageInstaller_SessionParams::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageInstaller$SessionParams",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jint PackageInstaller_SessionParams::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void PackageInstaller_SessionParams::setAppIcon(__jni_impl::android::graphics::Bitmap arg0)
	{
		__thiz.callMethod<void>(
			"setAppIcon",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
		);
	}
	void PackageInstaller_SessionParams::setAppLabel(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setAppLabel",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setAppLabel(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setAppLabel",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void PackageInstaller_SessionParams::setAppPackageName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setAppPackageName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setAppPackageName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setAppPackageName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void PackageInstaller_SessionParams::setInstallLocation(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInstallLocation",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setInstallReason(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInstallReason",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setMultiPackage()
	{
		__thiz.callMethod<void>(
			"setMultiPackage",
			"()V"
		);
	}
	void PackageInstaller_SessionParams::setOriginatingUid(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOriginatingUid",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setOriginatingUri(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"setOriginatingUri",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void PackageInstaller_SessionParams::setReferrerUri(__jni_impl::android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"setReferrerUri",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void PackageInstaller_SessionParams::setSize(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setSize",
			"(J)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setWhitelistedRestrictedPermissions(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setWhitelistedRestrictedPermissions",
			"(Ljava/util/Set;)V",
			arg0.__jniObject().object()
		);
	}
	void PackageInstaller_SessionParams::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class PackageInstaller_SessionParams : public __jni_impl::android::content::pm::PackageInstaller_SessionParams
	{
	public:
		PackageInstaller_SessionParams(QAndroidJniObject obj) { __thiz = obj; }
		PackageInstaller_SessionParams(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::pm

