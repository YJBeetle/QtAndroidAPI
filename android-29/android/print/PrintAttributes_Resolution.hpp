#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::print
{
	class PrintAttributes_Resolution : public __JniBaseClass
	{
	public:
		// Fields
		
		PrintAttributes_Resolution(QAndroidJniObject obj);
		// Constructors
		PrintAttributes_Resolution(jstring arg0, jstring arg1, jint arg2, jint arg3);
		PrintAttributes_Resolution() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint getHorizontalDpi();
		jstring getId();
		jstring getLabel();
		jint getVerticalDpi();
		jint hashCode();
		jstring toString();
	};
} // namespace android::print

