#pragma once

#include "./IllegalFormatException.hpp"

class JString;

namespace java::util
{
	class MissingFormatWidthException : public java::util::IllegalFormatException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MissingFormatWidthException(const char *className, const char *sig, Ts...agv) : java::util::IllegalFormatException(className, sig, std::forward<Ts>(agv)...) {}
		MissingFormatWidthException(QAndroidJniObject obj) : java::util::IllegalFormatException(obj) {}
		
		// Constructors
		MissingFormatWidthException(JString arg0);
		
		// Methods
		JString getFormatSpecifier() const;
		JString getMessage() const;
	};
} // namespace java::util

