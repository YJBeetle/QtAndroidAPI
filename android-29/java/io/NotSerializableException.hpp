#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"
#include "./ObjectStreamException.hpp"


namespace java::io
{
	class NotSerializableException : public java::io::ObjectStreamException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NotSerializableException(const char *className, const char *sig, Ts...agv) : java::io::ObjectStreamException(className, sig, std::forward<Ts>(agv)...) {}
		NotSerializableException(QJniObject obj);
		
		// Constructors
		NotSerializableException();
		NotSerializableException(jstring arg0);
		
		// Methods
	};
} // namespace java::io

