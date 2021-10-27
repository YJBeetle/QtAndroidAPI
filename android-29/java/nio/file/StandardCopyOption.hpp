#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::nio::file
{
	class StandardCopyOption : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ATOMIC_MOVE();
		static QAndroidJniObject COPY_ATTRIBUTES();
		static QAndroidJniObject REPLACE_EXISTING();
		
		StandardCopyOption(QAndroidJniObject obj);
		// Constructors
		StandardCopyOption() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace java::nio::file

