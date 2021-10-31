#include "../../content/res/Configuration.hpp"
#include "../../os/Parcel.hpp"
#include "./ConfigurationStats.hpp"

namespace android::app::usage
{
	// Fields
	__JniBaseClass ConfigurationStats::CREATOR()
	{
		return getStaticObjectField(
			"android.app.usage.ConfigurationStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ConfigurationStats::ConfigurationStats(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ConfigurationStats::ConfigurationStats(android::app::usage::ConfigurationStats &arg0)
		: __JniBaseClass(
			"android.app.usage.ConfigurationStats",
			"(Landroid/app/usage/ConfigurationStats;)V",
			arg0.object()
		) {}
	
	// Methods
	jint ConfigurationStats::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint ConfigurationStats::getActivationCount()
	{
		return callMethod<jint>(
			"getActivationCount",
			"()I"
		);
	}
	android::content::res::Configuration ConfigurationStats::getConfiguration()
	{
		return callObjectMethod(
			"getConfiguration",
			"()Landroid/content/res/Configuration;"
		);
	}
	jlong ConfigurationStats::getFirstTimeStamp()
	{
		return callMethod<jlong>(
			"getFirstTimeStamp",
			"()J"
		);
	}
	jlong ConfigurationStats::getLastTimeActive()
	{
		return callMethod<jlong>(
			"getLastTimeActive",
			"()J"
		);
	}
	jlong ConfigurationStats::getLastTimeStamp()
	{
		return callMethod<jlong>(
			"getLastTimeStamp",
			"()J"
		);
	}
	jlong ConfigurationStats::getTotalTimeActive()
	{
		return callMethod<jlong>(
			"getTotalTimeActive",
			"()J"
		);
	}
	void ConfigurationStats::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::usage

