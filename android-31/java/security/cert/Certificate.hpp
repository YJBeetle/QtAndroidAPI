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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Certificate(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Certificate(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jbyteArray getEncoded();
		__JniBaseClass getPublicKey();
		jstring getType();
		jint hashCode();
		jstring toString();
		void verify(__JniBaseClass arg0);
		void verify(__JniBaseClass arg0, jstring arg1);
		void verify(__JniBaseClass arg0, java::security::Provider arg1);
	};
} // namespace java::security::cert

