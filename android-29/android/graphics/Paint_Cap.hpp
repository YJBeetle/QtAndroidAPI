#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Paint_Cap : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BUTT();
		static QAndroidJniObject ROUND();
		static QAndroidJniObject SQUARE();
		
		Paint_Cap(QAndroidJniObject obj);
		// Constructors
		Paint_Cap() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::graphics

