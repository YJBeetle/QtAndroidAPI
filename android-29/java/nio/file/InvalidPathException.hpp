#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


namespace java::nio::file
{
	class InvalidPathException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InvalidPathException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidPathException(QJniObject obj);
		
		// Constructors
		InvalidPathException(jstring arg0, jstring arg1);
		InvalidPathException(jstring arg0, jstring arg1, jint arg2);
		
		// Methods
		jint getIndex();
		jstring getInput();
		jstring getMessage();
		jstring getReason();
	};
} // namespace java::nio::file

