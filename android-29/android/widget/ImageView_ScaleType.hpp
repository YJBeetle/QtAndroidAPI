#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::widget
{
	class ImageView_ScaleType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CENTER();
		static QAndroidJniObject CENTER_CROP();
		static QAndroidJniObject CENTER_INSIDE();
		static QAndroidJniObject FIT_CENTER();
		static QAndroidJniObject FIT_END();
		static QAndroidJniObject FIT_START();
		static QAndroidJniObject FIT_XY();
		static QAndroidJniObject MATRIX();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImageView_ScaleType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ImageView_ScaleType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::widget

