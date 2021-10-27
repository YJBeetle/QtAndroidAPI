#include "../../os/Parcel.hpp"
#include "./FeatureInfo.hpp"

namespace android::content::pm
{
	// Fields
	QAndroidJniObject FeatureInfo::CREATOR()
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
		return __thiz.getField<jint>(
			"flags"
		);
	}
	jstring FeatureInfo::name()
	{
		return __thiz.getObjectField(
			"name",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint FeatureInfo::reqGlEsVersion()
	{
		return __thiz.getField<jint>(
			"reqGlEsVersion"
		);
	}
	jint FeatureInfo::version()
	{
		return __thiz.getField<jint>(
			"version"
		);
	}
	
	FeatureInfo::FeatureInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FeatureInfo::FeatureInfo()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.FeatureInfo",
			"()V"
		);
	}
	FeatureInfo::FeatureInfo(android::content::pm::FeatureInfo &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.FeatureInfo",
			"(Landroid/content/pm/FeatureInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint FeatureInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring FeatureInfo::getGlEsVersion()
	{
		return __thiz.callObjectMethod(
			"getGlEsVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FeatureInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void FeatureInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::pm

