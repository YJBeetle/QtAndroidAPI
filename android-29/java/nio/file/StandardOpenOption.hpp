#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::nio::file
{
	class StandardOpenOption : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject APPEND();
		static QAndroidJniObject CREATE();
		static QAndroidJniObject CREATE_NEW();
		static QAndroidJniObject DELETE_ON_CLOSE();
		static QAndroidJniObject DSYNC();
		static QAndroidJniObject READ();
		static QAndroidJniObject SPARSE();
		static QAndroidJniObject SYNC();
		static QAndroidJniObject TRUNCATE_EXISTING();
		static QAndroidJniObject WRITE();
		
		StandardOpenOption(QAndroidJniObject obj);
		// Constructors
		StandardOpenOption() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace java::nio::file

