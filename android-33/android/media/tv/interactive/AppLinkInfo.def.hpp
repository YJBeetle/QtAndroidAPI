#pragma once

#include "../../../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media::tv::interactive
{
	class AppLinkInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AppLinkInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AppLinkInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		AppLinkInfo(JString arg0, JString arg1, JString arg2);
		
		// Methods
		jint describeContents() const;
		android::content::ComponentName getComponentName() const;
		android::net::Uri getUri() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv::interactive

