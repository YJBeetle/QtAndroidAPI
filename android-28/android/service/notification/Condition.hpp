#pragma once

#include "../../../JObject.hpp"

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
class JObject;
class JString;

namespace android::service::notification
{
	class Condition : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_RELEVANT_ALWAYS();
		static jint FLAG_RELEVANT_NOW();
		static JString SCHEME();
		static jint STATE_ERROR();
		static jint STATE_FALSE();
		static jint STATE_TRUE();
		static jint STATE_UNKNOWN();
		jint flags();
		jint icon();
		android::net::Uri id();
		JString line1();
		JString line2();
		jint state();
		JString summary();
		
		// QJniObject forward
		template<typename ...Ts> explicit Condition(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Condition(QJniObject obj);
		
		// Constructors
		Condition(android::os::Parcel arg0);
		Condition(android::net::Uri arg0, JString arg1, jint arg2);
		Condition(android::net::Uri arg0, JString arg1, JString arg2, JString arg3, jint arg4, jint arg5, jint arg6);
		
		// Methods
		static jboolean isValidId(android::net::Uri arg0, JString arg1);
		static android::net::Uri_Builder newId(android::content::Context arg0);
		static JString relevanceToString(jint arg0);
		static JString stateToString(jint arg0);
		android::service::notification::Condition copy() const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::notification

