#include "../../os/Parcel.hpp"
#include "./FeatureGroupInfo.hpp"

namespace android::content::pm
{
	// Fields
	QAndroidJniObject FeatureGroupInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.FeatureGroupInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jarray FeatureGroupInfo::features()
	{
		return __thiz.getObjectField(
			"features",
			"[Landroid/content/pm/FeatureInfo;"
		).object<jarray>();
	}
	
	FeatureGroupInfo::FeatureGroupInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FeatureGroupInfo::FeatureGroupInfo()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.FeatureGroupInfo",
			"()V"
		);
	}
	FeatureGroupInfo::FeatureGroupInfo(android::content::pm::FeatureGroupInfo &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.FeatureGroupInfo",
			"(Landroid/content/pm/FeatureGroupInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint FeatureGroupInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void FeatureGroupInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::pm

