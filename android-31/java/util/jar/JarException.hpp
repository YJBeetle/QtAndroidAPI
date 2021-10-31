#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "../zip/ZipException.hpp"


namespace java::util::jar
{
	class JarException : public java::util::zip::ZipException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JarException(const char *className, const char *sig, Ts...agv) : java::util::zip::ZipException(className, sig, std::forward<Ts>(agv)...) {}
		JarException(QAndroidJniObject obj);
		
		// Constructors
		JarException();
		JarException(jstring arg0);
		
		// Methods
	};
} // namespace java::util::jar

