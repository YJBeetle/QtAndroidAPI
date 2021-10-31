#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::widget
{
	class GridLayout_Alignment : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GridLayout_Alignment(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GridLayout_Alignment(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::widget

