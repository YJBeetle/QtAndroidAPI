#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Paint_Join : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BEVEL();
		static QAndroidJniObject MITER();
		static QAndroidJniObject ROUND();
		
		Paint_Join(QAndroidJniObject obj);
		// Constructors
		Paint_Join() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

