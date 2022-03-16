#pragma once

#include "../io/IOException.hpp"

class JString;

namespace java::net
{
	class HttpRetryException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HttpRetryException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		HttpRetryException(QAndroidJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		HttpRetryException(JString arg0, jint arg1);
		HttpRetryException(JString arg0, jint arg1, JString arg2);
		
		// Methods
		JString getLocation() const;
		JString getReason() const;
		jint responseCode() const;
	};
} // namespace java::net

