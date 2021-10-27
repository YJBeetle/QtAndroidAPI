#include "../../os/Parcel.hpp"
#include "./ConfigurationInfo.hpp"

namespace android::content::pm
{
	// Fields
	QAndroidJniObject ConfigurationInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.ConfigurationInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ConfigurationInfo::GL_ES_VERSION_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ConfigurationInfo",
			"GL_ES_VERSION_UNDEFINED"
		);
	}
	jint ConfigurationInfo::INPUT_FEATURE_FIVE_WAY_NAV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ConfigurationInfo",
			"INPUT_FEATURE_FIVE_WAY_NAV"
		);
	}
	jint ConfigurationInfo::INPUT_FEATURE_HARD_KEYBOARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.ConfigurationInfo",
			"INPUT_FEATURE_HARD_KEYBOARD"
		);
	}
	jint ConfigurationInfo::reqGlEsVersion()
	{
		return __thiz.getField<jint>(
			"reqGlEsVersion"
		);
	}
	jint ConfigurationInfo::reqInputFeatures()
	{
		return __thiz.getField<jint>(
			"reqInputFeatures"
		);
	}
	jint ConfigurationInfo::reqKeyboardType()
	{
		return __thiz.getField<jint>(
			"reqKeyboardType"
		);
	}
	jint ConfigurationInfo::reqNavigation()
	{
		return __thiz.getField<jint>(
			"reqNavigation"
		);
	}
	jint ConfigurationInfo::reqTouchScreen()
	{
		return __thiz.getField<jint>(
			"reqTouchScreen"
		);
	}
	
	ConfigurationInfo::ConfigurationInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConfigurationInfo::ConfigurationInfo()
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ConfigurationInfo",
			"()V"
		);
	}
	ConfigurationInfo::ConfigurationInfo(android::content::pm::ConfigurationInfo &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.ConfigurationInfo",
			"(Landroid/content/pm/ConfigurationInfo;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint ConfigurationInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring ConfigurationInfo::getGlEsVersion()
	{
		return __thiz.callObjectMethod(
			"getGlEsVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConfigurationInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ConfigurationInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::pm

