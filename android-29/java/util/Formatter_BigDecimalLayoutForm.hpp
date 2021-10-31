#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace java::util
{
	class Formatter_BigDecimalLayoutForm : public java::lang::Enum
	{
	public:
		// Fields
		static java::util::Formatter_BigDecimalLayoutForm DECIMAL_FLOAT();
		static java::util::Formatter_BigDecimalLayoutForm SCIENTIFIC();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Formatter_BigDecimalLayoutForm(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Formatter_BigDecimalLayoutForm(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::Formatter_BigDecimalLayoutForm valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::util

