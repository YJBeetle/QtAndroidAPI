#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::nio::file
{
	class LinkOption : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NOFOLLOW_LINKS();
		
		LinkOption(QAndroidJniObject obj);
		// Constructors
		LinkOption() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace java::nio::file

