#pragma once

#ifndef ANDROID_CONTENT_PM_PACKAGEINFO
#define ANDROID_CONTENT_PM_PACKAGEINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::pm
{
	class ApplicationInfo;
}
namespace __jni_impl::android::content::pm
{
	class SigningInfo;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content::pm
{
	class PackageInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint INSTALL_LOCATION_AUTO();
		static jint INSTALL_LOCATION_INTERNAL_ONLY();
		static jint INSTALL_LOCATION_PREFER_EXTERNAL();
		static jint REQUESTED_PERMISSION_GRANTED();
		QAndroidJniObject activities();
		QAndroidJniObject applicationInfo();
		jint baseRevisionCode();
		QAndroidJniObject configPreferences();
		QAndroidJniObject featureGroups();
		jlong firstInstallTime();
		QAndroidJniObject gids();
		jint installLocation();
		QAndroidJniObject instrumentation();
		jboolean isApex();
		jlong lastUpdateTime();
		QAndroidJniObject packageName();
		QAndroidJniObject permissions();
		QAndroidJniObject providers();
		QAndroidJniObject receivers();
		QAndroidJniObject reqFeatures();
		QAndroidJniObject requestedPermissions();
		QAndroidJniObject requestedPermissionsFlags();
		QAndroidJniObject services();
		QAndroidJniObject sharedUserId();
		jint sharedUserLabel();
		QAndroidJniObject signatures();
		QAndroidJniObject signingInfo();
		QAndroidJniObject splitNames();
		QAndroidJniObject splitRevisionCodes();
		jint versionCode();
		QAndroidJniObject versionName();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		jlong getLongVersionCode();
		void setLongVersionCode(jlong arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content::pm

#include "ApplicationInfo.hpp"
#include "SigningInfo.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject PackageInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint PackageInfo::INSTALL_LOCATION_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInfo",
			"INSTALL_LOCATION_AUTO");
	}
	jint PackageInfo::INSTALL_LOCATION_INTERNAL_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInfo",
			"INSTALL_LOCATION_INTERNAL_ONLY");
	}
	jint PackageInfo::INSTALL_LOCATION_PREFER_EXTERNAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInfo",
			"INSTALL_LOCATION_PREFER_EXTERNAL");
	}
	jint PackageInfo::REQUESTED_PERMISSION_GRANTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInfo",
			"REQUESTED_PERMISSION_GRANTED");
	}
	QAndroidJniObject PackageInfo::activities()
	{
		return __thiz.getObjectField(
			"activities",
			"[Landroid/content/pm/ActivityInfo;");
	}
	QAndroidJniObject PackageInfo::applicationInfo()
	{
		return __thiz.getObjectField(
			"applicationInfo",
			"Landroid/content/pm/ApplicationInfo;");
	}
	jint PackageInfo::baseRevisionCode()
	{
		return __thiz.getField<jint>(
			"baseRevisionCode");
	}
	QAndroidJniObject PackageInfo::configPreferences()
	{
		return __thiz.getObjectField(
			"configPreferences",
			"[Landroid/content/pm/ConfigurationInfo;");
	}
	QAndroidJniObject PackageInfo::featureGroups()
	{
		return __thiz.getObjectField(
			"featureGroups",
			"[Landroid/content/pm/FeatureGroupInfo;");
	}
	jlong PackageInfo::firstInstallTime()
	{
		return __thiz.getField<jlong>(
			"firstInstallTime");
	}
	QAndroidJniObject PackageInfo::gids()
	{
		return __thiz.getObjectField(
			"gids",
			"[I");
	}
	jint PackageInfo::installLocation()
	{
		return __thiz.getField<jint>(
			"installLocation");
	}
	QAndroidJniObject PackageInfo::instrumentation()
	{
		return __thiz.getObjectField(
			"instrumentation",
			"[Landroid/content/pm/InstrumentationInfo;");
	}
	jboolean PackageInfo::isApex()
	{
		return __thiz.getField<jboolean>(
			"isApex");
	}
	jlong PackageInfo::lastUpdateTime()
	{
		return __thiz.getField<jlong>(
			"lastUpdateTime");
	}
	QAndroidJniObject PackageInfo::packageName()
	{
		return __thiz.getObjectField(
			"packageName",
			"Ljava/lang/String;");
	}
	QAndroidJniObject PackageInfo::permissions()
	{
		return __thiz.getObjectField(
			"permissions",
			"[Landroid/content/pm/PermissionInfo;");
	}
	QAndroidJniObject PackageInfo::providers()
	{
		return __thiz.getObjectField(
			"providers",
			"[Landroid/content/pm/ProviderInfo;");
	}
	QAndroidJniObject PackageInfo::receivers()
	{
		return __thiz.getObjectField(
			"receivers",
			"[Landroid/content/pm/ActivityInfo;");
	}
	QAndroidJniObject PackageInfo::reqFeatures()
	{
		return __thiz.getObjectField(
			"reqFeatures",
			"[Landroid/content/pm/FeatureInfo;");
	}
	QAndroidJniObject PackageInfo::requestedPermissions()
	{
		return __thiz.getObjectField(
			"requestedPermissions",
			"[Ljava/lang/String;");
	}
	QAndroidJniObject PackageInfo::requestedPermissionsFlags()
	{
		return __thiz.getObjectField(
			"requestedPermissionsFlags",
			"[I");
	}
	QAndroidJniObject PackageInfo::services()
	{
		return __thiz.getObjectField(
			"services",
			"[Landroid/content/pm/ServiceInfo;");
	}
	QAndroidJniObject PackageInfo::sharedUserId()
	{
		return __thiz.getObjectField(
			"sharedUserId",
			"Ljava/lang/String;");
	}
	jint PackageInfo::sharedUserLabel()
	{
		return __thiz.getField<jint>(
			"sharedUserLabel");
	}
	QAndroidJniObject PackageInfo::signatures()
	{
		return __thiz.getObjectField(
			"signatures",
			"[Landroid/content/pm/Signature;");
	}
	QAndroidJniObject PackageInfo::signingInfo()
	{
		return __thiz.getObjectField(
			"signingInfo",
			"Landroid/content/pm/SigningInfo;");
	}
	QAndroidJniObject PackageInfo::splitNames()
	{
		return __thiz.getObjectField(
			"splitNames",
			"[Ljava/lang/String;");
	}
	QAndroidJniObject PackageInfo::splitRevisionCodes()
	{
		return __thiz.getObjectField(
			"splitRevisionCodes",
			"[I");
	}
	jint PackageInfo::versionCode()
	{
		return __thiz.getField<jint>(
			"versionCode");
	}
	QAndroidJniObject PackageInfo::versionName()
	{
		return __thiz.getObjectField(
			"versionName",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void PackageInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageInfo",
			"()V");
	}
	
	// Methods
	QAndroidJniObject PackageInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jlong PackageInfo::getLongVersionCode()
	{
		return __thiz.callMethod<jlong>(
			"getLongVersionCode",
			"()J");
	}
	void PackageInfo::setLongVersionCode(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setLongVersionCode",
			"(J)V",
			arg0);
	}
	jint PackageInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void PackageInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class PackageInfo : public __jni_impl::android::content::pm::PackageInfo
	{
	public:
		PackageInfo(QAndroidJniObject obj) { __thiz = obj; }
		PackageInfo()
		{
			__constructor();
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_PACKAGEINFO

