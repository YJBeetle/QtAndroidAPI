#include "../../content/res/Configuration.hpp"
#include "../../os/Parcel.hpp"
#include "./ConfigurationStats.hpp"

namespace android::app::usage
{
	// Fields
	QAndroidJniObject ConfigurationStats::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.usage.ConfigurationStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	ConfigurationStats::ConfigurationStats(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConfigurationStats::ConfigurationStats(android::app::usage::ConfigurationStats &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.usage.ConfigurationStats",
			"(Landroid/app/usage/ConfigurationStats;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint ConfigurationStats::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint ConfigurationStats::getActivationCount()
	{
		return __thiz.callMethod<jint>(
			"getActivationCount",
			"()I"
		);
	}
	QAndroidJniObject ConfigurationStats::getConfiguration()
	{
		return __thiz.callObjectMethod(
			"getConfiguration",
			"()Landroid/content/res/Configuration;"
		);
	}
	jlong ConfigurationStats::getFirstTimeStamp()
	{
		return __thiz.callMethod<jlong>(
			"getFirstTimeStamp",
			"()J"
		);
	}
	jlong ConfigurationStats::getLastTimeActive()
	{
		return __thiz.callMethod<jlong>(
			"getLastTimeActive",
			"()J"
		);
	}
	jlong ConfigurationStats::getLastTimeStamp()
	{
		return __thiz.callMethod<jlong>(
			"getLastTimeStamp",
			"()J"
		);
	}
	jlong ConfigurationStats::getTotalTimeActive()
	{
		return __thiz.callMethod<jlong>(
			"getTotalTimeActive",
			"()J"
		);
	}
	void ConfigurationStats::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app::usage

