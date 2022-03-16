#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
namespace java::lang
{
	class Integer;
}
class JString;
class JThrowable;

namespace android::content
{
	class ContentProviderResult : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		java::lang::Integer count();
		JThrowable exception();
		android::os::Bundle extras();
		android::net::Uri uri();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentProviderResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentProviderResult(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ContentProviderResult(android::net::Uri arg0);
		ContentProviderResult(android::os::Bundle arg0);
		ContentProviderResult(android::os::Parcel arg0);
		ContentProviderResult(jint arg0);
		ContentProviderResult(JThrowable arg0);
		
		// Methods
		jint describeContents() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content

