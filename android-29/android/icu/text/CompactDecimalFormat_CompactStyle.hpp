#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class CompactDecimalFormat_CompactStyle : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject LONG();
		static QAndroidJniObject SHORT();
		
		CompactDecimalFormat_CompactStyle(QAndroidJniObject obj);
		// Constructors
		CompactDecimalFormat_CompactStyle() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::icu::text

