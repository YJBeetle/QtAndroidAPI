#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Region_Op : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DIFFERENCE();
		static QAndroidJniObject INTERSECT();
		static QAndroidJniObject REPLACE();
		static QAndroidJniObject REVERSE_DIFFERENCE();
		static QAndroidJniObject UNION();
		static QAndroidJniObject XOR();
		
		Region_Op(QAndroidJniObject obj);
		// Constructors
		Region_Op() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::graphics

