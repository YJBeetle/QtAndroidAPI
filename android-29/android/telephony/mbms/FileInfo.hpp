#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}

namespace android::telephony::mbms
{
	class FileInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		FileInfo(QAndroidJniObject obj);
		// Constructors
		FileInfo() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getMimeType();
		QAndroidJniObject getUri();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::mbms

