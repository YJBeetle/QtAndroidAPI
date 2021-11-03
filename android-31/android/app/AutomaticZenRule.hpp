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
namespace android::service::notification
{
	class ZenPolicy;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit AutomaticZenRule(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AutomaticZenRule(QJniObject obj);
		
		// Constructors
		AutomaticZenRule(android::os::Parcel arg0);
		AutomaticZenRule(JString arg0, android::content::ComponentName arg1, android::net::Uri arg2, jint arg3, jboolean arg4);
		AutomaticZenRule(JString arg0, android::content::ComponentName arg1, android::content::ComponentName arg2, android::net::Uri arg3, android::service::notification::ZenPolicy arg4, jint arg5, jboolean arg6);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::net::Uri getConditionId() const;
		android::content::ComponentName getConfigurationActivity() const;
		jlong getCreationTime() const;
		jint getInterruptionFilter() const;
		JString getName() const;
		android::content::ComponentName getOwner() const;
		android::service::notification::ZenPolicy getZenPolicy() const;
		jint hashCode() const;
		jboolean isEnabled() const;
		void setConditionId(android::net::Uri arg0) const;
		void setConfigurationActivity(android::content::ComponentName arg0) const;
		void setEnabled(jboolean arg0) const;
		void setInterruptionFilter(jint arg0) const;
		void setName(JString arg0) const;
		void setZenPolicy(android::service::notification::ZenPolicy arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

