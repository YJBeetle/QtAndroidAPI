#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::security::cert
{
	class Certificate : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Certificate(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Certificate(QAndroidJniObject obj);
		
		// Constructors
		Certificate();
		
		// Methods
		jboolean equals(jobject arg0);
		jbyteArray getEncoded();
		__JniBaseClass getPublicKey();
		jint hashCode();
		jstring toString();
		void verify(__JniBaseClass arg0);
		void verify(__JniBaseClass arg0, jstring arg1);
	};
} // namespace javax::security::cert

