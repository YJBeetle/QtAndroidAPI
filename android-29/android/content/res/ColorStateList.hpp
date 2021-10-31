#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content::res
{
	class Resources;
}
namespace android::content::res
{
	class Resources_Theme;
}
namespace android::os
{
	class Parcel;
}

namespace android::content::res
{
	class ColorStateList : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		ColorStateList(QAndroidJniObject obj);
		// Constructors
		ColorStateList(jarray arg0, jintArray arg1);
		ColorStateList() = default;
		
		// Methods
		static QAndroidJniObject createFromXml(android::content::res::Resources arg0, __JniBaseClass arg1);
		static QAndroidJniObject createFromXml(android::content::res::Resources arg0, __JniBaseClass arg1, android::content::res::Resources_Theme arg2);
		static QAndroidJniObject valueOf(jint arg0);
		jint describeContents();
		jint getChangingConfigurations();
		jint getColorForState(jintArray arg0, jint arg1);
		jint getDefaultColor();
		jboolean isOpaque();
		jboolean isStateful();
		jstring toString();
		QAndroidJniObject withAlpha(jint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::res

