#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class BlendMode : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CLEAR();
		static QAndroidJniObject COLOR();
		static QAndroidJniObject COLOR_BURN();
		static QAndroidJniObject COLOR_DODGE();
		static QAndroidJniObject DARKEN();
		static QAndroidJniObject DIFFERENCE();
		static QAndroidJniObject DST();
		static QAndroidJniObject DST_ATOP();
		static QAndroidJniObject DST_IN();
		static QAndroidJniObject DST_OUT();
		static QAndroidJniObject DST_OVER();
		static QAndroidJniObject EXCLUSION();
		static QAndroidJniObject HARD_LIGHT();
		static QAndroidJniObject HUE();
		static QAndroidJniObject LIGHTEN();
		static QAndroidJniObject LUMINOSITY();
		static QAndroidJniObject MODULATE();
		static QAndroidJniObject MULTIPLY();
		static QAndroidJniObject OVERLAY();
		static QAndroidJniObject PLUS();
		static QAndroidJniObject SATURATION();
		static QAndroidJniObject SCREEN();
		static QAndroidJniObject SOFT_LIGHT();
		static QAndroidJniObject SRC();
		static QAndroidJniObject SRC_ATOP();
		static QAndroidJniObject SRC_IN();
		static QAndroidJniObject SRC_OUT();
		static QAndroidJniObject SRC_OVER();
		static QAndroidJniObject XOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BlendMode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		BlendMode(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

