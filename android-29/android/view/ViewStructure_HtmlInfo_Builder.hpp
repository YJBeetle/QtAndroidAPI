#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class ViewStructure_HtmlInfo;
}

namespace android::view
{
	class ViewStructure_HtmlInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		ViewStructure_HtmlInfo_Builder(QAndroidJniObject obj);
		// Constructors
		ViewStructure_HtmlInfo_Builder();
		
		// Methods
		QAndroidJniObject addAttribute(jstring arg0, jstring arg1);
		QAndroidJniObject build();
	};
} // namespace android::view

