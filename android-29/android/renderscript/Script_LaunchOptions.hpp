#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Script_LaunchOptions : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Script_LaunchOptions(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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

