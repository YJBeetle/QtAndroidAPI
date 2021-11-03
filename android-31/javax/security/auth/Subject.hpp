#pragma once

#include "../../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
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
		static jobject doAs(javax::security::auth::Subject arg0, JObject arg1);
		static jobject doAsPrivileged(javax::security::auth::Subject arg0, JObject arg1, java::security::AccessControlContext arg2);
		static javax::security::auth::Subject getSubject(java::security::AccessControlContext arg0);
		jboolean equals(jobject arg0);
		JObject getPrincipals();
		JObject getPrincipals(jclass arg0);
		JObject getPrivateCredentials();
		JObject getPrivateCredentials(jclass arg0);
		JObject getPublicCredentials();
		JObject getPublicCredentials(jclass arg0);
		jint hashCode();
		jboolean isReadOnly();
		void setReadOnly();
		jstring toString();
	};
} // namespace javax::security::auth

