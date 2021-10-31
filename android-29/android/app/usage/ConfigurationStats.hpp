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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConfigurationStats(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ConfigurationStats(QAndroidJniObject obj);
		
		// Constructors
		ConfigurationStats(android::app::usage::ConfigurationStats &arg0);
		
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

