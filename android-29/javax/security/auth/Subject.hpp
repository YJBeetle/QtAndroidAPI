#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class Subject : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Subject(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Subject(QAndroidJniObject obj);
		
		// Constructors
		Subject();
		Subject(jboolean arg0, __JniBaseClass arg1, __JniBaseClass arg2, __JniBaseClass arg3);
		
		// Methods
		static jobject doAs(javax::security::auth::Subject arg0, __JniBaseClass arg1);
		static jobject doAsPrivileged(javax::security::auth::Subject arg0, __JniBaseClass arg1, java::security::AccessControlContext arg2);
		static javax::security::auth::Subject getSubject(java::security::AccessControlContext arg0);
		jboolean equals(jobject arg0);
		__JniBaseClass getPrincipals();
		__JniBaseClass getPrincipals(jclass arg0);
		__JniBaseClass getPrivateCredentials();
		__JniBaseClass getPrivateCredentials(jclass arg0);
		__JniBaseClass getPublicCredentials();
		__JniBaseClass getPublicCredentials(jclass arg0);
		jint hashCode();
		jboolean isReadOnly();
		void setReadOnly();
		jstring toString();
	};
} // namespace javax::security::auth

