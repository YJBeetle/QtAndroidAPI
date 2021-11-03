#pragma once

#include "./NumberFormat.hpp"

class JDoubleArray;
class JObjectArray;
class JArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::lang
{
	class Number;
}
class JObject;
class JString;
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
		ChoiceFormat(JString arg0);
		ChoiceFormat(JDoubleArray arg0, JArray arg1);
		
		// Methods
		static jdouble nextDouble(jdouble arg0);
		static jdouble nextDouble(jdouble arg0, jboolean arg1);
		static jdouble previousDouble(jdouble arg0);
		void applyPattern(JString arg0);
		JObject clone();
		jboolean equals(JObject arg0);
		java::lang::StringBuffer format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		java::lang::StringBuffer format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		JObjectArray getFormats();
		JDoubleArray getLimits();
		jint hashCode();
		java::lang::Number parse(JString arg0, java::text::ParsePosition arg1);
		void setChoices(JDoubleArray arg0, JArray arg1);
		JString toPattern();
	};
} // namespace java::text

