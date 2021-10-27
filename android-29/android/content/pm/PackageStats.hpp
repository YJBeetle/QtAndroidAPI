#pragma once

#ifndef ANDROID_CONTENT_PM_PACKAGESTATS
#define ANDROID_CONTENT_PM_PACKAGESTATS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content::pm
{
	class PackageStats : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jlong cacheSize();
		jlong codeSize();
		jlong dataSize();
		jlong externalCacheSize();
		jlong externalCodeSize();
		jlong externalDataSize();
		jlong externalMediaSize();
		jlong externalObbSize();
		jstring packageName();
		
		// Constructors
		void __constructor(__jni_impl::android::content::pm::PackageStats arg0);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content::pm

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::content::pm
{
	// Fields
	QAndroidJniObject PackageStats::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jlong PackageStats::cacheSize()
	{
		return __thiz.getField<jlong>(
			"cacheSize"
		);
	}
	jlong PackageStats::codeSize()
	{
		return __thiz.getField<jlong>(
			"codeSize"
		);
	}
	jlong PackageStats::dataSize()
	{
		return __thiz.getField<jlong>(
			"dataSize"
		);
	}
	jlong PackageStats::externalCacheSize()
	{
		return __thiz.getField<jlong>(
			"externalCacheSize"
		);
	}
	jlong PackageStats::externalCodeSize()
	{
		return __thiz.getField<jlong>(
			"externalCodeSize"
		);
	}
	jlong PackageStats::externalDataSize()
	{
		return __thiz.getField<jlong>(
			"externalDataSize"
		);
	}
	jlong PackageStats::externalMediaSize()
	{
		return __thiz.getField<jlong>(
			"externalMediaSize"
		);
	}
	jlong PackageStats::externalObbSize()
	{
		return __thiz.getField<jlong>(
			"externalObbSize"
		);
	}
	jstring PackageStats::packageName()
	{
		return __thiz.getObjectField(
			"packageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void PackageStats::__constructor(__jni_impl::android::content::pm::PackageStats arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageStats",
			"(Landroid/content/pm/PackageStats;)V",
			arg0.__jniObject().object()
		);
	}
	void PackageStats::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageStats",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void PackageStats::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageStats",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PackageStats::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageStats",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jint PackageStats::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PackageStats::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PackageStats::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PackageStats::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PackageStats::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class PackageStats : public __jni_impl::android::content::pm::PackageStats
	{
	public:
		PackageStats(QAndroidJniObject obj) { __thiz = obj; }
		PackageStats(__jni_impl::android::content::pm::PackageStats arg0)
		{
			__constructor(
				arg0);
		}
		PackageStats(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		PackageStats(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content::pm

#endif // ANDROID_CONTENT_PM_PACKAGESTATS

