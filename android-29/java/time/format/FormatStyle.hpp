#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::time::format
{
	class FormatStyle : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject FULL();
		static QAndroidJniObject LONG();
		static QAndroidJniObject MEDIUM();
		static QAndroidJniObject SHORT();
		
		FormatStyle(QAndroidJniObject obj);
		// Constructors
		FormatStyle() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace java::time::format

