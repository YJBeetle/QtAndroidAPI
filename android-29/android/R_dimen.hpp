#pragma once

#include "../__JniBaseClass.hpp"


namespace android
{
	class R_dimen : public __JniBaseClass
	{
	public:
		// Fields
		static jint app_icon_size();
		static jint dialog_min_width_major();
		static jint dialog_min_width_minor();
		static jint notification_large_icon_height();
		static jint notification_large_icon_width();
		static jint thumbnail_height();
		static jint thumbnail_width();
		
		R_dimen(QAndroidJniObject obj);
		// Constructors
		R_dimen();
		
		// Methods
	};
} // namespace android

