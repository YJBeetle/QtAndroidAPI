#pragma once

#include "./IllegalFormatException.def.hpp"

class JClass;
class JString;

namespace java::util
{
	class IllegalFormatConversionException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IllegalFormatConversionException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalFormatConversionException(QAndroidJniObject obj) : java::util::IllegalFormatException(obj) {}
		
		// Constructors
		IllegalFormatConversionException(jchar arg0, JClass arg1);
		
		// Methods
		JClass getArgumentClass() const;
		jchar getConversion() const;
		JString getMessage() const;
	};
} // namespace java::util

