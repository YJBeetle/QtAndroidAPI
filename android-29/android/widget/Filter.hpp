#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::widget
{
	class Filter_FilterResults;
}

namespace android::widget
{
	class Filter : public __JniBaseClass
	{
	public:
		// Fields
		
		Filter(QAndroidJniObject obj);
		// Constructors
		Filter();
		
		// Methods
		jstring convertResultToString(jobject arg0);
		void filter(jstring arg0);
		void filter(const QString &arg0);
		void filter(jstring arg0, __JniBaseClass arg1);
		void filter(const QString &arg0, __JniBaseClass arg1);
	};
} // namespace android::widget

