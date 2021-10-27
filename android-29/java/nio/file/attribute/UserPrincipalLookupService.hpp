#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::java::nio::file::attribute
{
	class UserPrincipalLookupService : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject lookupPrincipalByGroupName(jstring arg0);
		QAndroidJniObject lookupPrincipalByGroupName(const QString &arg0);
		QAndroidJniObject lookupPrincipalByName(jstring arg0);
		QAndroidJniObject lookupPrincipalByName(const QString &arg0);
	};
} // namespace __jni_impl::java::nio::file::attribute


namespace __jni_impl::java::nio::file::attribute
{
	// Fields
	
	// Constructors
	void UserPrincipalLookupService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.attribute.UserPrincipalLookupService",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject UserPrincipalLookupService::lookupPrincipalByGroupName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"lookupPrincipalByGroupName",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/GroupPrincipal;",
			arg0
		);
	}
	QAndroidJniObject UserPrincipalLookupService::lookupPrincipalByGroupName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"lookupPrincipalByGroupName",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/GroupPrincipal;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject UserPrincipalLookupService::lookupPrincipalByName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"lookupPrincipalByName",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/UserPrincipal;",
			arg0
		);
	}
	QAndroidJniObject UserPrincipalLookupService::lookupPrincipalByName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"lookupPrincipalByName",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/UserPrincipal;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::java::nio::file::attribute

namespace java::nio::file::attribute
{
	class UserPrincipalLookupService : public __jni_impl::java::nio::file::attribute::UserPrincipalLookupService
	{
	public:
		UserPrincipalLookupService(QAndroidJniObject obj) { __thiz = obj; }
		UserPrincipalLookupService()
		{
			__constructor();
		}
	};
} // namespace java::nio::file::attribute

