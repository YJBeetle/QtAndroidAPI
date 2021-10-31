#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../../../lang/Exception.hpp"
#include "../../../io/IOException.hpp"


namespace java::nio::file::attribute
{
	class UserPrincipalNotFoundException : public java::io::IOException
	{
	public:
		// Fields
		
		UserPrincipalNotFoundException(QAndroidJniObject obj);
		// Constructors
		UserPrincipalNotFoundException(jstring arg0);
		UserPrincipalNotFoundException() = default;
		
		// Methods
		jstring getName();
	};
} // namespace java::nio::file::attribute

