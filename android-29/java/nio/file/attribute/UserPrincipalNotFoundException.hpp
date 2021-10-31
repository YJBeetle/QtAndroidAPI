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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UserPrincipalNotFoundException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		UserPrincipalNotFoundException(QAndroidJniObject obj);
		
		// Constructors
		UserPrincipalNotFoundException(jstring arg0);
		
		// Methods
		jstring getName();
	};
} // namespace java::nio::file::attribute

