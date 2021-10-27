#pragma once

#include "../__JniBaseClass.hpp"


namespace android
{
	class R_integer : public __JniBaseClass
	{
	public:
		// Fields
		static jint config_longAnimTime();
		static jint config_mediumAnimTime();
		static jint config_shortAnimTime();
		static jint status_bar_notification_info_maxnum();
		
		R_integer(QAndroidJniObject obj);
		// Constructors
		R_integer();
		
		// Methods
	};
} // namespace android

