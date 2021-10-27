#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::view
{
	class ViewStructure_HtmlInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		ViewStructure_HtmlInfo(QAndroidJniObject obj);
		// Constructors
		ViewStructure_HtmlInfo();
		
		// Methods
		QAndroidJniObject getAttributes();
		jstring getTag();
	};
} // namespace android::view

