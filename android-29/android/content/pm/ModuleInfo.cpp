#include "../../os/Parcel.hpp"
#include "./ModuleInfo.hpp"

namespace android::content::pm
{
	// Fields
	JObject ModuleInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.ModuleInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	ModuleInfo::ModuleInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ModuleInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ModuleInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ModuleInfo::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring ModuleInfo::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ModuleInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ModuleInfo::isHidden()
	{
		return callMethod<jboolean>(
			"isHidden",
			"()Z"
		);
	}
	jstring ModuleInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ModuleInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

