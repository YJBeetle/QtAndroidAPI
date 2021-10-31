#include "./VersionedPackage.hpp"
#include "../../os/Parcel.hpp"
#include "./SharedLibraryInfo.hpp"

namespace android::content::pm
{
	// Fields
	__JniBaseClass SharedLibraryInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.SharedLibraryInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SharedLibraryInfo::TYPE_BUILTIN()
	{
		return getStaticField<jint>(
			"android.content.pm.SharedLibraryInfo",
			"TYPE_BUILTIN"
		);
	}
	jint SharedLibraryInfo::TYPE_DYNAMIC()
	{
		return getStaticField<jint>(
			"android.content.pm.SharedLibraryInfo",
			"TYPE_DYNAMIC"
		);
	}
	jint SharedLibraryInfo::TYPE_STATIC()
	{
		return getStaticField<jint>(
			"android.content.pm.SharedLibraryInfo",
			"TYPE_STATIC"
		);
	}
	jint SharedLibraryInfo::VERSION_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.pm.SharedLibraryInfo",
			"VERSION_UNDEFINED"
		);
	}
	
	// QJniObject forward
	SharedLibraryInfo::SharedLibraryInfo(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint SharedLibraryInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::content::pm::VersionedPackage SharedLibraryInfo::getDeclaringPackage()
	{
		return callObjectMethod(
			"getDeclaringPackage",
			"()Landroid/content/pm/VersionedPackage;"
		);
	}
	__JniBaseClass SharedLibraryInfo::getDependentPackages()
	{
		return callObjectMethod(
			"getDependentPackages",
			"()Ljava/util/List;"
		);
	}
	jlong SharedLibraryInfo::getLongVersion()
	{
		return callMethod<jlong>(
			"getLongVersion",
			"()J"
		);
	}
	jstring SharedLibraryInfo::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SharedLibraryInfo::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jint SharedLibraryInfo::getVersion()
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	jstring SharedLibraryInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SharedLibraryInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

