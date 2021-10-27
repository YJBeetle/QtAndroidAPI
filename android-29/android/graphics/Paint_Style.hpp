#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Paint_Style : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject FILL();
		static QAndroidJniObject FILL_AND_STROKE();
		static QAndroidJniObject STROKE();
		
		Paint_Style(QAndroidJniObject obj);
		// Constructors
		Paint_Style() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::graphics

