#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Path_Direction : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CCW();
		static QAndroidJniObject CW();
		
		Path_Direction(QAndroidJniObject obj);
		// Constructors
		Path_Direction() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

