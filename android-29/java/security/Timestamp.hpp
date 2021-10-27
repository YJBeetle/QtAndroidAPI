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
		
		Timestamp(QAndroidJniObject obj);
		// Constructors
		Timestamp(java::util::Date &arg0, java::security::cert::CertPath &arg1);
		Timestamp() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getSignerCertPath();
		QAndroidJniObject getTimestamp();
		jint hashCode();
		jstring toString();
	};
} // namespace java::security

