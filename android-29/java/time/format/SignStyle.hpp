#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::time::format
{
	class SignStyle : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ALWAYS();
		static QAndroidJniObject EXCEEDS_PAD();
		static QAndroidJniObject NEVER();
		static QAndroidJniObject NORMAL();
		static QAndroidJniObject NOT_NEGATIVE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SignStyle(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		SignStyle(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::time::format

