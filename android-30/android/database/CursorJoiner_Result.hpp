#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::database
{
	class CursorJoiner_Result : public java::lang::Enum
	{
	public:
		// Fields
		static android::database::CursorJoiner_Result BOTH();
		static android::database::CursorJoiner_Result LEFT();
		static android::database::CursorJoiner_Result RIGHT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CursorJoiner_Result(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		CursorJoiner_Result(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::database::CursorJoiner_Result valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::database

