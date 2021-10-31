#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./FileSystemException.hpp"


namespace java::nio::file
{
	class AccessDeniedException : public java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessDeniedException(const char *className, const char *sig, Ts...agv) : java::nio::file::FileSystemException(className, sig, std::forward<Ts>(agv)...) {}
		AccessDeniedException(QJniObject obj);
		
		// Constructors
		AccessDeniedException(jstring arg0);
		AccessDeniedException(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
	};
} // namespace java::nio::file

