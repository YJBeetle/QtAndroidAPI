#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::print
{
	class PrintDocumentInfo;
}

namespace android::print
{
	class PrintDocumentInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintDocumentInfo_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrintDocumentInfo_Builder(QAndroidJniObject obj);
		
		// Constructors
		PrintDocumentInfo_Builder(jstring arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setContentType(jint arg0);
		QAndroidJniObject setPageCount(jint arg0);
	};
} // namespace android::print

