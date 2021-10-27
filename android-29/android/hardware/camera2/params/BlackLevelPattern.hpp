#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::hardware::camera2::params
{
	class BlackLevelPattern : public __JniBaseClass
	{
	public:
		// Fields
		static jint COUNT();
		
		BlackLevelPattern(QAndroidJniObject obj);
		// Constructors
		BlackLevelPattern() = default;
		
		// Methods
		void copyTo(jintArray arg0, jint arg1);
		jboolean equals(jobject arg0);
		jint getOffsetForIndex(jint arg0, jint arg1);
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2::params

