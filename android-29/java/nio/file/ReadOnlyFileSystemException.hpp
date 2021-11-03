#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/UnsupportedOperationException.hpp"


namespace java::nio::file
{
	class ReadOnlyFileSystemException : public java::lang::UnsupportedOperationException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ReadOnlyFileSystemException(const char *className, const char *sig, Ts...agv) : java::lang::UnsupportedOperationException(className, sig, std::forward<Ts>(agv)...) {}
		ReadOnlyFileSystemException(QAndroidJniObject obj);
		
		// Constructors
		ReadOnlyFileSystemException();
		
		// Methods
	};
} // namespace java::nio::file

