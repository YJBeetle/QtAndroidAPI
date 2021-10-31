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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Filter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Filter(QAndroidJniObject obj);
		
		// Constructors
		Filter();
		
		// Methods
		jstring convertResultToString(jobject arg0);
		void filter(jstring arg0);
		void filter(jstring arg0, __JniBaseClass arg1);
	};
} // namespace android::widget

