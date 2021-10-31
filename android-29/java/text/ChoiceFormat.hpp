#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Format.hpp"
#include "./NumberFormat.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::lang
{
	class Number;
}
namespace java::lang
{
	class StringBuffer;
}
namespace java::text
{
	class FieldPosition;
}
namespace java::text
{
	class ParsePosition;
}

namespace java::text
{
	class ChoiceFormat : public java::text::NumberFormat
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ChoiceFormat(const char *className, const char *sig, Ts...agv) : java::text::NumberFormat(className, sig, std::forward<Ts>(agv)...) {}
		ChoiceFormat(QJniObject obj);
		
		// Constructors
		ChoiceFormat(jstring arg0);
		ChoiceFormat(jdoubleArray arg0, jarray arg1);
		
		// Methods
		static jdouble nextDouble(jdouble arg0);
		static jdouble nextDouble(jdouble arg0, jboolean arg1);
		static jdouble previousDouble(jdouble arg0);
		void applyPattern(jstring arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		java::lang::StringBuffer format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		jobjectArray getFormats();
		jdoubleArray getLimits();
		jint hashCode();
		java::lang::Number parse(jstring arg0, java::text::ParsePosition arg1);
		void setChoices(jdoubleArray arg0, jarray arg1);
		jstring toPattern();
	};
} // namespace java::text

