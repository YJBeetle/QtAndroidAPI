#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::content
{
	class ContentProviderResult : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		QAndroidJniObject count();
		QAndroidJniObject uri();
		
		ContentProviderResult(QAndroidJniObject obj);
		// Constructors
		ContentProviderResult(android::net::Uri arg0);
		ContentProviderResult(android::os::Parcel arg0);
		ContentProviderResult(jint arg0);
		ContentProviderResult() = default;
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

