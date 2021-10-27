#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../security/Permission.hpp"
#include "../../security/BasicPermission.hpp"


namespace java::lang::reflect
{
	class ReflectPermission : public java::security::BasicPermission
	{
	public:
		// Fields
		
		ReflectPermission(QAndroidJniObject obj);
		// Constructors
		ReflectPermission(jstring &arg0);
		ReflectPermission(const QString &arg0);
		ReflectPermission(jstring &arg0, jstring &arg1);
		ReflectPermission(const QString &arg0, const QString &arg1);
		ReflectPermission() = default;
		
		// Methods
	};
} // namespace java::lang::reflect

