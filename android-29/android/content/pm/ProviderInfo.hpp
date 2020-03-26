#pragma once

#ifndef ANDROID_CONTENT_PM_PROVIDERINFO
#define ANDROID_CONTENT_PM_PROVIDERINFO

#include "../../../__JniBaseClass.hpp"
#include "PackageItemInfo.hpp"
#include "ComponentInfo.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content::pm
{
	class ProviderInfo : public __jni_impl::android::content::pm::ComponentInfo
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_SINGLE_USER();
		jstring authority();
		jint flags();
		jboolean forceUriPermissions();
		jboolean grantUriPermissions();
		jint initOrder();
		jboolean isSyncable();
		jboolean multiprocess();
		jarray pathPermissions();
		jstring readPermission();
		jarray uriPermissionPatterns();
		jstring writePermission();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::pm::ProviderInfo arg0);
		
		// Methods
		jstring toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		void dump(__jni_impl::__JniBaseClass arg0, jstring arg1);
	};
} // namespace __jni_impl::android::content::pm

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject ProviderInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.ProviderInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ProviderInfo::FLAG_SINGLE_USER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ProviderInfo",
			"FLAG_SINGLE_USER"
		);
	}
	jstring ProviderInfo::authority()
	{
		return __thiz.getObjectField(
			"authority",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ProviderInfo::flags()
	{
		return __thiz.getField<jint>(
			"flags"
		);
	}
	jboolean ProviderInfo::forceUriPermissions()
	{
		return __thiz.getField<jboolean>(
			"forceUriPermissions"
		);
	}
	jboolean ProviderInfo::grantUriPermissions()
	{
		return __thiz.getField<jboolean>(
			"grantUriPermissions"
		);
	}
	jint ProviderInfo::initOrder()
	{
		return __thiz.getField<jint>(
			"initOrder"
		);
	}
	jboolean ProviderInfo::isSyncable()
	{
		return __thiz.getField<jboolean>(
			"isSyncable"
		);
	}
	jboolean ProviderInfo::multiprocess()
	{
		return __thiz.getField<jboolean>(
			"multiprocess"
		);
	}
	jarray ProviderInfo::pathPermissions()
	{
		return __thiz.getObjectField(
			"pathPermissions",
			"[Landroid/content/pm/PathPermission;"
		).object<jarray>();
	}
	jstring ProviderInfo::readPermission()
	{
		return __thiz.getObjectField(
			"readPermission",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jarray ProviderInfo::uriPermissionPatterns()
	{
		return __thiz.getObjectField(
			"uriPermissionPatterns",
			"[Landroid/os/PatternMatcher;"
		).object<jarray>();
	}
	jstring ProviderInfo::writePermission()
	{
		return __thiz.getObjectField(
			"writePermission",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ProviderInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ProviderInfo",
			"()V");
	}
	void ProviderInfo::__constructor(__jni_impl::android::content::pm::ProviderInfo arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ProviderInfo",
			"(Landroid/content/pm/ProviderInfo;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jstring ProviderInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ProviderInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ProviderInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ProviderInfo::dump(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::content::pm

namespace android::content::pm
{
	class ProviderInfo : public __jni_impl::android::content::pm::ProviderInfo
	{
	public:
		ProviderInfo(QAndroidJniObject obj) { __thiz = obj; }
		ProviderInfo()
		{
			__constructor();
		}
		ProviderInfo(__jni_impl::android::content::pm::ProviderInfo arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_PROVIDERINFO

