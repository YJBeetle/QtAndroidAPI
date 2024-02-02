#pragma once

#include "../../../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content::pm
{
	class ServiceInfo;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media::tv::interactive
{
	class TvInteractiveAppServiceInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint INTERACTIVE_APP_TYPE_ATSC();
		static jint INTERACTIVE_APP_TYPE_GINGA();
		static jint INTERACTIVE_APP_TYPE_HBBTV();
		static jint INTERACTIVE_APP_TYPE_OTHER();
		static jint INTERACTIVE_APP_TYPE_TARGETED_AD();
		
		// QJniObject forward
		template<typename ...Ts> explicit TvInteractiveAppServiceInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvInteractiveAppServiceInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TvInteractiveAppServiceInfo(android::content::Context arg0, android::content::ComponentName arg1);
		
		// Methods
		jint describeContents() const;
		JObject getCustomSupportedTypes() const;
		JString getId() const;
		android::content::pm::ServiceInfo getServiceInfo() const;
		jint getSupportedTypes() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv::interactive

