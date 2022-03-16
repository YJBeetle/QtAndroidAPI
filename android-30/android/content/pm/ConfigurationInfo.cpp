#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
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
	jint ConfigurationInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString ConfigurationInfo::getGlEsVersion() const
	{
		return callObjectMethod(
			"getGlEsVersion",
			"()Ljava/lang/String;"
		);
	}
	JString ConfigurationInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ConfigurationInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

