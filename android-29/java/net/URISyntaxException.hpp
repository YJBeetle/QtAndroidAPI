#pragma once

#include "../lang/Exception.hpp"

class JString;

namespace java::net
{
	class URISyntaxException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit URISyntaxException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		URISyntaxException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		URISyntaxException(JString arg0, JString arg1);
		URISyntaxException(JString arg0, JString arg1, jint arg2);
		
		// Methods
		jint getIndex() const;
		JString getInput() const;
		JString getMessage() const;
		JString getReason() const;
	};
} // namespace java::net

