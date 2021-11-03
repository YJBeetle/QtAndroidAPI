#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"
#include "./ObjectStreamException.hpp"


namespace java::io
{
	class InvalidClassException : public java::io::ObjectStreamException
	{
	public:
		// Fields
		jstring classname();
		
		// QJniObject forward
		template<typename ...Ts> explicit InvalidClassException(const char *className, const char *sig, Ts...agv) : java::io::ObjectStreamException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidClassException(QJniObject obj);
		
		// Constructors
		InvalidClassException(jstring arg0);
		InvalidClassException(jstring arg0, jstring arg1);
		
		// Methods
		jstring getMessage();
	};
} // namespace java::io

