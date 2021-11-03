#include "../../content/res/Configuration.hpp"
#include "../../os/Parcel.hpp"
#include "./ConfigurationStats.hpp"

namespace android::app::usage
{
	// Fields
	JObject ConfigurationStats::CREATOR()
	{
		return getStaticObjectField(
			"android.app.usage.ConfigurationStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	ConfigurationStats::ConfigurationStats(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ConfigurationStats::ConfigurationStats(android::app::usage::ConfigurationStats &arg0)
		: JObject(
			"android.app.usage.ConfigurationStats",
			"(Landroid/app/usage/ConfigurationStats;)V",
			arg0.object()
		) {}
	
	// Methods
	jint ConfigurationStats::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint ConfigurationStats::getActivationCount() const
	{
		return callMethod<jint>(
			"getActivationCount",
			"()I"
		);
	}
	android::content::res::Configuration ConfigurationStats::getConfiguration() const
	{
		return callObjectMethod(
			"getConfiguration",
			"()Landroid/content/res/Configuration;"
		);
	}
	jlong ConfigurationStats::getFirstTimeStamp() const
	{
		return callMethod<jlong>(
			"getFirstTimeStamp",
			"()J"
		);
	}
	jlong ConfigurationStats::getLastTimeActive() const
	{
		return callMethod<jlong>(
			"getLastTimeActive",
			"()J"
		);
	}
	jlong ConfigurationStats::getLastTimeStamp() const
	{
		return callMethod<jlong>(
			"getLastTimeStamp",
			"()J"
		);
	}
	jlong ConfigurationStats::getTotalTimeActive() const
	{
		return callMethod<jlong>(
			"getTotalTimeActive",
			"()J"
		);
	}
	void ConfigurationStats::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::usage

