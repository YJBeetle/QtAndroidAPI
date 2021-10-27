#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::security
{
	class Provider;
}

namespace java::security::cert
{
	class Certificate : public __JniBaseClass
	{
	public:
		// Fields
		
		Certificate(QAndroidJniObject obj);
		// Constructors
		Certificate() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jbyteArray getEncoded();
		QAndroidJniObject getPublicKey();
		jstring getType();
		jint hashCode();
		jstring toString();
		void verify(__JniBaseClass arg0);
		void verify(__JniBaseClass arg0, jstring arg1);
		void verify(__JniBaseClass arg0, const QString &arg1);
		void verify(__JniBaseClass arg0, java::security::Provider arg1);
	};
} // namespace java::security::cert

