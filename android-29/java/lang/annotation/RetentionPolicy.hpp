#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Enum.hpp"


namespace java::lang::annotation
{
	class RetentionPolicy : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CLASS();
		static QAndroidJniObject RUNTIME();
		static QAndroidJniObject SOURCE();
		
		RetentionPolicy(QAndroidJniObject obj);
		// Constructors
		RetentionPolicy() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::lang::annotation

