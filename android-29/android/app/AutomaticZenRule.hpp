#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::app
{
	class AutomaticZenRule : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		AutomaticZenRule(QAndroidJniObject obj);
		// Constructors
		AutomaticZenRule(android::os::Parcel &arg0);
		AutomaticZenRule(jstring &arg0, android::content::ComponentName &arg1, android::net::Uri &arg2, jint &arg3, jboolean &arg4);
		AutomaticZenRule(const QString &arg0, android::content::ComponentName &arg1, android::net::Uri &arg2, jint &arg3, jboolean &arg4);
		AutomaticZenRule(jstring &arg0, android::content::ComponentName &arg1, android::content::ComponentName &arg2, android::net::Uri &arg3, android::service::notification::ZenPolicy &arg4, jint &arg5, jboolean &arg6);
		AutomaticZenRule(const QString &arg0, android::content::ComponentName &arg1, android::content::ComponentName &arg2, android::net::Uri &arg3, android::service::notification::ZenPolicy &arg4, jint &arg5, jboolean &arg6);
		AutomaticZenRule() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getConditionId();
		QAndroidJniObject getConfigurationActivity();
		jlong getCreationTime();
		jint getInterruptionFilter();
		jstring getName();
		QAndroidJniObject getOwner();
		QAndroidJniObject getZenPolicy();
		jint hashCode();
		jboolean isEnabled();
		void setConditionId(android::net::Uri arg0);
		void setConfigurationActivity(android::content::ComponentName arg0);
		void setEnabled(jboolean arg0);
		void setInterruptionFilter(jint arg0);
		void setName(jstring arg0);
		void setName(const QString &arg0);
		void setZenPolicy(android::service::notification::ZenPolicy arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

