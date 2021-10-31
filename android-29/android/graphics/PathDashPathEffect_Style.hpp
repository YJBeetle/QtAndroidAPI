#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class PathDashPathEffect_Style : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject MORPH();
		static QAndroidJniObject ROTATE();
		static QAndroidJniObject TRANSLATE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PathDashPathEffect_Style(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		PathDashPathEffect_Style(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

