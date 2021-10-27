#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content::res
{
	class Configuration;
}
namespace android::os
{
	class Parcel;
}

namespace android::app::usage
{
	class ConfigurationStats : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		ConfigurationStats(QAndroidJniObject obj);
		// Constructors
		ConfigurationStats(android::app::usage::ConfigurationStats &arg0);
		ConfigurationStats() = default;
		
		// Methods
		jint describeContents();
		jint getActivationCount();
		QAndroidJniObject getConfiguration();
		jlong getFirstTimeStamp();
		jlong getLastTimeActive();
		jlong getLastTimeStamp();
		jlong getTotalTimeActive();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::usage

