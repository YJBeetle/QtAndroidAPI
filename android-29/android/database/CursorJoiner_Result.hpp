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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CursorJoiner_Result(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		CursorJoiner_Result(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::database

