#include "../../os/Parcel.hpp"
#include "./ConfigurationInfo.hpp"

namespace android::content::pm
{
	// Fields
	JObject ConfigurationInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.ConfigurationInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ConfigurationInfo::GL_ES_VERSION_UNDEFINED()
	{
		return getStaticField<jint>(
			"android.content.pm.ConfigurationInfo",
			"GL_ES_VERSION_UNDEFINED"
		);
	}
	jint ConfigurationInfo::INPUT_FEATURE_FIVE_WAY_NAV()
	{
		return getStaticField<jint>(
			"android.content.pm.ConfigurationInfo",
			"INPUT_FEATURE_FIVE_WAY_NAV"
		);
	}
	jint ConfigurationInfo::INPUT_FEATURE_HARD_KEYBOARD()
	{
		return getStaticField<jint>(
			"android.content.pm.ConfigurationInfo",
			"INPUT_FEATURE_HARD_KEYBOARD"
		);
	}
	jint ConfigurationInfo::reqGlEsVersion()
	{
		return getField<jint>(
			"reqGlEsVersion"
		);
	}
	jint ConfigurationInfo::reqInputFeatures()
	{
		return getField<jint>(
			"reqInputFeatures"
		);
	}
	jint ConfigurationInfo::reqKeyboardType()
	{
		return getField<jint>(
			"reqKeyboardType"
		);
	}
	jint ConfigurationInfo::reqNavigation()
	{
		return getField<jint>(
			"reqNavigation"
		);
	}
	jint ConfigurationInfo::reqTouchScreen()
	{
		return getField<jint>(
			"reqTouchScreen"
		);
	}
	
	// QAndroidJniObject forward
	ConfigurationInfo::ConfigurationInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ConfigurationInfo::ConfigurationInfo()
		: JObject(
			"android.content.pm.ConfigurationInfo",
			"()V"
		) {}
	ConfigurationInfo::ConfigurationInfo(android::content::pm::ConfigurationInfo &arg0)
		: JObject(
			"android.content.pm.ConfigurationInfo",
			"(Landroid/content/pm/ConfigurationInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	jint ConfigurationInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring ConfigurationInfo::getGlEsVersion()
	{
		return callObjectMethod(
			"getGlEsVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConfigurationInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ConfigurationInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

