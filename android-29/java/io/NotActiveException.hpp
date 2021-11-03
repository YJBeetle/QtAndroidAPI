#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"
#include "./ObjectStreamException.hpp"


namespace java::io
{
	class NotActiveException : public java::io::ObjectStreamException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NotActiveException(const char *className, const char *sig, Ts...agv) : java::io::ObjectStreamException(className, sig, std::forward<Ts>(agv)...) {}
		NotActiveException(QJniObject obj);
		
		// Constructors
		NotActiveException();
		NotActiveException(jstring arg0);
		
		// Methods
	};
} // namespace java::io

