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
		
		ImageView_ScaleType(QAndroidJniObject obj);
		// Constructors
		ImageView_ScaleType() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::widget

