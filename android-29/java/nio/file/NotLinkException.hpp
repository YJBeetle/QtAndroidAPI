#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./FileSystemException.hpp"


namespace java::nio::file
{
	class NotLinkException : public java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NotLinkException(const char *className, const char *sig, Ts...agv) : java::nio::file::FileSystemException(className, sig, std::forward<Ts>(agv)...) {}
		NotLinkException(QJniObject obj);
		
		// Constructors
		NotLinkException(jstring arg0);
		NotLinkException(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
	};
} // namespace java::nio::file

