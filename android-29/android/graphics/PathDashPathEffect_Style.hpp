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
		
		PathDashPathEffect_Style(QAndroidJniObject obj);
		// Constructors
		PathDashPathEffect_Style() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::graphics

