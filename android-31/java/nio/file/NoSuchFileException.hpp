#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./FileSystemException.hpp"


namespace java::nio::file
{
	class NoSuchFileException : public java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NoSuchFileException(const char *className, const char *sig, Ts...agv) : java::nio::file::FileSystemException(className, sig, std::forward<Ts>(agv)...) {}
		NoSuchFileException(QAndroidJniObject obj);
		
		// Constructors
		NoSuchFileException(jstring arg0);
		NoSuchFileException(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
	};
} // namespace java::nio::file

