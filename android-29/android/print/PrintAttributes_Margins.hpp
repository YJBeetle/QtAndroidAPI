#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::print
{
	class PrintAttributes_Margins : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject NO_MARGINS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintAttributes_Margins(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrintAttributes_Margins(QAndroidJniObject obj);
		
		// Constructors
		PrintAttributes_Margins(jint arg0, jint arg1, jint arg2, jint arg3);
		
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

