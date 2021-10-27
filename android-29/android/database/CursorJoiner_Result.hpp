#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::database
{
	class CursorJoiner_Result : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BOTH();
		static QAndroidJniObject LEFT();
		static QAndroidJniObject RIGHT();
		
		CursorJoiner_Result(QAndroidJniObject obj);
		// Constructors
		CursorJoiner_Result() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::database

