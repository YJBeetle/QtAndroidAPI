#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::widget
{
	class Filter_FilterResults : public __JniBaseClass
	{
	public:
		// Fields
		jint count();
		jobject values();
		
		Filter_FilterResults(QAndroidJniObject obj);
		// Constructors
		Filter_FilterResults();
		
		// Methods
	};
} // namespace android::widget

