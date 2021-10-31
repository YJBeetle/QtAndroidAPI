#include "../../os/Parcel.hpp"
#include "./FeatureInfo.hpp"

namespace android::content::pm
{
	// Fields
	__JniBaseClass FeatureInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.FeatureInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint FeatureInfo::FLAG_REQUIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.FeatureInfo",
			"FLAG_REQUIRED"
		);
	}
	jint FeatureInfo::GL_ES_VERSION_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
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
	jstring FeatureInfo::name()
	{
		return getObjectField(
			"name",
			"Ljava/lang/String;"
		).object<jstring>();
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
	FeatureInfo::FeatureInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	FeatureInfo::FeatureInfo()
		: __JniBaseClass(
			"android.content.pm.FeatureInfo",
			"()V"
		) {}
	FeatureInfo::FeatureInfo(android::content::pm::FeatureInfo &arg0)
		: __JniBaseClass(
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
	jstring FeatureInfo::getGlEsVersion()
	{
		return callObjectMethod(
			"getGlEsVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FeatureInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

