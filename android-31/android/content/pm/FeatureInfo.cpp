#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./FeatureInfo.hpp"

namespace android::content::pm
{
	// Fields
	JObject FeatureInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.FeatureInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint FeatureInfo::FLAG_REQUIRED()
	{
		return getStaticField<jint>(
			"android.content.pm.FeatureInfo",
			"FLAG_REQUIRED"
		);
	}
	jint FeatureInfo::GL_ES_VERSION_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.pm.FeatureInfo",
			"GL_ES_VERSION_UNDEFINED"
		);
	}
	jint FeatureInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	JString FeatureInfo::name()
	{
		return getObjectField(
			"name",
			"Ljava/lang/String;"
		);
	}
	jint FeatureInfo::reqGlEsVersion()
	{
		return getField<jint>(
			"reqGlEsVersion"
		);
	}
	jint FeatureInfo::version()
	{
		return getField<jint>(
			"version"
		);
	}
	
	// QAndroidJniObject forward
	FeatureInfo::FeatureInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	FeatureInfo::FeatureInfo()
		: JObject(
			"android.content.pm.FeatureInfo",
			"()V"
		) {}
	FeatureInfo::FeatureInfo(android::content::pm::FeatureInfo &arg0)
		: JObject(
			"android.content.pm.FeatureInfo",
			"(Landroid/content/pm/FeatureInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	jint FeatureInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString FeatureInfo::getGlEsVersion()
	{
		return callObjectMethod(
			"getGlEsVersion",
			"()Ljava/lang/String;"
		);
	}
	JString FeatureInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void FeatureInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

