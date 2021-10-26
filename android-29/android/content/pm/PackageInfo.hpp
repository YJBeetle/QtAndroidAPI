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
		jarray activities();
		QAndroidJniObject applicationInfo();
		jint baseRevisionCode();
		jarray configPreferences();
		jarray featureGroups();
		jlong firstInstallTime();
		jintArray gids();
		jint installLocation();
		jarray instrumentation();
		jboolean isApex();
		jlong lastUpdateTime();
		jstring packageName();
		jarray permissions();
		jarray providers();
		jarray receivers();
		jarray reqFeatures();
		jarray requestedPermissions();
		jintArray requestedPermissionsFlags();
		jarray services();
		jstring sharedUserId();
		jint sharedUserLabel();
		jarray signatures();
		QAndroidJniObject signingInfo();
		jarray splitNames();
		jintArray splitRevisionCodes();
		jint versionCode();
		jstring versionName();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
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
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PackageInfo::INSTALL_LOCATION_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInfo",
			"INSTALL_LOCATION_AUTO"
		);
	}
	jint PackageInfo::INSTALL_LOCATION_INTERNAL_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInfo",
			"INSTALL_LOCATION_INTERNAL_ONLY"
		);
	}
	jint PackageInfo::INSTALL_LOCATION_PREFER_EXTERNAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInfo",
			"INSTALL_LOCATION_PREFER_EXTERNAL"
		);
	}
	jint PackageInfo::REQUESTED_PERMISSION_GRANTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInfo",
			"REQUESTED_PERMISSION_GRANTED"
		);
	}
	jarray PackageInfo::activities()
	{
		return __thiz.getObjectField(
			"activities",
			"[Landroid/content/pm/ActivityInfo;"
		).object<jarray>();
	}
	QAndroidJniObject PackageInfo::applicationInfo()
	{
		return __thiz.getObjectField(
			"applicationInfo",
			"Landroid/content/pm/ApplicationInfo;"
		);
	}
	jint PackageInfo::baseRevisionCode()
	{
		return __thiz.getField<jint>(
			"baseRevisionCode"
		);
	}
	jarray PackageInfo::configPreferences()
	{
		return __thiz.getObjectField(
			"configPreferences",
			"[Landroid/content/pm/ConfigurationInfo;"
		).object<jarray>();
	}
	jarray PackageInfo::featureGroups()
	{
		return __thiz.getObjectField(
			"featureGroups",
			"[Landroid/content/pm/FeatureGroupInfo;"
		).object<jarray>();
	}
	jlong PackageInfo::firstInstallTime()
	{
		return __thiz.getField<jlong>(
			"firstInstallTime"
		);
	}
	jintArray PackageInfo::gids()
	{
		return __thiz.getObjectField(
			"gids",
			"[I"
		).object<jintArray>();
	}
	jint PackageInfo::installLocation()
	{
		return __thiz.getField<jint>(
			"installLocation"
		);
	}
	jarray PackageInfo::instrumentation()
	{
		return __thiz.getObjectField(
			"instrumentation",
			"[Landroid/content/pm/InstrumentationInfo;"
		).object<jarray>();
	}
	jboolean PackageInfo::isApex()
	{
		return __thiz.getField<jboolean>(
			"isApex"
		);
	}
	jlong PackageInfo::lastUpdateTime()
	{
		return __thiz.getField<jlong>(
			"lastUpdateTime"
		);
	}
	jstring PackageInfo::packageName()
	{
		return __thiz.getObjectField(
			"packageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jarray PackageInfo::permissions()
	{
		return __thiz.getObjectField(
			"permissions",
			"[Landroid/content/pm/PermissionInfo;"
		).object<jarray>();
	}
	jarray PackageInfo::providers()
	{
		return __thiz.getObjectField(
			"providers",
			"[Landroid/content/pm/ProviderInfo;"
		).object<jarray>();
	}
	jarray PackageInfo::receivers()
	{
		return __thiz.getObjectField(
			"receivers",
			"[Landroid/content/pm/ActivityInfo;"
		).object<jarray>();
	}
	jarray PackageInfo::reqFeatures()
	{
		return __thiz.getObjectField(
			"reqFeatures",
			"[Landroid/content/pm/FeatureInfo;"
		).object<jarray>();
	}
	jarray PackageInfo::requestedPermissions()
	{
		return __thiz.getObjectField(
			"requestedPermissions",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jintArray PackageInfo::requestedPermissionsFlags()
	{
		return __thiz.getObjectField(
			"requestedPermissionsFlags",
			"[I"
		).object<jintArray>();
	}
	jarray PackageInfo::services()
	{
		return __thiz.getObjectField(
			"services",
			"[Landroid/content/pm/ServiceInfo;"
		).object<jarray>();
	}
	jstring PackageInfo::sharedUserId()
	{
		return __thiz.getObjectField(
			"sharedUserId",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint PackageInfo::sharedUserLabel()
	{
		return __thiz.getField<jint>(
			"sharedUserLabel"
		);
	}
	jarray PackageInfo::signatures()
	{
		return __thiz.getObjectField(
			"signatures",
			"[Landroid/content/pm/Signature;"
		).object<jarray>();
	}
	QAndroidJniObject PackageInfo::signingInfo()
	{
		return __thiz.getObjectField(
			"signingInfo",
			"Landroid/content/pm/SigningInfo;"
		);
	}
	jarray PackageInfo::splitNames()
	{
		return __thiz.getObjectField(
			"splitNames",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jintArray PackageInfo::splitRevisionCodes()
	{
		return __thiz.getObjectField(
			"splitRevisionCodes",
			"[I"
		).object<jintArray>();
	}
	jint PackageInfo::versionCode()
	{
		return __thiz.getField<jint>(
			"versionCode"
		);
	}
	jstring PackageInfo::versionName()
	{
		return __thiz.getObjectField(
			"versionName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void PackageInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageInfo",
			"()V"
		);
	}
	
	// Methods
	jstring PackageInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong PackageInfo::getLongVersionCode()
	{
		return __thiz.callMethod<jlong>(
			"getLongVersionCode",
			"()J"
		);
	}
	void PackageInfo::setLongVersionCode(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setLongVersionCode",
			"(J)V",
			arg0
		);
	}
	jint PackageInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void PackageInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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

