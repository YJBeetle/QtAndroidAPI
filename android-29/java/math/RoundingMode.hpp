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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RoundingMode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		RoundingMode(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jint arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::math

