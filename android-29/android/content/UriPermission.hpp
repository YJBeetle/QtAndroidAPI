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

namespace android::content
{
	class UriPermission : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jlong INVALID_TIME();
		
		UriPermission(QAndroidJniObject obj);
		// Constructors
		UriPermission() = default;
		
		// Methods
		jint describeContents();
		jlong getPersistedTime();
		QAndroidJniObject getUri();
		jboolean isReadPermission();
		jboolean isWritePermission();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

