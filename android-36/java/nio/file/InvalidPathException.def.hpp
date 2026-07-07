#pragma once

#include "../../lang/IllegalArgumentException.def.hpp"

class JString;

namespace java::nio::file
{
	class InvalidPathException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InvalidPathException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidPathException(QJniObject obj) : java::lang::IllegalArgumentException(obj) {}
		
		// Constructors
		InvalidPathException(JString arg0, JString arg1);
		InvalidPathException(JString arg0, JString arg1, jint arg2);
		
		// Methods
		jint getIndex() const;
		JString getInput() const;
		JString getMessage() const;
		JString getReason() const;
	};
} // namespace java::nio::file

