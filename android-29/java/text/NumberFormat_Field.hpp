#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AttributedCharacterIterator_Attribute.hpp"
#include "./Format_Field.hpp"


namespace java::text
{
	class NumberFormat_Field : public java::text::Format_Field
	{
	public:
		// Fields
		static QAndroidJniObject CURRENCY();
		static QAndroidJniObject DECIMAL_SEPARATOR();
		static QAndroidJniObject EXPONENT();
		static QAndroidJniObject EXPONENT_SIGN();
		static QAndroidJniObject EXPONENT_SYMBOL();
		static QAndroidJniObject FRACTION();
		static QAndroidJniObject GROUPING_SEPARATOR();
		static QAndroidJniObject INTEGER();
		static QAndroidJniObject PERCENT();
		static QAndroidJniObject PERMILLE();
		static QAndroidJniObject PREFIX();
		static QAndroidJniObject SIGN();
		static QAndroidJniObject SUFFIX();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NumberFormat_Field(const char *className, const char *sig, Ts...agv) : java::text::Format_Field(className, sig, std::forward<Ts>(agv)...) {}
		NumberFormat_Field(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::text

