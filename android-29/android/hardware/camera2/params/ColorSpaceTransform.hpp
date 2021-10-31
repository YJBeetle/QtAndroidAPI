#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::util
{
	class Rational;
}

namespace android::hardware::camera2::params
{
	class ColorSpaceTransform : public __JniBaseClass
	{
	public:
		// Fields
		
		ColorSpaceTransform(QAndroidJniObject obj);
		// Constructors
		ColorSpaceTransform(jintArray arg0);
		ColorSpaceTransform(jarray arg0);
		ColorSpaceTransform() = default;
		
		// Methods
		void copyElements(jintArray arg0, jint arg1);
		void copyElements(jarray arg0, jint arg1);
		jboolean equals(jobject arg0);
		QAndroidJniObject getElement(jint arg0, jint arg1);
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2::params

