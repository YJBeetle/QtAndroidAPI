#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace java::util
{
	class Locale_FilteringMode : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject AUTOSELECT_FILTERING();
		static QAndroidJniObject EXTENDED_FILTERING();
		static QAndroidJniObject IGNORE_EXTENDED_RANGES();
		static QAndroidJniObject MAP_EXTENDED_RANGES();
		static QAndroidJniObject REJECT_EXTENDED_RANGES();
		
		Locale_FilteringMode(QAndroidJniObject obj);
		// Constructors
		Locale_FilteringMode() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace java::util

