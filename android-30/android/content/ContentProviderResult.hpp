#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::content
{
	class ContentProviderResult : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		java::lang::Integer count();
		jthrowable exception();
		android::os::Bundle extras();
		android::net::Uri uri();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentProviderResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContentProviderResult(QJniObject obj);
		
		// Constructors
		ContentProviderResult(android::net::Uri arg0);
		ContentProviderResult(android::os::Bundle arg0);
		ContentProviderResult(android::os::Parcel arg0);
		ContentProviderResult(jint arg0);
		ContentProviderResult(jthrowable arg0);
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

