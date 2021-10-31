#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::time::format
{
	class FormatStyle : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject FULL();
		static QAndroidJniObject LONG();
		static QAndroidJniObject MEDIUM();
		static QAndroidJniObject SHORT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FormatStyle(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		FormatStyle(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::time::format

