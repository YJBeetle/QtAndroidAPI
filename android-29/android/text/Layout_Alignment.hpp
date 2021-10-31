#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::text
{
	class Layout_Alignment : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ALIGN_CENTER();
		static QAndroidJniObject ALIGN_NORMAL();
		static QAndroidJniObject ALIGN_OPPOSITE();
		
		Layout_Alignment(QAndroidJniObject obj);
		// Constructors
		Layout_Alignment() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::text

