#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::print
{
	class PrintAttributes;
}
namespace android::print
{
	class PrintJobInfo;
}

namespace android::print
{
	class PrintJobInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		PrintJobInfo_Builder(QAndroidJniObject obj);
		// Constructors
		PrintJobInfo_Builder(android::print::PrintJobInfo arg0);
		PrintJobInfo_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		void putAdvancedOption(jstring arg0, jint arg1);
		void putAdvancedOption(jstring arg0, jstring arg1);
		void setAttributes(android::print::PrintAttributes arg0);
		void setCopies(jint arg0);
		void setPages(jarray arg0);
	};
} // namespace android::print

