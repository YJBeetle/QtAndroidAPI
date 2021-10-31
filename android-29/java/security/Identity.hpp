#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security
{
	class IdentityScope;
}
namespace java::util
{
	class Vector;
}

namespace java::security
{
	class Identity : public __JniBaseClass
	{
	public:
		// Fields
		
		Identity(QAndroidJniObject obj);
		// Constructors
		Identity(jstring arg0);
		Identity(jstring arg0, java::security::IdentityScope arg1);
		Identity() = default;
		
		// Methods
		void addCertificate(__JniBaseClass arg0);
		jarray certificates();
		jboolean equals(jobject arg0);
		jstring getInfo();
		jstring getName();
		QAndroidJniObject getPublicKey();
		QAndroidJniObject getScope();
		jint hashCode();
		void removeCertificate(__JniBaseClass arg0);
		void setInfo(jstring arg0);
		void setPublicKey(__JniBaseClass arg0);
		jstring toString();
		jstring toString(jboolean arg0);
	};
} // namespace java::security

