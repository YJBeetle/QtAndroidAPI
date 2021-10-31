#include "../../os/Parcel.hpp"
#include "./PackageStats.hpp"

namespace android::content::pm
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
	
	PackageStats::PackageStats(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PackageStats::PackageStats(android::content::pm::PackageStats &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageStats",
			"(Landroid/content/pm/PackageStats;)V",
			arg0.__jniObject().object()
		);
	}
	PackageStats::PackageStats(android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageStats",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	PackageStats::PackageStats(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageStats",
			"(Ljava/lang/String;)V",
			arg0
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
	void PackageStats::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::pm

