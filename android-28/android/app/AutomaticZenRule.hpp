#pragma once

#include "../../JObject.hpp"

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
class JObject;
class JString;

namespace android::app
{
	class AutomaticZenRule : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AutomaticZenRule(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AutomaticZenRule(QAndroidJniObject obj);
		
		// Constructors
		AutomaticZenRule(android::os::Parcel arg0);
		AutomaticZenRule(JString arg0, android::content::ComponentName arg1, android::net::Uri arg2, jint arg3, jboolean arg4);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		android::net::Uri getConditionId();
		jlong getCreationTime();
		jint getInterruptionFilter();
		JString getName();
		android::content::ComponentName getOwner();
		jint hashCode();
		jboolean isEnabled();
		void setConditionId(android::net::Uri arg0);
		void setEnabled(jboolean arg0);
		void setInterruptionFilter(jint arg0);
		void setName(JString arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

