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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LSException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		LSException(QAndroidJniObject obj);
		
		// Constructors
		LSException(jshort arg0, jstring arg1);
		
		// Methods
	};
} // namespace org::w3c::dom::ls

