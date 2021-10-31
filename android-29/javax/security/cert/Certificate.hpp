#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::security::cert
{
	class Certificate : public __JniBaseClass
	{
	public:
		// Fields
		
		Certificate(QAndroidJniObject obj);
		// Constructors
		Certificate();
		
		// Methods
		jboolean equals(jobject arg0);
		jbyteArray getEncoded();
		QAndroidJniObject getPublicKey();
		jint hashCode();
		jstring toString();
		void verify(__JniBaseClass arg0);
		void verify(__JniBaseClass arg0, jstring arg1);
	};
} // namespace javax::security::cert

