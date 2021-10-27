#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace java::math
{
	class RoundingMode : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CEILING();
		static QAndroidJniObject DOWN();
		static QAndroidJniObject FLOOR();
		static QAndroidJniObject HALF_DOWN();
		static QAndroidJniObject HALF_EVEN();
		static QAndroidJniObject HALF_UP();
		static QAndroidJniObject UNNECESSARY();
		static QAndroidJniObject UP();
		
		RoundingMode(QAndroidJniObject obj);
		// Constructors
		RoundingMode() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jint arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace java::math

