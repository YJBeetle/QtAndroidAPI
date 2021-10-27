#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::print
{
	class PrintAttributes_Margins : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject NO_MARGINS();
		
		PrintAttributes_Margins(QAndroidJniObject obj);
		// Constructors
		PrintAttributes_Margins(jint &arg0, jint &arg1, jint &arg2, jint &arg3);
		PrintAttributes_Margins() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint getBottomMils();
		jint getLeftMils();
		jint getRightMils();
		jint getTopMils();
		jint hashCode();
		jstring toString();
	};
} // namespace android::print

