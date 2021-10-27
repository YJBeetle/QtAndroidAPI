#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace java::sql
{
	class RowIdLifetime : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ROWID_UNSUPPORTED();
		static QAndroidJniObject ROWID_VALID_FOREVER();
		static QAndroidJniObject ROWID_VALID_OTHER();
		static QAndroidJniObject ROWID_VALID_SESSION();
		static QAndroidJniObject ROWID_VALID_TRANSACTION();
		
		RowIdLifetime(QAndroidJniObject obj);
		// Constructors
		RowIdLifetime() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace java::sql

