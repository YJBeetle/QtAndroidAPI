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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConfigurationStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ConfigurationStats(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ConfigurationStats(android::app::usage::ConfigurationStats &arg0);
		
		// Methods
		jint describeContents() const;
		jint getActivationCount() const;
		android::content::res::Configuration getConfiguration() const;
		jlong getFirstTimeStamp() const;
		jlong getLastTimeActive() const;
		jlong getLastTimeStamp() const;
		jlong getTotalTimeActive() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::usage

