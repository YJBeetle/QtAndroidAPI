#pragma once

#include "../../../io/IOException.hpp"

class JString;

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
		UserPrincipalNotFoundException(JString arg0);
		
		// Methods
		JString getName();
	};
} // namespace java::nio::file::attribute

