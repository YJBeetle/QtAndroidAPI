#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}
namespace android::net
{
	class Uri_Builder;
}
namespace android::os
{
	class Parcel;
}

namespace android::service::notification
{
	class Condition : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_RELEVANT_ALWAYS();
		static jint FLAG_RELEVANT_NOW();
		static jstring SCHEME();
		static jint STATE_ERROR();
		static jint STATE_FALSE();
		static jint STATE_TRUE();
		static jint STATE_UNKNOWN();
		jint flags();
		jint icon();
		QAndroidJniObject id();
		jstring line1();
		jstring line2();
		jint state();
		jstring summary();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Condition(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Condition(QAndroidJniObject obj);
		
		// Constructors
		Condition(android::os::Parcel arg0);
		Condition(android::net::Uri arg0, jstring arg1, jint arg2);
		Condition(android::net::Uri arg0, jstring arg1, jstring arg2, jstring arg3, jint arg4, jint arg5, jint arg6);
		
		// Methods
		static jboolean isValidId(android::net::Uri arg0, jstring arg1);
		static QAndroidJniObject newId(android::content::Context arg0);
		static jstring relevanceToString(jint arg0);
		static jstring stateToString(jint arg0);
		QAndroidJniObject copy();
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::notification

