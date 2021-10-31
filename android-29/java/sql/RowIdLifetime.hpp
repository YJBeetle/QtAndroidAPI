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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RowIdLifetime(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		RowIdLifetime(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::sql

