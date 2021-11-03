#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
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

namespace android::content
{
	class ContentProviderResult : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		java::lang::Integer count();
		android::net::Uri uri();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentProviderResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentProviderResult(QAndroidJniObject obj);
		
		// Constructors
		ContentProviderResult(android::net::Uri arg0);
		ContentProviderResult(android::os::Parcel arg0);
		ContentProviderResult(jint arg0);
		
		// Methods
		jint describeContents() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content

