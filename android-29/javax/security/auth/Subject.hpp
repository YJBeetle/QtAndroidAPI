#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JClass;
class JObject;
class JString;
namespace java::security
{
	class AccessControlContext;
}
namespace java::util
{
	class LinkedList;
}

namespace javax::security::auth
{
	class Subject : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Subject(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Subject(QAndroidJniObject obj);
		
		// Constructors
		Subject();
		Subject(jboolean arg0, JObject arg1, JObject arg2, JObject arg3);
		
		// Methods
		static JObject doAs(javax::security::auth::Subject arg0, JObject arg1);
		static JObject doAsPrivileged(javax::security::auth::Subject arg0, JObject arg1, java::security::AccessControlContext arg2);
		static javax::security::auth::Subject getSubject(java::security::AccessControlContext arg0);
		jboolean equals(JObject arg0) const;
		JObject getPrincipals() const;
		JObject getPrincipals(JClass arg0) const;
		JObject getPrivateCredentials() const;
		JObject getPrivateCredentials(JClass arg0) const;
		JObject getPublicCredentials() const;
		JObject getPublicCredentials(JClass arg0) const;
		jint hashCode() const;
		jboolean isReadOnly() const;
		void setReadOnly() const;
		JString toString() const;
	};
} // namespace javax::security::auth

