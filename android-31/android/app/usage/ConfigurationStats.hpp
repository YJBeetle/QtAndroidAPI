#pragma once

#include "../../../JObject.hpp"

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
	class ConfigurationStats : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ConfigurationStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConfigurationStats(QJniObject obj);
		
		// Constructors
		ConfigurationStats(android::app::usage::ConfigurationStats &arg0);
		
		// Methods
		jint describeContents();
		jint getActivationCount();
		android::content::res::Configuration getConfiguration();
		jlong getFirstTimeStamp();
		jlong getLastTimeActive();
		jlong getLastTimeStamp();
		jlong getTotalTimeActive();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app::usage

