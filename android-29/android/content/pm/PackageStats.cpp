#include "../../os/Parcel.hpp"
#include "./PackageStats.hpp"

namespace android::content::pm
{
	// Fields
	__JniBaseClass PackageStats::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jlong PackageStats::cacheSize()
	{
		return getField<jlong>(
			"cacheSize"
		);
	}
	jlong PackageStats::codeSize()
	{
		return getField<jlong>(
			"codeSize"
		);
	}
	jlong PackageStats::dataSize()
	{
		return getField<jlong>(
			"dataSize"
		);
	}
	jlong PackageStats::externalCacheSize()
	{
		return getField<jlong>(
			"externalCacheSize"
		);
	}
	jlong PackageStats::externalCodeSize()
	{
		return getField<jlong>(
			"externalCodeSize"
		);
	}
	jlong PackageStats::externalDataSize()
	{
		return getField<jlong>(
			"externalDataSize"
		);
	}
	jlong PackageStats::externalMediaSize()
	{
		return getField<jlong>(
			"externalMediaSize"
		);
	}
	jlong PackageStats::externalObbSize()
	{
		return getField<jlong>(
			"externalObbSize"
		);
	}
	jstring PackageStats::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	PackageStats::PackageStats(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PackageStats::PackageStats(android::content::pm::PackageStats &arg0)
		: __JniBaseClass(
			"android.content.pm.PackageStats",
			"(Landroid/content/pm/PackageStats;)V",
			arg0.object()
		) {}
	PackageStats::PackageStats(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.content.pm.PackageStats",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	PackageStats::PackageStats(jstring arg0)
		: __JniBaseClass(
			"android.content.pm.PackageStats",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jint PackageStats::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PackageStats::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PackageStats::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PackageStats::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PackageStats::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

