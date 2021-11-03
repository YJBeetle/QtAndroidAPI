#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;
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
	class Timestamp : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Timestamp(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Timestamp(QAndroidJniObject obj);
		
		// Constructors
		Timestamp(java::util::Date arg0, java::security::cert::CertPath arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		java::security::cert::CertPath getSignerCertPath() const;
		java::util::Date getTimestamp() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace java::security

