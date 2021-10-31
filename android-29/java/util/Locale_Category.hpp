#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"


namespace java::util
{
	class Locale_Category : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DISPLAY();
		static QAndroidJniObject FORMAT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Locale_Category(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Locale_Category(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::util

