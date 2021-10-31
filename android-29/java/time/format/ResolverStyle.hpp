#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::time::format
{
	class ResolverStyle : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject LENIENT();
		static QAndroidJniObject SMART();
		static QAndroidJniObject STRICT();
		
		ResolverStyle(QAndroidJniObject obj);
		// Constructors
		ResolverStyle() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::time::format

