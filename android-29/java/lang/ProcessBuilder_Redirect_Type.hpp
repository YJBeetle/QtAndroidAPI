#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Enum.hpp"


namespace java::lang
{
	class ProcessBuilder_Redirect_Type : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject APPEND();
		static QAndroidJniObject INHERIT();
		static QAndroidJniObject PIPE();
		static QAndroidJniObject READ();
		static QAndroidJniObject WRITE();
		
		ProcessBuilder_Redirect_Type(QAndroidJniObject obj);
		// Constructors
		ProcessBuilder_Redirect_Type() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace java::lang

