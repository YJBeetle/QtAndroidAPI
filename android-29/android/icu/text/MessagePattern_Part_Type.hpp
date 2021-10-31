#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class MessagePattern_Part_Type : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ARG_DOUBLE();
		static QAndroidJniObject ARG_INT();
		static QAndroidJniObject ARG_LIMIT();
		static QAndroidJniObject ARG_NAME();
		static QAndroidJniObject ARG_NUMBER();
		static QAndroidJniObject ARG_SELECTOR();
		static QAndroidJniObject ARG_START();
		static QAndroidJniObject ARG_STYLE();
		static QAndroidJniObject ARG_TYPE();
		static QAndroidJniObject INSERT_CHAR();
		static QAndroidJniObject MSG_LIMIT();
		static QAndroidJniObject MSG_START();
		static QAndroidJniObject REPLACE_NUMBER();
		static QAndroidJniObject SKIP_SYNTAX();
		
		MessagePattern_Part_Type(QAndroidJniObject obj);
		// Constructors
		MessagePattern_Part_Type() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
		jboolean hasNumericValue();
	};
} // namespace android::icu::text

