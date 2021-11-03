#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./PackageStats.hpp"

namespace android::content::pm
{
	// Fields
	JObject PackageStats::CREATOR()
	{
		return getStaticObjectField(
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
	JString PackageStats::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	PackageStats::PackageStats(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PackageStats::PackageStats(android::content::pm::PackageStats &arg0)
		: JObject(
			"android.content.pm.PackageStats",
			"(Landroid/content/pm/PackageStats;)V",
			arg0.object()
		) {}
	PackageStats::PackageStats(android::os::Parcel arg0)
		: JObject(
			"android.content.pm.PackageStats",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	PackageStats::PackageStats(JString arg0)
		: JObject(
			"android.content.pm.PackageStats",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jint PackageStats::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PackageStats::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint PackageStats::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString PackageStats::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PackageStats::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

