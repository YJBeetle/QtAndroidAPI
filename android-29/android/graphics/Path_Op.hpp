#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Path_Op : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DIFFERENCE();
		static QAndroidJniObject INTERSECT();
		static QAndroidJniObject REVERSE_DIFFERENCE();
		static QAndroidJniObject UNION();
		static QAndroidJniObject XOR();
		
		Path_Op(QAndroidJniObject obj);
		// Constructors
		Path_Op() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

