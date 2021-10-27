#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace java::util
{
	class Formatter_BigDecimalLayoutForm : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DECIMAL_FLOAT();
		static QAndroidJniObject SCIENTIFIC();
		
		Formatter_BigDecimalLayoutForm(QAndroidJniObject obj);
		// Constructors
		Formatter_BigDecimalLayoutForm() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace java::util

