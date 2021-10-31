#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::widget
{
	class Toast_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Toast_Callback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Toast_Callback(QAndroidJniObject obj);
		
		// Constructors
		Toast_Callback();
		
		// Methods
		void onToastHidden();
		void onToastShown();
	};
} // namespace android::widget

