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
		
		SignStyle(QAndroidJniObject obj);
		// Constructors
		SignStyle() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace java::time::format

