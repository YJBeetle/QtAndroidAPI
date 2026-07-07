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

namespace android::media::tv::ad
{
	class TvAdServiceInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TvAdServiceInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvAdServiceInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TvAdServiceInfo(android::content::Context arg0, android::content::ComponentName arg1);
		
		// Methods
		jint describeContents() const;
		JString getId() const;
		android::content::pm::ServiceInfo getServiceInfo() const;
		JObject getSupportedTypes() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv::ad

