#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../../../../java/lang/Exception.hpp"
#include "../../../../java/lang/RuntimeException.hpp"


namespace org::w3c::dom::ls
{
	class LSException : public java::lang::RuntimeException
	{
	public:
		// Fields
		static jshort PARSE_ERR();
		static jshort SERIALIZE_ERR();
		jshort code();
		
		LSException(QAndroidJniObject obj);
		// Constructors
		LSException(jshort &arg0, jstring &arg1);
		LSException(jshort &arg0, const QString &arg1);
		LSException() = default;
		
		// Methods
	};
} // namespace org::w3c::dom::ls

