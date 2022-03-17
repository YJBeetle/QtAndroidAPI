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
		AutomaticZenRule(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		AutomaticZenRule(android::os::Parcel arg0);
		AutomaticZenRule(JString arg0, android::content::ComponentName arg1, android::net::Uri arg2, jint arg3, jboolean arg4);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::net::Uri getConditionId() const;
		jlong getCreationTime() const;
		jint getInterruptionFilter() const;
		JString getName() const;
		android::content::ComponentName getOwner() const;
		jint hashCode() const;
		jboolean isEnabled() const;
		void setConditionId(android::net::Uri arg0) const;
		void setEnabled(jboolean arg0) const;
		void setInterruptionFilter(jint arg0) const;
		void setName(JString arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

