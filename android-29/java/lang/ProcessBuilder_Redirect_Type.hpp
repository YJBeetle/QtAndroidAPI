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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProcessBuilder_Redirect_Type(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ProcessBuilder_Redirect_Type(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::lang

