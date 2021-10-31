#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::security::cert
{
	class CertPath;
}
namespace java::util
{
	class Date;
}

namespace java::security
{
	class Timestamp : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Timestamp(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Timestamp(QAndroidJniObject obj);
		
		// Constructors
		Timestamp(java::util::Date arg0, java::security::cert::CertPath arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		java::security::cert::CertPath getSignerCertPath();
		java::util::Date getTimestamp();
		jint hashCode();
		jstring toString();
	};
} // namespace java::security

