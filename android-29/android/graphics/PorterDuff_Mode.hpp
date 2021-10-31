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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PorterDuff_Mode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		PorterDuff_Mode(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

