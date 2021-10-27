#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Script_LaunchOptions : public __JniBaseClass
	{
	public:
		// Fields
		
		Script_LaunchOptions(QAndroidJniObject obj);
		// Constructors
		Script_LaunchOptions();
		
		// Methods
		jint getXEnd();
		jint getXStart();
		jint getYEnd();
		jint getYStart();
		jint getZEnd();
		jint getZStart();
		QAndroidJniObject setX(jint arg0, jint arg1);
		QAndroidJniObject setY(jint arg0, jint arg1);
		QAndroidJniObject setZ(jint arg0, jint arg1);
	};
} // namespace android::renderscript

