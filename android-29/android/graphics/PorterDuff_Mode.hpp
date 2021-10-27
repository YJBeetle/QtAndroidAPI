#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class PorterDuff_Mode : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ADD();
		static QAndroidJniObject CLEAR();
		static QAndroidJniObject DARKEN();
		static QAndroidJniObject DST();
		static QAndroidJniObject DST_ATOP();
		static QAndroidJniObject DST_IN();
		static QAndroidJniObject DST_OUT();
		static QAndroidJniObject DST_OVER();
		static QAndroidJniObject LIGHTEN();
		static QAndroidJniObject MULTIPLY();
		static QAndroidJniObject OVERLAY();
		static QAndroidJniObject SCREEN();
		static QAndroidJniObject SRC();
		static QAndroidJniObject SRC_ATOP();
		static QAndroidJniObject SRC_IN();
		static QAndroidJniObject SRC_OUT();
		static QAndroidJniObject SRC_OVER();
		static QAndroidJniObject XOR();
		
		PorterDuff_Mode(QAndroidJniObject obj);
		// Constructors
		PorterDuff_Mode() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::graphics

