#pragma once

#include "../zip/ZipException.hpp"

class JString;

namespace java::util::jar
{
	class JarException : public java::util::zip::ZipException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JarException(const char *className, const char *sig, Ts...agv) : java::util::zip::ZipException(className, sig, std::forward<Ts>(agv)...) {}
		JarException(QAndroidJniObject obj) : java::util::zip::ZipException(obj) {}
		
		// Constructors
		JarException();
		JarException(JString arg0);
		
		// Methods
	};
} // namespace java::util::jar

