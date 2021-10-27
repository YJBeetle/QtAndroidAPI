#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::os
{
	class Parcel;
}

namespace android::content
{
	class Intent_ShortcutIconResource : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jstring packageName();
		jstring resourceName();
		
		Intent_ShortcutIconResource(QAndroidJniObject obj);
		// Constructors
		Intent_ShortcutIconResource();
		
		// Methods
		static QAndroidJniObject fromContext(android::content::Context arg0, jint arg1);
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

