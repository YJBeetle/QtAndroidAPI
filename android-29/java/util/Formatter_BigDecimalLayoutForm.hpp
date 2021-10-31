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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Formatter_BigDecimalLayoutForm(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Formatter_BigDecimalLayoutForm(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::util

