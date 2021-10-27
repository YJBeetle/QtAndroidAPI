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
		
		PrintDocumentInfo_Builder(QAndroidJniObject obj);
		// Constructors
		PrintDocumentInfo_Builder(jstring &arg0);
		PrintDocumentInfo_Builder(const QString &arg0);
		PrintDocumentInfo_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setContentType(jint arg0);
		QAndroidJniObject setPageCount(jint arg0);
	};
} // namespace android::print

